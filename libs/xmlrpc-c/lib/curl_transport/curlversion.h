#ifndef CURLVERSION_H_INCLUDED
#define CURLVERSION_H_INCLUDED

#define CMAJOR LIBCURL_VERSION_MAJOR
#define CMINOR LIBCURL_VERSION_MINOR
#if CMAJOR > 7 || (CMAJOR == 7 && CMINOR >= 10)
  #define HAVE_CURL_NOSIGNAL 1
#else
  #define HAVE_CURL_NOSIGNAL 0
#endif
#if CMAJOR > 7 || (CMAJOR == 7 && CMINOR >= 12)
  #define HAVE_CURL_STRERROR 1
#else
  #define HAVE_CURL_STRERROR 0
#endif

#undef CMAJOR
#undef CMINOR

#endif
