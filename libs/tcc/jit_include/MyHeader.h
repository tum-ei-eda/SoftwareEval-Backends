#ifndef MY_TEST_HEADER
#define MY_TEST_HEADER

// Dummy macro
// TODO: Do we even need this?
#define MAX1(a) ((a))

// Base macro
#define MAX2(a,b) ((a) > (b) ? (a) : (b))

// Level 3–8
#define MAX3(a,b,c) MAX2(MAX2(a,b), c)

#define MAX4(a,b,c,d) \
    MAX2(MAX2(a,b), MAX2(c,d))

#define MAX5(a,b,c,d,e) \
    MAX2(MAX4(a,b,c,d), e)

#define MAX6(a,b,c,d,e,f) \
    MAX2(MAX4(a,b,c,d), MAX2(e,f))

#define MAX7(a,b,c,d,e,f,g) \
    MAX2(MAX4(a,b,c,d), MAX3(e,f,g))

#define MAX8(a,b,c,d,e,f,g,h) \
    MAX2(MAX4(a,b,c,d), MAX4(e,f,g,h))

// Level 9–16
#define MAX9(a,b,c,d,e,f,g,h,i) \
    MAX2(MAX8(a,b,c,d,e,f,g,h), i)

#define MAX10(a,b,c,d,e,f,g,h,i,j) \
    MAX2(MAX8(a,b,c,d,e,f,g,h), MAX2(i,j))

#define MAX11(a,b,c,d,e,f,g,h,i,j,k) \
    MAX2(MAX8(a,b,c,d,e,f,g,h), MAX3(i,j,k))

#define MAX12(a,b,c,d,e,f,g,h,i,j,k,l) \
    MAX2(MAX8(a,b,c,d,e,f,g,h), MAX4(i,j,k,l))

#define MAX13(a,b,c,d,e,f,g,h,i,j,k,l,m) \
    MAX2(MAX8(a,b,c,d,e,f,g,h), MAX5(i,j,k,l,m))

#define MAX14(a,b,c,d,e,f,g,h,i,j,k,l,m,n) \
    MAX2(MAX8(a,b,c,d,e,f,g,h), MAX6(i,j,k,l,m,n))

#define MAX15(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o) \
    MAX2(MAX8(a,b,c,d,e,f,g,h), MAX7(i,j,k,l,m,n,o))

#define MAX16(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p) \
    MAX2(MAX8(a,b,c,d,e,f,g,h), MAX8(i,j,k,l,m,n,o,p))

// Level 17–32
#define MAX17(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q) \
    MAX2(MAX16(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p), q)

#define MAX18(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r) \
    MAX2(MAX16(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p), MAX2(q,r))

#define MAX19(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s) \
    MAX2(MAX16(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p), MAX3(q,r,s))

#define MAX20(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t) \
    MAX2(MAX16(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p), MAX4(q,r,s,t))

#define MAX21(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u) \
    MAX2(MAX16(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p), MAX5(q,r,s,t,u))

#define MAX22(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v) \
    MAX2(MAX16(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p), MAX6(q,r,s,t,u,v))

#define MAX23(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w) \
    MAX2(MAX16(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p), MAX7(q,r,s,t,u,v,w))

#define MAX24(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x) \
    MAX2(MAX16(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p), MAX8(q,r,s,t,u,v,w,x))

#define MAX25(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y) \
    MAX2(MAX16(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p), MAX9(q,r,s,t,u,v,w,x,y))

#define MAX26(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z) \
    MAX2(MAX16(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p), MAX10(q,r,s,t,u,v,w,x,y,z))

#define MAX27(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,a1) \
    MAX2(MAX16(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p), MAX11(q,r,s,t,u,v,w,x,y,z,a1))

#define MAX28(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,a1,a2) \
    MAX2(MAX16(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p), MAX12(q,r,s,t,u,v,w,x,y,z,a1,a2))

#define MAX29(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,a1,a2,a3) \
    MAX2(MAX16(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p), MAX13(q,r,s,t,u,v,w,x,y,z,a1,a2,a3))

#define MAX30(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,a1,a2,a3,a4) \
    MAX2(MAX16(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p), MAX14(q,r,s,t,u,v,w,x,y,z,a1,a2,a3,a4))

#define MAX31(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,a1,a2,a3,a4,a5) \
    MAX2(MAX16(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p), MAX15(q,r,s,t,u,v,w,x,y,z,a1,a2,a3,a4,a5))

#define MAX32(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,a1,a2,a3,a4,a5,a6) \
    MAX2(MAX16(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p), MAX16(q,r,s,t,u,v,w,x,y,z,a1,a2,a3,a4,a5,a6))

#endif //MY_TEST_HEADER