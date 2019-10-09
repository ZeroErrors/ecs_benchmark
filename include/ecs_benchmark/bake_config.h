/*
                                   )
                                  (.)
                                  .|.
                                  | |
                              _.--| |--._
                           .-';  ;`-'& ; `&.
                          \   &  ;    &   &_/
                           |"""---...---"""|
                           \ | | | | | | | /
                            `---.|.|.|.---'

 * This file is generated by bake.lang.c for your convenience. Headers of
 * dependencies will automatically show up in this file. Include bake_config.h
 * in your main project file. Do not edit! */

#ifndef ECS_BENCHMARK_BAKE_CONFIG_H
#define ECS_BENCHMARK_BAKE_CONFIG_H

/* Headers of public dependencies */
#include <flecs.h>
#ifdef __BAKE__
#include <bake_util.h>
#endif

/* Headers of private dependencies */
#ifdef ECS_BENCHMARK_IMPL
/* No dependencies */
#endif

/* Convenience macro for exporting symbols */
#ifndef ECS_BENCHMARK_STATIC
  #if ECS_BENCHMARK_IMPL && (defined(_MSC_VER) || defined(__MINGW32__))
    #define ECS_BENCHMARK_EXPORT __declspec(dllexport)
  #elif ECS_BENCHMARK_IMPL
    #define ECS_BENCHMARK_EXPORT __attribute__((__visibility__("default")))
  #elif defined _MSC_VER
    #define ECS_BENCHMARK_EXPORT __declspec(dllimport)
  #else
    #define ECS_BENCHMARK_EXPORT
  #endif
#else
  #define ECS_BENCHMARK_EXPORT
#endif

#endif

