/*
 * Copyright 2023 Chair of EDA, Technical University of Munich
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *	 http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef SWEVAL_BACKENDS_BACKEND_H
#define SWEVAL_BACKENDS_BACKEND_H

#include "Channel.h"

#include <stdbool.h>
#include <string>
#include <fstream>

class Streamer
{
public:
  Streamer(){};
  ~Streamer()=default;

  void activate(void) { activated = true; };
  bool isActive(void) { return activated; };
  void openStream(void);
  void stream(std::string);
  void closeStream(void);
  void setOutFile(std::string, std::string, std::string, int);
  void setPrintHeader(std::string);
  
private:
  bool activated = false;
  bool streamOpen = false;
  bool streamToFile = false;

  std::ofstream outFile;
  int maxFileSize;
  int fileIndex=0;
  std::string outDir;
  std::string fileNameBase;
  std::string filePostfix;
  
  std::string printHeader="";
  
  bool outFileFull(void) { return outFile.tellp() > maxFileSize; };
  void swapOutFile(void);
  std::string getFileName(void);
};

class Backend
{
 public:
  Backend(): streamer() {};
  ~Backend()=default;
  
  virtual void connectChannel(Channel*)=0;
  virtual void initialize(void)=0;
  virtual void execute(void)=0;
  virtual void finalize(void)=0;

  void activateStreamToCout(void) { streamer.activate(); };
  void activateStreamToFile(std::string, std::string, std::string, int);

protected:
  Streamer streamer;
  
};

#endif //SWEVAL_BACKENDS_BACKEND_H
