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

#include "Backend.h"

#include <iostream>
#include <sstream>
#include <iomanip>

void Streamer::openStream(void)
{
  if(!activated)
  {
    return;
  }

  if(streamToFile)
  {
    outFile.open(getFileName());
  }
  streamOpen = true;

  stream(printHeader);
  stream("\n");
}

void Streamer::stream(std::string in_)
{
  if(!streamOpen)
  {
    return;
  }

  if(!streamToFile)
  {
    std::cout << in_;
  }
  else
  {
    outFile << in_;
    if(outFileFull())
    {
      swapOutFile();
    }
  }
}

void Streamer::closeStream(void)
{
  if(!streamOpen)
  {
    return;
  }

  if(streamToFile)
  {
    outFile.close();
  }
  streamOpen = false;
}

void Streamer::setOutFile(std::string fileNameBase_, std::string outDir_, std::string filePostfix_, int maxFileSize_)
{
  if(streamOpen)
  {
    return;
  }

  outDir = outDir_;
  fileNameBase = fileNameBase_;
  filePostfix = filePostfix_;
  maxFileSize = maxFileSize_;
  streamToFile = true;
}

void Streamer::setPrintHeader(std::string header_)
{
  if(streamOpen)
  {
    return;
  }

  printHeader = header_;
}

void Streamer::swapOutFile(void)
{
  outFile.close();
  fileIndex += 1;
  outFile.open(getFileName());
  stream(printHeader);
  //stream("\n");
}

std::string Streamer::getFileName(void)
{
  std::stringstream fileName;
  fileName << outDir << "/" << fileNameBase << "_" << std::setw(4) << std::setfill('0') << fileIndex << filePostfix;
  return fileName.str();
}

void Backend::activateStreamToFile(std::string fileNameBase_, std::string outDir_, std::string filePostfix_, int maxFileSize_)
{
  streamer.activate();
  streamer.setOutFile(fileNameBase_, outDir_, filePostfix_, maxFileSize_);
}
