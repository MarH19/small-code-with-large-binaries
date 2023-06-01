typedef long unsigned int size_t;
extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
    __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2))) ;
extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int __memcmpeq (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
    __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2))) ;
struct __locale_struct
{
  struct __locale_data *__locales[13];
  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;
  const char *__names[13];
};
typedef struct __locale_struct *__locale_t;

typedef __locale_t locale_t;
extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));
extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    locale_t __l) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 4)))
                                           ;
extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strerror (int __errnum) __attribute__ ((__nothrow__ ));
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)))
                                          ;
extern char *strerror_l (int __errnum, locale_t __l) __attribute__ ((__nothrow__ ));
extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern void bcopy (const void *__src, void *__dest, size_t __n)
  __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern int ffs (int __i) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern int ffsl (long int __l) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));
extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));
extern void explicit_bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)))
                                                  ;
extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *strsignal (int __sig) __attribute__ ((__nothrow__ ));
extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;
typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef long int __suseconds64_t;
typedef int __daddr_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void * __timer_t;
typedef long int __blksize_t;
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;
typedef long int __fsword_t;
typedef long int __ssize_t;
typedef long int __syscall_slong_t;
typedef unsigned long int __syscall_ulong_t;
typedef __off64_t __loff_t;
typedef char *__caddr_t;
typedef long int __intptr_t;
typedef unsigned int __socklen_t;
typedef int __sig_atomic_t;




typedef float float_t;
typedef double double_t;
extern int __fpclassify (double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
extern int __signbit (double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
extern int __isinf (double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __finite (double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __isnan (double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __iseqsig (double __x, double __y) __attribute__ ((__nothrow__ ));
extern int __issignaling (double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
 extern double acos (double __x) __attribute__ ((__nothrow__ )); extern double __acos (double __x) __attribute__ ((__nothrow__ ));
 extern double asin (double __x) __attribute__ ((__nothrow__ )); extern double __asin (double __x) __attribute__ ((__nothrow__ ));
 extern double atan (double __x) __attribute__ ((__nothrow__ )); extern double __atan (double __x) __attribute__ ((__nothrow__ ));
 extern double atan2 (double __y, double __x) __attribute__ ((__nothrow__ )); extern double __atan2 (double __y, double __x) __attribute__ ((__nothrow__ ));
 extern double cos (double __x) __attribute__ ((__nothrow__ )); extern double __cos (double __x) __attribute__ ((__nothrow__ ));
 extern double sin (double __x) __attribute__ ((__nothrow__ )); extern double __sin (double __x) __attribute__ ((__nothrow__ ));
 extern double tan (double __x) __attribute__ ((__nothrow__ )); extern double __tan (double __x) __attribute__ ((__nothrow__ ));
 extern double cosh (double __x) __attribute__ ((__nothrow__ )); extern double __cosh (double __x) __attribute__ ((__nothrow__ ));
 extern double sinh (double __x) __attribute__ ((__nothrow__ )); extern double __sinh (double __x) __attribute__ ((__nothrow__ ));
 extern double tanh (double __x) __attribute__ ((__nothrow__ )); extern double __tanh (double __x) __attribute__ ((__nothrow__ ));
 extern double acosh (double __x) __attribute__ ((__nothrow__ )); extern double __acosh (double __x) __attribute__ ((__nothrow__ ));
 extern double asinh (double __x) __attribute__ ((__nothrow__ )); extern double __asinh (double __x) __attribute__ ((__nothrow__ ));
 extern double atanh (double __x) __attribute__ ((__nothrow__ )); extern double __atanh (double __x) __attribute__ ((__nothrow__ ));
 extern double exp (double __x) __attribute__ ((__nothrow__ )); extern double __exp (double __x) __attribute__ ((__nothrow__ ));
extern double frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ )); extern double __frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ ));
extern double ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ )); extern double __ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ ));
 extern double log (double __x) __attribute__ ((__nothrow__ )); extern double __log (double __x) __attribute__ ((__nothrow__ ));
 extern double log10 (double __x) __attribute__ ((__nothrow__ )); extern double __log10 (double __x) __attribute__ ((__nothrow__ ));
extern double modf (double __x, double *__iptr) __attribute__ ((__nothrow__ )); extern double __modf (double __x, double *__iptr) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
 extern double expm1 (double __x) __attribute__ ((__nothrow__ )); extern double __expm1 (double __x) __attribute__ ((__nothrow__ ));
 extern double log1p (double __x) __attribute__ ((__nothrow__ )); extern double __log1p (double __x) __attribute__ ((__nothrow__ ));
extern double logb (double __x) __attribute__ ((__nothrow__ )); extern double __logb (double __x) __attribute__ ((__nothrow__ ));
 extern double exp2 (double __x) __attribute__ ((__nothrow__ )); extern double __exp2 (double __x) __attribute__ ((__nothrow__ ));
 extern double log2 (double __x) __attribute__ ((__nothrow__ )); extern double __log2 (double __x) __attribute__ ((__nothrow__ ));
 extern double pow (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __pow (double __x, double __y) __attribute__ ((__nothrow__ ));
extern double sqrt (double __x) __attribute__ ((__nothrow__ )); extern double __sqrt (double __x) __attribute__ ((__nothrow__ ));
 extern double hypot (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __hypot (double __x, double __y) __attribute__ ((__nothrow__ ));
 extern double cbrt (double __x) __attribute__ ((__nothrow__ )); extern double __cbrt (double __x) __attribute__ ((__nothrow__ ));
extern double ceil (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __ceil (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern double fabs (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __fabs (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern double floor (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __floor (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern double fmod (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __fmod (double __x, double __y) __attribute__ ((__nothrow__ ));
extern int isinf (double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int finite (double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern double drem (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __drem (double __x, double __y) __attribute__ ((__nothrow__ ));
extern double significand (double __x) __attribute__ ((__nothrow__ )); extern double __significand (double __x) __attribute__ ((__nothrow__ ));
extern double copysign (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __copysign (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern double nan (const char *__tagb) __attribute__ ((__nothrow__ )); extern double __nan (const char *__tagb) __attribute__ ((__nothrow__ ));
extern int isnan (double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern double j0 (double) __attribute__ ((__nothrow__ )); extern double __j0 (double) __attribute__ ((__nothrow__ ));
extern double j1 (double) __attribute__ ((__nothrow__ )); extern double __j1 (double) __attribute__ ((__nothrow__ ));
extern double jn (int, double) __attribute__ ((__nothrow__ )); extern double __jn (int, double) __attribute__ ((__nothrow__ ));
extern double y0 (double) __attribute__ ((__nothrow__ )); extern double __y0 (double) __attribute__ ((__nothrow__ ));
extern double y1 (double) __attribute__ ((__nothrow__ )); extern double __y1 (double) __attribute__ ((__nothrow__ ));
extern double yn (int, double) __attribute__ ((__nothrow__ )); extern double __yn (int, double) __attribute__ ((__nothrow__ ));
 extern double erf (double) __attribute__ ((__nothrow__ )); extern double __erf (double) __attribute__ ((__nothrow__ ));
 extern double erfc (double) __attribute__ ((__nothrow__ )); extern double __erfc (double) __attribute__ ((__nothrow__ ));
extern double lgamma (double) __attribute__ ((__nothrow__ )); extern double __lgamma (double) __attribute__ ((__nothrow__ ));
extern double tgamma (double) __attribute__ ((__nothrow__ )); extern double __tgamma (double) __attribute__ ((__nothrow__ ));
extern double gamma (double) __attribute__ ((__nothrow__ )); extern double __gamma (double) __attribute__ ((__nothrow__ ));
extern double lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ )); extern double __lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ ));
extern double rint (double __x) __attribute__ ((__nothrow__ )); extern double __rint (double __x) __attribute__ ((__nothrow__ ));
extern double nextafter (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __nextafter (double __x, double __y) __attribute__ ((__nothrow__ ));
extern double nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ )); extern double __nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ ));
extern double remainder (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __remainder (double __x, double __y) __attribute__ ((__nothrow__ ));
extern double scalbn (double __x, int __n) __attribute__ ((__nothrow__ )); extern double __scalbn (double __x, int __n) __attribute__ ((__nothrow__ ));
extern int ilogb (double __x) __attribute__ ((__nothrow__ )); extern int __ilogb (double __x) __attribute__ ((__nothrow__ ));
extern double scalbln (double __x, long int __n) __attribute__ ((__nothrow__ )); extern double __scalbln (double __x, long int __n) __attribute__ ((__nothrow__ ));
extern double nearbyint (double __x) __attribute__ ((__nothrow__ )); extern double __nearbyint (double __x) __attribute__ ((__nothrow__ ));
extern double round (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __round (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern double trunc (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __trunc (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern double remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ )); extern double __remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ ));
extern long int lrint (double __x) __attribute__ ((__nothrow__ )); extern long int __lrint (double __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llrint (double __x) __attribute__ ((__nothrow__ )); extern long long int __llrint (double __x) __attribute__ ((__nothrow__ ));
extern long int lround (double __x) __attribute__ ((__nothrow__ )); extern long int __lround (double __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llround (double __x) __attribute__ ((__nothrow__ )); extern long long int __llround (double __x) __attribute__ ((__nothrow__ ));
extern double fdim (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __fdim (double __x, double __y) __attribute__ ((__nothrow__ ));
extern double fmax (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __fmax (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern double fmin (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __fmin (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern double fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ )); extern double __fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ ));
extern double scalb (double __x, double __n) __attribute__ ((__nothrow__ )); extern double __scalb (double __x, double __n) __attribute__ ((__nothrow__ ));
extern int __fpclassifyf (float __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
extern int __signbitf (float __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
extern int __isinff (float __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __finitef (float __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __isnanf (float __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __iseqsigf (float __x, float __y) __attribute__ ((__nothrow__ ));
extern int __issignalingf (float __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
 extern float acosf (float __x) __attribute__ ((__nothrow__ )); extern float __acosf (float __x) __attribute__ ((__nothrow__ ));
 extern float asinf (float __x) __attribute__ ((__nothrow__ )); extern float __asinf (float __x) __attribute__ ((__nothrow__ ));
 extern float atanf (float __x) __attribute__ ((__nothrow__ )); extern float __atanf (float __x) __attribute__ ((__nothrow__ ));
 extern float atan2f (float __y, float __x) __attribute__ ((__nothrow__ )); extern float __atan2f (float __y, float __x) __attribute__ ((__nothrow__ ));
 extern float cosf (float __x) __attribute__ ((__nothrow__ )); extern float __cosf (float __x) __attribute__ ((__nothrow__ ));
 extern float sinf (float __x) __attribute__ ((__nothrow__ )); extern float __sinf (float __x) __attribute__ ((__nothrow__ ));
 extern float tanf (float __x) __attribute__ ((__nothrow__ )); extern float __tanf (float __x) __attribute__ ((__nothrow__ ));
 extern float coshf (float __x) __attribute__ ((__nothrow__ )); extern float __coshf (float __x) __attribute__ ((__nothrow__ ));
 extern float sinhf (float __x) __attribute__ ((__nothrow__ )); extern float __sinhf (float __x) __attribute__ ((__nothrow__ ));
 extern float tanhf (float __x) __attribute__ ((__nothrow__ )); extern float __tanhf (float __x) __attribute__ ((__nothrow__ ));
 extern float acoshf (float __x) __attribute__ ((__nothrow__ )); extern float __acoshf (float __x) __attribute__ ((__nothrow__ ));
 extern float asinhf (float __x) __attribute__ ((__nothrow__ )); extern float __asinhf (float __x) __attribute__ ((__nothrow__ ));
 extern float atanhf (float __x) __attribute__ ((__nothrow__ )); extern float __atanhf (float __x) __attribute__ ((__nothrow__ ));
 extern float expf (float __x) __attribute__ ((__nothrow__ )); extern float __expf (float __x) __attribute__ ((__nothrow__ ));
extern float frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ )); extern float __frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ ));
extern float ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ )); extern float __ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ ));
 extern float logf (float __x) __attribute__ ((__nothrow__ )); extern float __logf (float __x) __attribute__ ((__nothrow__ ));
 extern float log10f (float __x) __attribute__ ((__nothrow__ )); extern float __log10f (float __x) __attribute__ ((__nothrow__ ));
extern float modff (float __x, float *__iptr) __attribute__ ((__nothrow__ )); extern float __modff (float __x, float *__iptr) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
 extern float expm1f (float __x) __attribute__ ((__nothrow__ )); extern float __expm1f (float __x) __attribute__ ((__nothrow__ ));
 extern float log1pf (float __x) __attribute__ ((__nothrow__ )); extern float __log1pf (float __x) __attribute__ ((__nothrow__ ));
extern float logbf (float __x) __attribute__ ((__nothrow__ )); extern float __logbf (float __x) __attribute__ ((__nothrow__ ));
 extern float exp2f (float __x) __attribute__ ((__nothrow__ )); extern float __exp2f (float __x) __attribute__ ((__nothrow__ ));
 extern float log2f (float __x) __attribute__ ((__nothrow__ )); extern float __log2f (float __x) __attribute__ ((__nothrow__ ));
 extern float powf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __powf (float __x, float __y) __attribute__ ((__nothrow__ ));
extern float sqrtf (float __x) __attribute__ ((__nothrow__ )); extern float __sqrtf (float __x) __attribute__ ((__nothrow__ ));
 extern float hypotf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __hypotf (float __x, float __y) __attribute__ ((__nothrow__ ));
 extern float cbrtf (float __x) __attribute__ ((__nothrow__ )); extern float __cbrtf (float __x) __attribute__ ((__nothrow__ ));
extern float ceilf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __ceilf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern float fabsf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __fabsf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern float floorf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __floorf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern float fmodf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __fmodf (float __x, float __y) __attribute__ ((__nothrow__ ));
extern int isinff (float __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int finitef (float __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern float dremf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __dremf (float __x, float __y) __attribute__ ((__nothrow__ ));
extern float significandf (float __x) __attribute__ ((__nothrow__ )); extern float __significandf (float __x) __attribute__ ((__nothrow__ ));
extern float copysignf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern float nanf (const char *__tagb) __attribute__ ((__nothrow__ )); extern float __nanf (const char *__tagb) __attribute__ ((__nothrow__ ));
extern int isnanf (float __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern float j0f (float) __attribute__ ((__nothrow__ )); extern float __j0f (float) __attribute__ ((__nothrow__ ));
extern float j1f (float) __attribute__ ((__nothrow__ )); extern float __j1f (float) __attribute__ ((__nothrow__ ));
extern float jnf (int, float) __attribute__ ((__nothrow__ )); extern float __jnf (int, float) __attribute__ ((__nothrow__ ));
extern float y0f (float) __attribute__ ((__nothrow__ )); extern float __y0f (float) __attribute__ ((__nothrow__ ));
extern float y1f (float) __attribute__ ((__nothrow__ )); extern float __y1f (float) __attribute__ ((__nothrow__ ));
extern float ynf (int, float) __attribute__ ((__nothrow__ )); extern float __ynf (int, float) __attribute__ ((__nothrow__ ));
 extern float erff (float) __attribute__ ((__nothrow__ )); extern float __erff (float) __attribute__ ((__nothrow__ ));
 extern float erfcf (float) __attribute__ ((__nothrow__ )); extern float __erfcf (float) __attribute__ ((__nothrow__ ));
extern float lgammaf (float) __attribute__ ((__nothrow__ )); extern float __lgammaf (float) __attribute__ ((__nothrow__ ));
extern float tgammaf (float) __attribute__ ((__nothrow__ )); extern float __tgammaf (float) __attribute__ ((__nothrow__ ));
extern float gammaf (float) __attribute__ ((__nothrow__ )); extern float __gammaf (float) __attribute__ ((__nothrow__ ));
extern float lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ )); extern float __lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ ));
extern float rintf (float __x) __attribute__ ((__nothrow__ )); extern float __rintf (float __x) __attribute__ ((__nothrow__ ));
extern float nextafterf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __nextafterf (float __x, float __y) __attribute__ ((__nothrow__ ));
extern float nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ )); extern float __nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ ));
extern float remainderf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __remainderf (float __x, float __y) __attribute__ ((__nothrow__ ));
extern float scalbnf (float __x, int __n) __attribute__ ((__nothrow__ )); extern float __scalbnf (float __x, int __n) __attribute__ ((__nothrow__ ));
extern int ilogbf (float __x) __attribute__ ((__nothrow__ )); extern int __ilogbf (float __x) __attribute__ ((__nothrow__ ));
extern float scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ )); extern float __scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ ));
extern float nearbyintf (float __x) __attribute__ ((__nothrow__ )); extern float __nearbyintf (float __x) __attribute__ ((__nothrow__ ));
extern float roundf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __roundf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern float truncf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __truncf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern float remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ )); extern float __remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ ));
extern long int lrintf (float __x) __attribute__ ((__nothrow__ )); extern long int __lrintf (float __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llrintf (float __x) __attribute__ ((__nothrow__ )); extern long long int __llrintf (float __x) __attribute__ ((__nothrow__ ));
extern long int lroundf (float __x) __attribute__ ((__nothrow__ )); extern long int __lroundf (float __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llroundf (float __x) __attribute__ ((__nothrow__ )); extern long long int __llroundf (float __x) __attribute__ ((__nothrow__ ));
extern float fdimf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __fdimf (float __x, float __y) __attribute__ ((__nothrow__ ));
extern float fmaxf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __fmaxf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern float fminf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __fminf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern float fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ )); extern float __fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ ));
extern float scalbf (float __x, float __n) __attribute__ ((__nothrow__ )); extern float __scalbf (float __x, float __n) __attribute__ ((__nothrow__ ));
extern int __fpclassifyl (long double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
extern int __signbitl (long double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
extern int __isinfl (long double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __finitel (long double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __isnanl (long double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int __iseqsigl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern int __issignalingl (long double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
 extern long double acosl (long double __x) __attribute__ ((__nothrow__ )); extern long double __acosl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double asinl (long double __x) __attribute__ ((__nothrow__ )); extern long double __asinl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double atanl (long double __x) __attribute__ ((__nothrow__ )); extern long double __atanl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ )); extern long double __atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ ));
 extern long double cosl (long double __x) __attribute__ ((__nothrow__ )); extern long double __cosl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double sinl (long double __x) __attribute__ ((__nothrow__ )); extern long double __sinl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double tanl (long double __x) __attribute__ ((__nothrow__ )); extern long double __tanl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double coshl (long double __x) __attribute__ ((__nothrow__ )); extern long double __coshl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double sinhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __sinhl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double tanhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __tanhl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double acoshl (long double __x) __attribute__ ((__nothrow__ )); extern long double __acoshl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double asinhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __asinhl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double atanhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __atanhl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double expl (long double __x) __attribute__ ((__nothrow__ )); extern long double __expl (long double __x) __attribute__ ((__nothrow__ ));
extern long double frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ )); extern long double __frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ ));
extern long double ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ )); extern long double __ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ ));
 extern long double logl (long double __x) __attribute__ ((__nothrow__ )); extern long double __logl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double log10l (long double __x) __attribute__ ((__nothrow__ )); extern long double __log10l (long double __x) __attribute__ ((__nothrow__ ));
extern long double modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ )); extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
 extern long double expm1l (long double __x) __attribute__ ((__nothrow__ )); extern long double __expm1l (long double __x) __attribute__ ((__nothrow__ ));
 extern long double log1pl (long double __x) __attribute__ ((__nothrow__ )); extern long double __log1pl (long double __x) __attribute__ ((__nothrow__ ));
extern long double logbl (long double __x) __attribute__ ((__nothrow__ )); extern long double __logbl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double exp2l (long double __x) __attribute__ ((__nothrow__ )); extern long double __exp2l (long double __x) __attribute__ ((__nothrow__ ));
 extern long double log2l (long double __x) __attribute__ ((__nothrow__ )); extern long double __log2l (long double __x) __attribute__ ((__nothrow__ ));
 extern long double powl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __powl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern long double sqrtl (long double __x) __attribute__ ((__nothrow__ )); extern long double __sqrtl (long double __x) __attribute__ ((__nothrow__ ));
 extern long double hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
 extern long double cbrtl (long double __x) __attribute__ ((__nothrow__ )); extern long double __cbrtl (long double __x) __attribute__ ((__nothrow__ ));
extern long double ceill (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __ceill (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern long double fabsl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __fabsl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern long double floorl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __floorl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern long double fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern int isinfl (long double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern int finitel (long double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern long double dreml (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __dreml (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern long double significandl (long double __x) __attribute__ ((__nothrow__ )); extern long double __significandl (long double __x) __attribute__ ((__nothrow__ ));
extern long double copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern long double nanl (const char *__tagb) __attribute__ ((__nothrow__ )); extern long double __nanl (const char *__tagb) __attribute__ ((__nothrow__ ));
extern int isnanl (long double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));
extern long double j0l (long double) __attribute__ ((__nothrow__ )); extern long double __j0l (long double) __attribute__ ((__nothrow__ ));
extern long double j1l (long double) __attribute__ ((__nothrow__ )); extern long double __j1l (long double) __attribute__ ((__nothrow__ ));
extern long double jnl (int, long double) __attribute__ ((__nothrow__ )); extern long double __jnl (int, long double) __attribute__ ((__nothrow__ ));
extern long double y0l (long double) __attribute__ ((__nothrow__ )); extern long double __y0l (long double) __attribute__ ((__nothrow__ ));
extern long double y1l (long double) __attribute__ ((__nothrow__ )); extern long double __y1l (long double) __attribute__ ((__nothrow__ ));
extern long double ynl (int, long double) __attribute__ ((__nothrow__ )); extern long double __ynl (int, long double) __attribute__ ((__nothrow__ ));
 extern long double erfl (long double) __attribute__ ((__nothrow__ )); extern long double __erfl (long double) __attribute__ ((__nothrow__ ));
 extern long double erfcl (long double) __attribute__ ((__nothrow__ )); extern long double __erfcl (long double) __attribute__ ((__nothrow__ ));
extern long double lgammal (long double) __attribute__ ((__nothrow__ )); extern long double __lgammal (long double) __attribute__ ((__nothrow__ ));
extern long double tgammal (long double) __attribute__ ((__nothrow__ )); extern long double __tgammal (long double) __attribute__ ((__nothrow__ ));
extern long double gammal (long double) __attribute__ ((__nothrow__ )); extern long double __gammal (long double) __attribute__ ((__nothrow__ ));
extern long double lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ )); extern long double __lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ ));
extern long double rintl (long double __x) __attribute__ ((__nothrow__ )); extern long double __rintl (long double __x) __attribute__ ((__nothrow__ ));
extern long double nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern long double nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern long double remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern long double scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ )); extern long double __scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ ));
extern int ilogbl (long double __x) __attribute__ ((__nothrow__ )); extern int __ilogbl (long double __x) __attribute__ ((__nothrow__ ));
extern long double scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ )); extern long double __scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ ));
extern long double nearbyintl (long double __x) __attribute__ ((__nothrow__ )); extern long double __nearbyintl (long double __x) __attribute__ ((__nothrow__ ));
extern long double roundl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __roundl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern long double truncl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __truncl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern long double remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ )); extern long double __remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ ));
extern long int lrintl (long double __x) __attribute__ ((__nothrow__ )); extern long int __lrintl (long double __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llrintl (long double __x) __attribute__ ((__nothrow__ )); extern long long int __llrintl (long double __x) __attribute__ ((__nothrow__ ));
extern long int lroundl (long double __x) __attribute__ ((__nothrow__ )); extern long int __lroundl (long double __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llroundl (long double __x) __attribute__ ((__nothrow__ )); extern long long int __llroundl (long double __x) __attribute__ ((__nothrow__ ));
extern long double fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern long double fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern long double fminl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __fminl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern long double fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ )); extern long double __fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ ));
extern long double scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ )); extern long double __scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ ));
extern int signgam;
enum
  {
    FP_NAN =
      0,
    FP_INFINITE =
      1,
    FP_ZERO =
      2,
    FP_SUBNORMAL =
      3,
    FP_NORMAL =
      4
  };

typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;
typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;
typedef signed char int_fast8_t;
typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
typedef unsigned char uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
typedef long int intptr_t;
typedef unsigned long int uintptr_t;
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));
extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));
extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));
typedef __builtin_va_list va_list;
typedef __builtin_va_list __gnuc_va_list;
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
struct _IO_FILE;
typedef struct _IO_FILE __FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;
typedef void _IO_lock_t;
struct _IO_FILE
{
  int _flags;
  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;
  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;
  struct _IO_marker *_markers;
  struct _IO_FILE *_chain;
  int _fileno;
  int _flags2;
  __off_t _old_offset;
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];
  _IO_lock_t *_lock;
  __off64_t _offset;
  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  size_t __pad5;
  int _mode;
  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};
typedef __gnuc_va_list va_list;
typedef __off_t off_t;
typedef __ssize_t ssize_t;
typedef __fpos_t fpos_t;
extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;
extern int remove (const char *__filename) __attribute__ ((__nothrow__ ));
extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ ));
extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ ));
extern int fclose (FILE *__stream);
extern FILE *tmpfile (void)
  __attribute__ ((__malloc__)) ;
extern char *tmpnam (char[20]) __attribute__ ((__nothrow__ )) ;
extern char *tmpnam_r (char __s[20]) __attribute__ ((__nothrow__ )) ;
extern char *tempnam (const char *__dir, const char *__pfx)
   __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) ;
extern int fflush (FILE *__stream);
extern int fflush_unlocked (FILE *__stream);
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes)
  __attribute__ ((__malloc__)) ;
extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ ))
  __attribute__ ((__malloc__)) ;
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) ;
extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ ))
  __attribute__ ((__malloc__)) ;
extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ ));
extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ ));
extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ ));
extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ ));
extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);
extern int printf (const char *__restrict __format, ...);
extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));
extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);
extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);
extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));
extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));
extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));
extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;
extern int scanf (const char *__restrict __format, ...) ;
extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ ));
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf") ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf") ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ ));
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format__ (__scanf__, 2, 0)));
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ ))
     __attribute__ ((__format__ (__scanf__, 2, 0)));
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);
extern int getchar (void);
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
extern int fgetc_unlocked (FILE *__stream);
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);
extern int putchar (int __c);
extern int fputc_unlocked (int __c, FILE *__stream);
extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);
extern int getw (FILE *__stream);
extern int putw (int __w, FILE *__stream);
extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
                                                         ;
extern __ssize_t __getdelim (char **__restrict __lineptr,
                             size_t *__restrict __n, int __delimiter,
                             FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
                           size_t *__restrict __n, int __delimiter,
                           FILE *__restrict __stream) ;
extern __ssize_t getline (char **__restrict __lineptr,
                          size_t *__restrict __n,
                          FILE *__restrict __stream) ;
extern int fputs (const char *__restrict __s, FILE *__restrict __stream);
extern int puts (const char *__s);
extern int ungetc (int __c, FILE *__stream);
extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);
extern int fseek (FILE *__stream, long int __off, int __whence);
extern long int ftell (FILE *__stream) ;
extern void rewind (FILE *__stream);
extern int fseeko (FILE *__stream, __off_t __off, int __whence);
extern __off_t ftello (FILE *__stream) ;
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);
extern int fsetpos (FILE *__stream, const fpos_t *__pos);
extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ ));
extern int feof (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ ));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern void perror (const char *__s);
extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern int pclose (FILE *__stream);
extern FILE *popen (const char *__command, const char *__modes)
  __attribute__ ((__malloc__)) ;
extern char *ctermid (char *__s) __attribute__ ((__nothrow__ ))
                                     ;
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ ));
extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ ));
extern int __uflow (FILE *);
extern int __overflow (FILE *, int);
static void
platform_main_begin(void)
{
}
static void
platform_main_end(uint32_t crc, int flag)
{
 printf ("checksum = %X\n", crc);
}
static int8_t
(safe_unary_minus_func_int8_t_s)(int8_t si )
{
  return
    -si;
}
static int8_t
(safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    (si1 + si2);
}
static int8_t
(safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    (si1 - si2);
}
static int8_t
(safe_mul_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    si1 * si2;
}
static int8_t
(safe_mod_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
(safe_div_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
(safe_lshift_func_int8_t_s_s)(int8_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
(safe_lshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
(safe_rshift_func_int8_t_s_s)(int8_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
(safe_rshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
(safe_unary_minus_func_int16_t_s)(int16_t si )
{
  return
    -si;
}
static int16_t
(safe_add_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    (si1 + si2);
}
static int16_t
(safe_sub_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    (si1 - si2);
}
static int16_t
(safe_mul_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    si1 * si2;
}
static int16_t
(safe_mod_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
(safe_div_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
(safe_lshift_func_int16_t_s_s)(int16_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
(safe_lshift_func_int16_t_s_u)(int16_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
(safe_rshift_func_int16_t_s_s)(int16_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
(safe_rshift_func_int16_t_s_u)(int16_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
(safe_unary_minus_func_int32_t_s)(int32_t si )
{
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
(safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
(safe_sub_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
(safe_mul_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
(safe_mod_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
(safe_div_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
(safe_lshift_func_int32_t_s_s)(int32_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
(safe_lshift_func_int32_t_s_u)(int32_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
(safe_rshift_func_int32_t_s_s)(int32_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
(safe_rshift_func_int32_t_s_u)(int32_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
(safe_unary_minus_func_uint8_t_u)(uint8_t ui )
{
  return -ui;
}
static uint8_t
(safe_add_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return ui1 + ui2;
}
static uint8_t
(safe_sub_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return ui1 - ui2;
}
static uint8_t
(safe_mul_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
(safe_mod_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
(safe_div_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
(safe_lshift_func_uint8_t_u_s)(uint8_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
(safe_lshift_func_uint8_t_u_u)(uint8_t left, unsigned int right )
{
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
(safe_rshift_func_uint8_t_u_s)(uint8_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
(safe_rshift_func_uint8_t_u_u)(uint8_t left, unsigned int right )
{
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
(safe_unary_minus_func_uint16_t_u)(uint16_t ui )
{
  return -ui;
}
static uint16_t
(safe_add_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return ui1 + ui2;
}
static uint16_t
(safe_sub_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return ui1 - ui2;
}
static uint16_t
(safe_mul_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
(safe_mod_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
(safe_div_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
(safe_lshift_func_uint16_t_u_s)(uint16_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
(safe_lshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
(safe_rshift_func_uint16_t_u_s)(uint16_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
(safe_rshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
(safe_unary_minus_func_uint32_t_u)(uint32_t ui )
{
  return -ui;
}
static uint32_t
(safe_add_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return ui1 + ui2;
}
static uint32_t
(safe_sub_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return ui1 - ui2;
}
static uint32_t
(safe_mul_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
(safe_mod_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
(safe_div_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
(safe_lshift_func_uint32_t_u_s)(uint32_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
(safe_lshift_func_uint32_t_u_u)(uint32_t left, unsigned int right )
{
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
(safe_rshift_func_uint32_t_u_s)(uint32_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
(safe_rshift_func_uint32_t_u_u)(uint32_t left, unsigned int right )
{
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
float fabsf(float);
double fabs(double);
static float
(safe_add_func_float_f_f)(float sf1, float sf2 )
{
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * 3.40282347e+38F)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
(safe_sub_func_float_f_f)(float sf1, float sf2 )
{
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * 3.40282347e+38F)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
(safe_mul_func_float_f_f)(float sf1, float sf2 )
{
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * 3.40282347e+38F))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
(safe_div_func_float_f_f)(float sf1, float sf2 )
{
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * 3.40282347e+38F))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
(safe_add_func_double_f_f)(double sf1, double sf2 )
{
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * 1.7976931348623157e+308)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
(safe_sub_func_double_f_f)(double sf1, double sf2 )
{
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * 1.7976931348623157e+308)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
(safe_mul_func_double_f_f)(double sf1, double sf2 )
{
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * 1.7976931348623157e+308))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
(safe_div_func_double_f_f)(double sf1, double sf2 )
{
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * 1.7976931348623157e+308))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
(safe_convert_func_float_to_int32_t)(float sf1 )
{
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

static uint32_t crc32_tab[256];
static uint32_t crc32_context = 0xFFFFFFFFUL;
static void
crc32_gentab (void)
{
 uint32_t crc;
 const uint32_t poly = 0xEDB88320UL;
 int i, j;
 for (i = 0; i < 256; i++) {
  crc = i;
  for (j = 8; j > 0; j--) {
   if (crc & 1) {
    crc = (crc >> 1) ^ poly;
   } else {
    crc >>= 1;
   }
  }
  crc32_tab[i] = crc;
 }
}
static void
crc32_byte (uint8_t b) {
 crc32_context =
  ((crc32_context >> 8) & 0x00FFFFFF) ^
  crc32_tab[(crc32_context ^ b) & 0xFF];
}
static void
crc32_8bytes (uint32_t val)
{
 crc32_byte ((val>>0) & 0xff);
 crc32_byte ((val>>8) & 0xff);
 crc32_byte ((val>>16) & 0xff);
 crc32_byte ((val>>24) & 0xff);
}
static void
transparent_crc (uint32_t val, char* vname, int flag)
{
 crc32_8bytes(val);
 if (flag) {
    printf("...checksum after hashing %s : %X\n", vname, crc32_context ^ 0xFFFFFFFFU);
 }
}
static void
transparent_crc_bytes (char *ptr, int nbytes, char* vname, int flag)
{
    int i;
    for (i=0; i<nbytes; i++) {
        crc32_byte(ptr[i]);
    }
 if (flag) {
    printf("...checksum after hashing %s : %lX\n", vname, crc32_context ^ 0xFFFFFFFFUL);
 }
}

volatile uint32_t csmith_sink_ = 0;
static long __undefined;
static uint8_t g_5 = 1U;
static uint8_t g_8 = 255U;
static uint32_t g_13 = 1U;
static int32_t g_15 = 0x23DCDF5E;
static int32_t g_18 = 0xF42C60ED;
static int8_t g_24[4][8] = {{0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55},{0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55},{0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55},{0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55}};
static int32_t g_99 = (-9);
static int32_t g_100 = 0;
static uint32_t g_101 = 0xE1499B6F;
static uint8_t g_118 = 0x92;
static uint8_t * const g_117[6][5][8] = {{{(void*)0,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118},{&g_118,(void*)0,&g_118,&g_118,&g_118,(void*)0,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,(void*)0,&g_118},{&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,(void*)0,(void*)0},{&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118}},{{&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,(void*)0,&g_118,&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,(void*)0},{(void*)0,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118},{&g_118,(void*)0,&g_118,&g_118,&g_118,(void*)0,&g_118,&g_118}},{{&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118,&g_118,(void*)0,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118},{(void*)0,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118}},{{&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,&g_118,(void*)0,&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,(void*)0}},{{&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118},{(void*)0,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,(void*)0},{&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,(void*)0,&g_118},{&g_118,&g_118,&g_118,(void*)0,&g_118,(void*)0,&g_118,&g_118},{(void*)0,&g_118,&g_118,&g_118,(void*)0,&g_118,&g_118,&g_118}},{{&g_118,&g_118,&g_118,&g_118,(void*)0,&g_118,&g_118,(void*)0},{&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118,&g_118,&g_118,(void*)0,(void*)0},{&g_118,&g_118,&g_118,&g_118,(void*)0,&g_118,&g_118,&g_118},{&g_118,&g_118,(void*)0,&g_118,&g_118,&g_118,&g_118,&g_118}}};
static uint32_t g_128 = 0xC7F4BD8A;
static uint32_t *g_130 = (void*)0;
static uint32_t g_145 = 1U;
static int32_t *g_209 = &g_15;
static int32_t **g_208[3] = {&g_209,&g_209,&g_209};
static uint32_t * const g_248 = &g_145;
static uint32_t * const *g_247 = &g_248;
static uint32_t * const * const *g_246[10][8] = {{(void*)0,&g_247,(void*)0,(void*)0,(void*)0,&g_247,(void*)0,&g_247},{&g_247,&g_247,&g_247,(void*)0,(void*)0,&g_247,&g_247,&g_247},{&g_247,(void*)0,&g_247,(void*)0,(void*)0,(void*)0,&g_247,(void*)0},{&g_247,&g_247,&g_247,&g_247,(void*)0,(void*)0,&g_247,&g_247},{(void*)0,(void*)0,&g_247,&g_247,&g_247,&g_247,&g_247,&g_247},{&g_247,&g_247,&g_247,(void*)0,&g_247,&g_247,&g_247,&g_247},{&g_247,&g_247,&g_247,&g_247,(void*)0,&g_247,&g_247,&g_247},{&g_247,&g_247,&g_247,&g_247,&g_247,&g_247,(void*)0,(void*)0},{&g_247,&g_247,(void*)0,(void*)0,&g_247,&g_247,&g_247,&g_247},{(void*)0,&g_247,(void*)0,(void*)0,(void*)0,&g_247,(void*)0,&g_247}};
static uint32_t g_254 = 0x2D114BE7;
static int32_t g_268 = 0xCA8E44E8;
static uint8_t g_280 = 252U;
static uint8_t g_291 = 247U;
static int8_t g_320[7][3] = {{0x01,0x01,0x01},{0,0,0},{0x01,0x01,0x01},{0,0,0},{0x01,0x01,0x01},{0,0,0},{0x01,0x01,0x01}};
static int8_t *g_319[6][2] = {{&g_320[5][1],&g_320[5][1]},{&g_320[5][1],&g_320[5][1]},{&g_320[5][1],&g_320[5][1]},{&g_320[5][1],&g_320[5][1]},{&g_320[5][1],&g_320[5][1]},{&g_320[5][1],&g_320[5][1]}};
static int32_t *g_323 = (void*)0;
static uint16_t g_341 = 65527U;
static uint16_t *g_340 = &g_341;
static int32_t g_348 = (-1);
static int8_t **g_411 = &g_319[1][0];
static int32_t ***g_455[8] = {&g_208[0],&g_208[0],&g_208[1],&g_208[0],&g_208[0],&g_208[1],&g_208[0],&g_208[0]};
static int8_t **g_465[4][7][6] = {{{&g_319[1][0],(void*)0,&g_319[3][1],&g_319[1][0],&g_319[1][0],&g_319[1][0]},{&g_319[3][1],&g_319[1][1],&g_319[3][1],&g_319[1][0],&g_319[2][0],&g_319[3][1]},{&g_319[3][1],&g_319[1][0],&g_319[1][0],&g_319[1][0],&g_319[2][1],&g_319[1][0]},{&g_319[1][0],&g_319[1][0],&g_319[1][0],&g_319[3][1],&g_319[2][0],&g_319[1][0]},{&g_319[1][0],&g_319[1][1],&g_319[1][0],&g_319[1][0],&g_319[1][0],&g_319[1][0]},{&g_319[1][0],&g_319[1][0],(void*)0,&g_319[1][0],&g_319[3][1],&g_319[1][0]},{&g_319[1][0],&g_319[3][1],&g_319[1][0],&g_319[1][0],&g_319[3][1],&g_319[1][0]}},{{&g_319[1][0],&g_319[1][0],&g_319[1][0],&g_319[5][1],&g_319[1][1],&g_319[1][0]},{&g_319[1][0],&g_319[1][0],&g_319[1][0],(void*)0,&g_319[3][1],&g_319[1][0]},{&g_319[1][0],&g_319[1][1],(void*)0,&g_319[5][1],&g_319[1][0],&g_319[5][1]},{&g_319[1][0],&g_319[1][1],&g_319[1][0],&g_319[1][0],&g_319[3][1],(void*)0},{&g_319[1][0],&g_319[1][0],&g_319[1][0],&g_319[1][0],&g_319[1][1],&g_319[5][1]},{&g_319[5][1],&g_319[1][0],(void*)0,&g_319[1][0],&g_319[3][1],&g_319[1][0]},{&g_319[1][0],&g_319[3][1],&g_319[1][0],&g_319[1][0],&g_319[3][1],&g_319[1][0]}},{{&g_319[1][0],&g_319[1][0],&g_319[1][0],&g_319[5][1],&g_319[1][1],&g_319[1][0]},{&g_319[1][0],&g_319[1][0],&g_319[1][0],(void*)0,&g_319[3][1],&g_319[1][0]},{&g_319[1][0],&g_319[1][1],(void*)0,&g_319[5][1],&g_319[1][0],&g_319[5][1]},{&g_319[1][0],&g_319[1][1],&g_319[1][0],&g_319[1][0],&g_319[3][1],(void*)0},{&g_319[1][0],&g_319[1][0],&g_319[1][0],&g_319[1][0],&g_319[1][1],&g_319[5][1]},{&g_319[5][1],&g_319[1][0],(void*)0,&g_319[1][0],&g_319[3][1],&g_319[1][0]},{&g_319[1][0],&g_319[3][1],&g_319[1][0],&g_319[1][0],&g_319[3][1],&g_319[1][0]}},{{&g_319[1][0],&g_319[1][0],&g_319[1][0],&g_319[5][1],&g_319[1][1],&g_319[1][0]},{&g_319[1][0],&g_319[1][0],&g_319[1][0],(void*)0,&g_319[3][1],&g_319[1][0]},{&g_319[1][0],&g_319[1][1],(void*)0,&g_319[5][1],&g_319[1][0],&g_319[5][1]},{&g_319[1][0],&g_319[1][1],&g_319[1][0],&g_319[1][0],&g_319[3][1],(void*)0},{&g_319[1][0],&g_319[1][0],&g_319[1][0],&g_319[1][0],&g_319[1][1],&g_319[5][1]},{&g_319[5][1],&g_319[1][0],(void*)0,&g_319[1][0],&g_319[3][1],&g_319[1][0]},{&g_319[1][0],&g_319[3][1],&g_319[1][0],&g_319[1][0],&g_319[3][1],&g_319[1][0]}}};
static int8_t g_476 = 0x87;
static int8_t g_602 = 0xDF;
static int8_t * const g_601 = &g_602;
static int8_t * const *g_600[8][5] = {{&g_601,&g_601,(void*)0,&g_601,(void*)0},{&g_601,&g_601,&g_601,&g_601,&g_601},{&g_601,&g_601,(void*)0,&g_601,(void*)0},{&g_601,&g_601,&g_601,&g_601,&g_601},{&g_601,&g_601,(void*)0,&g_601,(void*)0},{&g_601,&g_601,&g_601,&g_601,&g_601},{&g_601,&g_601,(void*)0,&g_601,(void*)0},{&g_601,&g_601,&g_601,&g_601,&g_601}};
static int8_t * const **g_599 = &g_600[4][1];
static int16_t g_603 = 0x6645;
static uint8_t g_612 = 6U;
static uint8_t *g_616 = &g_291;
static uint8_t **g_615 = &g_616;
static uint8_t ***g_614 = &g_615;
static int32_t g_633 = (-5);
static int32_t g_638 = 0xD647801E;
static const uint8_t *g_680 = (void*)0;
static const uint8_t **g_679 = &g_680;
static const uint8_t ***g_678 = &g_679;
static uint8_t g_716 = 0x2F;
static uint16_t g_724 = 65535U;
static uint16_t **g_743 = &g_340;
static uint16_t ***g_742 = &g_743;
static uint16_t ****g_741[7] = {(void*)0,(void*)0,&g_742,(void*)0,(void*)0,&g_742,(void*)0};
static const uint32_t *g_777 = (void*)0;
static const uint32_t * const *g_776[3] = {&g_777,&g_777,&g_777};
static const uint32_t * const **g_775 = &g_776[0];
static uint16_t **** const *g_791 = (void*)0;
static int32_t *g_811[6] = {&g_15,&g_15,&g_15,&g_15,&g_15,&g_15};
static int32_t *g_946 = &g_268;
static uint8_t ** const *g_948 = &g_615;
static uint8_t ** const **g_947 = &g_948;
static int16_t *g_994 = (void*)0;
static int16_t **g_993[5][1][5] = {{{&g_994,&g_994,&g_994,&g_994,&g_994}},{{&g_994,&g_994,&g_994,&g_994,&g_994}},{{&g_994,&g_994,&g_994,&g_994,&g_994}},{{&g_994,&g_994,&g_994,&g_994,&g_994}},{{&g_994,&g_994,&g_994,&g_994,&g_994}}};
static uint32_t *****g_1080 = (void*)0;
static uint32_t **g_1171 = &g_130;
static uint32_t ***g_1170 = &g_1171;
static int8_t ***g_1191 = &g_411;
static int8_t ****g_1190 = &g_1191;
static uint16_t *****g_1202 = &g_741[4];
static const int32_t *g_1206 = &g_633;
static const int32_t **g_1205 = &g_1206;
static const int32_t ***g_1204 = &g_1205;
static uint16_t g_1246[2] = {0x131B,0x131B};
static int32_t g_1407[7] = {0x79A35307,0x79A35307,0x79A35307,0x79A35307,0x79A35307,0x79A35307,0x79A35307};
static uint32_t g_1413 = 0x97C8E5D3;
static int16_t g_1452[9][3][4] = {{{0,0x5FF9,0x05D0,0x1177},{5,0xBE16,0xD29B,0x5F9A},{5,(-7),0x05D0,0x27E3}},{{0,0x5F9A,0xDFEC,0},{0xD4B0,0x05D0,0x2C80,0xEAEE},{6,0xA114,(-1),(-7)}},{{0x1177,(-1),1,0xD4B0},{0xEAEE,4,0x5FF9,0x2241},{0x2744,0x27E3,0,0}},{{4,4,1,3},{0,1,0xF399,0xD29B},{(-1),(-1),5,0xF399}},{{0xD048,(-1),0x27E3,0xD29B},{(-1),1,0x145F,3},{0xD3BC,4,0xD048,0}},{{0x5FF9,0x27E3,(-1),0x2241},{1,4,0,0xD4B0},{3,(-1),0xD3BC,(-7)}},{{3,0xA114,(-4),0xEAEE},{0,0x05D0,0,0},{(-1),0x5F9A,4,0x27E3}},{{1,(-7),0x326C,0x5F9A},{0xA114,0xBE16,0x326C,0x1177},{1,0x5FF9,4,0}},{{(-1),0x2744,0,0xDFEC},{0,0xDFEC,(-4),0x326C},{3,(-1),0xD3BC,0x2744}}};
static const uint16_t g_1477 = 0x26A1;
static uint32_t g_1516 = 0U;
static int32_t *** const *g_1524 = &g_455[3];
static const int32_t *g_1593 = &g_268;
static uint32_t ****g_1652 = &g_1170;
static uint32_t ***** const g_1651 = &g_1652;
static uint32_t *****g_1653 = (void*)0;
static int8_t func_1(void);
static int32_t func_9(uint32_t p_10);
static int32_t func_32(int16_t p_33, int32_t * p_34);
static uint32_t * func_35(int32_t p_36, int16_t p_37, uint8_t * p_38, uint32_t * p_39, int8_t p_40);
static const int32_t * func_45(int32_t * const p_46);
static const uint32_t func_56(uint8_t * const p_57, int32_t p_58, const uint8_t * p_59, uint32_t p_60, int16_t p_61);
static uint8_t * func_62(uint8_t * p_63, int32_t p_64);
static uint8_t * func_85(uint32_t * p_86, int32_t * p_87, int32_t * const p_88, int32_t p_89, const uint32_t p_90);
static uint32_t * func_91(uint8_t p_92);
static int32_t * func_108(int32_t ** p_109, uint8_t * const p_110, const int32_t p_111, uint32_t p_112, int32_t p_113);
static int8_t func_1(void)
{
    uint8_t *l_7[10] = {&g_8,&g_8,&g_8,&g_8,&g_5,&g_8,&g_8,&g_8,&g_8,&g_5};
    int32_t *l_1594 = &g_100;
    uint8_t ***l_1595 = &g_615;
    int32_t *l_1606 = &g_633;
    int16_t **l_1648 = &g_994;
    uint32_t l_1659 = 4294967289U;
    int32_t l_1665 = 0x44449B73;
    int32_t l_1666 = (-5);
    int32_t l_1669[8];
    int16_t l_1684 = 0x3497;
    uint8_t l_1685 = 255U;
    int8_t ***l_1694 = &g_465[3][4][5];
    uint32_t *l_1713 = &g_145;
    uint32_t **l_1712[8][6] = {{&l_1713,&l_1713,&l_1713,&l_1713,&l_1713,&l_1713},{&l_1713,&l_1713,&l_1713,&l_1713,&l_1713,&l_1713},{&l_1713,&l_1713,&l_1713,&l_1713,&l_1713,&l_1713},{&l_1713,&l_1713,&l_1713,&l_1713,&l_1713,&l_1713},{&l_1713,&l_1713,&l_1713,&l_1713,&l_1713,&l_1713},{&l_1713,&l_1713,&l_1713,&l_1713,&l_1713,&l_1713},{&l_1713,&l_1713,&l_1713,&l_1713,&l_1713,&l_1713},{&l_1713,&l_1713,&l_1713,&l_1713,&l_1713,&l_1713}};
    uint32_t ***l_1711 = &l_1712[5][0];
    uint32_t ****l_1710 = &l_1711;
    int i, j;
    for (i = 0; i < 8; i++)
        l_1669[i] = 0xC2A517C2;
    if ((safe_sub_func_int16_t_s_s(((+0U) | g_5), ((g_5 <= (safe_unary_minus_func_uint8_t_u(((g_8 = 253U) | 0x4E)))) && g_5))))
    {
        int16_t l_11 = 1;
        uint32_t *l_12 = &g_13;
        int32_t *l_28 = &g_15;
        int32_t *l_29 = &g_18;
        uint8_t ****l_1596[7][5];
        uint16_t * const ***l_1603 = (void*)0;
        uint32_t *l_1605 = &g_254;
        uint32_t **l_1604 = &l_1605;
        int8_t l_1629 = 0xA3;
        uint8_t l_1639 = 5U;
        int i, j;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 5; j++)
                l_1596[i][j] = &g_614;
        }
        (*l_29) &= ((*l_28) = func_9(((*l_12) |= l_11)));
        if (((g_5--) > ((***g_948) = (func_32(((((*l_1604) = (l_12 = func_35((((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((((**g_1204) = func_45(&g_15)) != l_1594), 1)), 0x7971AA41)) == (*l_1594)) || (((((*g_947) == (g_614 = l_1595)) > (safe_sub_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s((((*l_1594) | (((void*)0 == l_1603) != (*g_601))) && 0x4119), (*l_1594))) || (****g_947)), (****g_947))), (*l_29)))) > 0x48) <= 0U)), l_11, (**l_1595), l_1594, (*l_1594)))) == l_1594) == (*l_1594)), l_1606) >= l_1629))))
        {
            uint32_t l_1630 = 4294967295U;
            int32_t l_1633 = (-4);
            int32_t *l_1634 = (void*)0;
            int32_t *l_1635 = &g_633;
            int32_t *l_1636 = (void*)0;
            int32_t *l_1637 = &g_15;
            int32_t *l_1638[1][1][4] = {{{&g_268,&g_268,&g_268,&g_268}}};
            int i, j, k;
            --l_1630;
            --l_1639;
        }
        else
        {
            uint32_t * const **l_1647[5][9] = {{(void*)0,&g_247,(void*)0,(void*)0,(void*)0,&g_247,(void*)0,(void*)0,&g_247},{&g_247,&g_247,&g_247,&g_247,(void*)0,&g_247,&g_247,&g_247,(void*)0},{&g_247,(void*)0,(void*)0,&g_247,&g_247,&g_247,&g_247,(void*)0,&g_247},{(void*)0,(void*)0,&g_247,&g_247,&g_247,&g_247,&g_247,&g_247,(void*)0},{&g_247,&g_247,&g_247,(void*)0,&g_247,(void*)0,&g_247,&g_247,&g_247}};
            int32_t *l_1649[8] = {&g_268,&g_15,&g_15,&g_268,&g_15,&g_15,&g_268,&g_15};
            int32_t *l_1650 = &g_15;
            int i, j;
lbl_1654:
            (*g_946) |= (safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((((((*l_1594) ^ (((!(((&g_247 == l_1647[3][4]) ^ (***g_614)) || ((-6) & ((**g_775) == ((**g_1170) = func_108(&l_29, (**g_948), ((*l_1650) = (((l_1648 != &g_994) == (*l_29)) > (*l_28))), (*l_29), (*l_29))))))) && (**g_411)) > 0x1B)) <= (*l_1606)) && (*l_28)) & (*l_29)) ^ (*l_1606)), (*l_29))), (*l_1606)));
            g_1653 = g_1651;
            ((void) sizeof ((g_1653 == &g_1652) ? 1 : 0), __extension__ ({ if (g_1653 == &g_1652) ; else __assert_fail ("g_1653 == &g_1652", "/tmp/tmp6t_bgfzu.c", 187, __extension__ __PRETTY_FUNCTION__); }));
            if (g_18)
                goto lbl_1654;
        }
        ((void) sizeof ((l_12 == &g_100) ? 1 : 0), __extension__ ({ if (l_12 == &g_100) ; else __assert_fail ("l_12 == &g_100", "/tmp/tmp6t_bgfzu.c", 192, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((g_130 == 0 || g_130 == &g_633) ? 1 : 0), __extension__ ({ if (g_130 == 0 || g_130 == &g_633) ; else __assert_fail ("g_130 == 0 || g_130 == &g_633", "/tmp/tmp6t_bgfzu.c", 193, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((g_1191 == &g_411 || g_1191 == 0) ? 1 : 0), __extension__ ({ if (g_1191 == &g_411 || g_1191 == 0) ; else __assert_fail ("g_1191 == &g_411 || g_1191 == 0", "/tmp/tmp6t_bgfzu.c", 194, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((g_1206 == &g_268) ? 1 : 0), __extension__ ({ if (g_1206 == &g_268) ; else __assert_fail ("g_1206 == &g_268", "/tmp/tmp6t_bgfzu.c", 195, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((l_1605 == &g_100) ? 1 : 0), __extension__ ({ if (l_1605 == &g_100) ; else __assert_fail ("l_1605 == &g_100", "/tmp/tmp6t_bgfzu.c", 196, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((g_1653 == &g_1652 || g_1653 == 0) ? 1 : 0), __extension__ ({ if (g_1653 == &g_1652 || g_1653 == 0) ; else __assert_fail ("g_1653 == &g_1652 || g_1653 == 0", "/tmp/tmp6t_bgfzu.c", 197, __extension__ __PRETTY_FUNCTION__); }));
        (*g_209) = 0x075BE121;
    }
    else
    {
        int32_t *l_1657 = (void*)0;
        int32_t *l_1658 = &g_638;
        uint32_t *l_1660 = &g_128;
        int16_t l_1662 = 1;
        uint16_t *l_1663[2][1];
        int32_t l_1664 = 0;
        int32_t l_1667 = 0xC30CA449;
        int32_t l_1668 = 0xC80B9ED7;
        int32_t l_1670 = (-3);
        int32_t l_1671 = 1;
        int32_t l_1672 = (-10);
        int32_t l_1673 = (-1);
        int8_t l_1674 = 1;
        int32_t l_1675 = 1;
        int32_t l_1676 = 0xA7862E48;
        int32_t l_1677 = 0xD9359B98;
        int32_t l_1678 = (-3);
        int32_t l_1679 = 0x660BAAB7;
        int32_t l_1680 = 0xFAD7468C;
        int32_t l_1681 = 6;
        int32_t l_1682 = 0x13E1B72B;
        int32_t l_1683[3][9][7] = {{{0x8962BB3A,0x1B763B75,0xACED8F48,9,0x3ACB2A38,4,(-1)},{(-1),0x0A8551C9,(-1),0x9B87F520,(-1),0x0A8551C9,(-1)},{(-5),0x1B763B75,9,1,1,3,0x23523B16},{1,0x2E92A555,0x387A1651,0,0,0x387A1651,0x2E92A555},{(-1),0x33591DEA,9,1,8,1,0x3ACB2A38},{3,0,(-1),3,0x2E92A555,3,(-1)},{1,0x31241A42,0xACED8F48,1,(-1),0x3EB4DCFA,1},{(-1),(-1),0xAA9E3574,0,0x0A8551C9,0x0A8551C9,0},{0x90F2C496,4,0x90F2C496,1,(-1),0x15F38228,8}},{{0,0x2E92A555,0x7AA2670F,0x9B87F520,0x2E92A555,(-10),0x2E92A555},{0x8962BB3A,1,0x23523B16,9,8,0x15F38228,(-1)},{0x0A8551C9,(-1),(-1),0xAA9E3574,0,0x0A8551C9,0x0A8551C9},{1,0x1B763B75,0x05AAD60E,0x1B763B75,1,0x3EB4DCFA,(-1)},{1,3,3,0,(-1),3,0x2E92A555},{0x23523B16,4,9,(-10),0x3ACB2A38,1,8},{1,0,(-10),1,0x2E92A555,0x387A1651,0},{1,3,0x23523B16,1,0x23523B16,3,1},{0x0A8551C9,0,0xAA9E3574,(-1),(-1),(-10),0x387A1651}},{{9,3,(-7),0x15F38228,0x90F2C496,1,(-5)},{3,0x96B25F2D,1,3,0x96B25F2D,0x387A1651,0x0A8551C9},{0x05AAD60E,0x15F38228,0xAD3B64F6,(-2),(-5),(-2),0xAD3B64F6},{(-1),(-1),1,3,3,0,(-1)},{0x23523B16,4,5,0x15F38228,0xACED8F48,(-1),0x90F2C496},{0x7AA2670F,0x0A8551C9,0x7AA2670F,0x387A1651,3,0x7AA2670F,0x96B25F2D},{0x90F2C496,3,0x3ACB2A38,0x33591DEA,(-5),9,(-5)},{0xAA9E3574,0x387A1651,0x387A1651,0xAA9E3574,0x96B25F2D,0x7AA2670F,3},{0xACED8F48,1,0xAD3B64F6,0x57A32733,0x90F2C496,(-1),0xACED8F48}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_1663[i][j] = &g_724;
        }
        (**g_1204) = func_108((**g_1524), (**g_948), ((*l_1658) = (1 > (safe_rshift_func_uint8_t_u_s(0x23, 0)))), ((*l_1660) = (l_1659 = (*l_1606))), (*g_209));
        (*l_1658) = ((l_1662 ^= ((65529U | (***g_742)) >= ((~(*l_1658)) < (*l_1658)))) | (--l_1685));
        (*g_209) = ((-10) & ((*l_1594) || (((*l_1660) = (((safe_rshift_func_int16_t_s_s(0x7802, (safe_mul_func_uint8_t_u_u((*l_1594), (*l_1594))))) || (((*g_1190) = l_1694) == l_1694)) > ((*l_1606) < (***g_1204)))) < (*l_1606))));
        ((void) sizeof ((g_1191 == &g_411 || (g_1191 >= &g_465[0][0][0] && g_1191 <= &g_465[3][6][5])) ? 1 : 0), __extension__ ({ if (g_1191 == &g_411 || (g_1191 >= &g_465[0][0][0] && g_1191 <= &g_465[3][6][5])) ; else __assert_fail ("g_1191 == &g_411 || (g_1191 >= &g_465[0][0][0] && g_1191 <= &g_465[3][6][5])", "/tmp/tmp6t_bgfzu.c", 234, __extension__ __PRETTY_FUNCTION__); }));
    }
    ((void) sizeof ((g_130 == 0 || g_130 == &g_633) ? 1 : 0), __extension__ ({ if (g_130 == 0 || g_130 == &g_633) ; else __assert_fail ("g_130 == 0 || g_130 == &g_633", "/tmp/tmp6t_bgfzu.c", 237, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((g_1191 == &g_411 || (g_1191 >= &g_465[0][0][0] && g_1191 <= &g_465[3][6][5]) || g_1191 == 0) ? 1 : 0), __extension__ ({ if (g_1191 == &g_411 || (g_1191 >= &g_465[0][0][0] && g_1191 <= &g_465[3][6][5]) || g_1191 == 0) ; else __assert_fail ("g_1191 == &g_411 || (g_1191 >= &g_465[0][0][0] && g_1191 <= &g_465[3][6][5]) || g_1191 == 0", "/tmp/tmp6t_bgfzu.c", 238, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((g_1206 == &g_633 || g_1206 == &g_268) ? 1 : 0), __extension__ ({ if (g_1206 == &g_633 || g_1206 == &g_268) ; else __assert_fail ("g_1206 == &g_633 || g_1206 == &g_268", "/tmp/tmp6t_bgfzu.c", 239, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((g_1653 == &g_1652 || g_1653 == 0) ? 1 : 0), __extension__ ({ if (g_1653 == &g_1652 || g_1653 == 0) ; else __assert_fail ("g_1653 == &g_1652 || g_1653 == 0", "/tmp/tmp6t_bgfzu.c", 240, __extension__ __PRETTY_FUNCTION__); }));
    for (g_724 = 21; (g_724 <= 13); --g_724)
    {
        uint32_t l_1697 = 4294967295U;
        for (g_341 = 2; (g_341 <= 7); g_341 += 1)
        {
            ++l_1697;
        }
        return (*l_1606);
    }
    l_1669[3] &= (((*g_946) |= ((****g_1524) = ((safe_sub_func_int8_t_s_s((*l_1594), (*l_1594))) || ((*l_1606) = (((((safe_lshift_func_uint16_t_u_u((((**g_411) = (((*l_1606) ^ (safe_mul_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((l_1710 != (void*)0), ((***g_948) |= ((((*l_1606) < ((*g_601) ^ (*l_1606))) < ((****g_1524) ^ (*l_1606))) ^ 0x906D8D2B)))), 4)) > 0x511BDDF5) && 0x2DEE), (*l_1594)))) & (*l_1606))) || (*l_1606)), (*l_1606))) && (*l_1594)) < (*l_1594)) & (*l_1594)) >= 4294967286U))))) ^ (-10));
    return (*l_1594);
}
static int32_t func_9(uint32_t p_10)
{
    int32_t *l_14 = &g_15;
    int32_t *l_16 = &g_15;
    int32_t *l_17 = (void*)0;
    int32_t *l_19 = (void*)0;
    int32_t *l_20 = &g_15;
    int32_t *l_21 = &g_18;
    int32_t *l_22 = &g_18;
    int32_t *l_23[7] = {&g_18,&g_18,&g_18,&g_18,&g_18,&g_18,&g_18};
    uint32_t l_25 = 0xE01E6E83;
    int i;
    l_25--;
    return g_15;
}
static int32_t func_32(int16_t p_33, int32_t * p_34)
{
    int16_t l_1607 = 0xBD17;
    int32_t *l_1608 = &g_268;
    int32_t *l_1609 = &g_638;
    int32_t *l_1610 = &g_268;
    int32_t *l_1611 = (void*)0;
    int32_t *l_1612 = &g_633;
    int32_t l_1613 = 5;
    int32_t *l_1614 = &g_638;
    int32_t *l_1615 = &g_15;
    int32_t *l_1616 = &l_1613;
    int32_t *l_1617 = &g_100;
    int32_t *l_1618 = &g_100;
    int32_t l_1619 = (-1);
    int32_t *l_1620 = &g_268;
    int32_t *l_1621 = (void*)0;
    int32_t *l_1622 = &l_1613;
    int32_t *l_1623 = &g_633;
    int32_t *l_1624[2][7] = {{(void*)0,(void*)0,&l_1613,&g_633,&g_268,&g_633,&l_1613},{(void*)0,(void*)0,&l_1613,&g_633,&g_268,&g_633,&l_1613}};
    int32_t l_1625[2];
    uint8_t l_1626 = 255U;
    int i, j;
    for (i = 0; i < 2; i++)
        l_1625[i] = (-1);
    --l_1626;
    return (*l_1623);
}
static uint32_t * func_35(int32_t p_36, int16_t p_37, uint8_t * p_38, uint32_t * p_39, int8_t p_40)
{
    return p_39;
}
static const int32_t * func_45(int32_t * const p_46)
{
    uint8_t l_51 = 0xFF;
    uint16_t **l_1551 = &g_340;
    uint16_t **l_1552 = (void*)0;
    uint16_t l_1555 = 0x0153;
    (*g_946) = (safe_mul_func_int8_t_s_s((safe_div_func_int16_t_s_s(l_51, (safe_div_func_int16_t_s_s((safe_mod_func_int16_t_s_s((func_56(func_62(&g_8, l_51), (0xC1 | ((**g_411) = ((safe_mod_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((l_1551 = l_1551) == l_1552), l_51)), ((safe_mul_func_uint8_t_u_u(l_51, l_51)) | (-1)))) <= l_1555))), (**g_948), l_1555, l_1555) ^ 0xBE4D2E1A), l_51)), l_1555)))), 0x6D));
    ((void) sizeof ((g_1191 == &g_411 || g_1191 == 0) ? 1 : 0), __extension__ ({ if (g_1191 == &g_411 || g_1191 == 0) ; else __assert_fail ("g_1191 == &g_411 || g_1191 == 0", "/tmp/tmp6t_bgfzu.c", 338, __extension__ __PRETTY_FUNCTION__); }));
    return g_1593;
}
static const uint32_t func_56(uint8_t * const p_57, int32_t p_58, const uint8_t * p_59, uint32_t p_60, int16_t p_61)
{
    int32_t l_1556 = 0x124B2E6F;
    int16_t *l_1573[8] = {&g_1452[1][2][1],&g_603,&g_1452[1][2][1],&g_603,&g_1452[1][2][1],&g_603,&g_1452[1][2][1],&g_603};
    int32_t l_1574 = (-9);
    uint32_t l_1575[7];
    uint8_t l_1578 = 0x4E;
    int32_t l_1588 = (-7);
    int32_t l_1589 = (-1);
    int i;
    for (i = 0; i < 7; i++)
        l_1575[i] = 7U;
    (*g_946) &= ((l_1556 ^ (safe_sub_func_int8_t_s_s((&g_599 != (void*)0), (safe_div_func_int32_t_s_s((safe_div_func_int8_t_s_s((((safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s(((*g_209) = (((***g_948) = l_1556) ^ ((safe_lshift_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((p_60 == p_60), ((l_1574 = p_58) | (((**g_1170) != &p_60) ^ l_1556)))), p_58)) || 5U))), p_60)), 4)), (**g_1205))) < p_58) != l_1556), (*g_601))), l_1556))))) || l_1575[5]);
    for (p_61 = 26; (p_61 <= (-7)); p_61 = safe_sub_func_int32_t_s_s(p_61, 6))
    {
        int32_t *l_1581 = (void*)0;
        int32_t *l_1582 = &g_268;
        int32_t *l_1583 = &g_100;
        int32_t *l_1584 = &g_633;
        int32_t *l_1585 = &g_18;
        int32_t l_1586 = 0;
        int32_t *l_1587[3][5] = {{&g_268,&g_268,&g_268,&g_268,&g_268},{&g_100,&g_100,&g_100,&g_100,&g_100},{&g_268,&g_268,&g_268,&g_268,&g_268}};
        uint8_t l_1590 = 1U;
        int i, j;
        (***g_1524) = (***g_1524);
        l_1578++;
        l_1590++;
        l_1587[0][1] = (void*)0;
    }
    return p_61;
}
static uint8_t * func_62(uint8_t * p_63, int32_t p_64)
{
    int32_t * const l_757 = &g_268;
    int16_t l_1322 = (-1);
    uint8_t *l_1327 = (void*)0;
    uint32_t * const *l_1329 = &g_248;
    int32_t l_1343 = 0x0EFF88C9;
    int16_t **l_1375 = &g_994;
    uint32_t l_1398 = 4294967293U;
    int32_t l_1448 = 0;
    int32_t l_1453 = (-9);
    int32_t l_1486 = 1;
    int8_t *** const l_1546 = &g_465[1][3][0];
    for (p_64 = (-25); (p_64 <= (-13)); p_64 = safe_add_func_uint8_t_u_u(p_64, 6))
    {
        return p_63;
    }
    for (g_18 = 0; (g_18 != (-28)); --g_18)
    {
        int32_t *l_116 = &g_100;
        int32_t **l_115 = &l_116;
        int32_t ***l_114 = &l_115;
        uint8_t l_1321[8];
        int16_t l_1323 = (-1);
        int32_t l_1341 = (-1);
        int32_t l_1342[2];
        uint16_t l_1344 = 8U;
        const int8_t l_1391 = 0x50;
        int32_t l_1451 = 0x0D62A85D;
        int32_t l_1514 = 1;
        int i;
        for (i = 0; i < 8; i++)
            l_1321[i] = 255U;
        for (i = 0; i < 2; i++)
            l_1342[i] = 7;
    }
    if (((*l_1375) != (*l_1375)))
    {
        uint32_t l_1526 = 0xCEF2B652;
        l_1526++;
    }
    else
    {
        int32_t l_1535 = 0x3B177D63;
        (*g_946) = (p_64 && ((((((safe_rshift_func_int16_t_s_s((*l_757), 2)) >= (safe_div_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(((***g_742) = l_1535), (safe_mul_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(p_64, ((*g_616) ^ (!((****g_1524) = (p_64 & (safe_mod_func_uint32_t_u_u((((*l_757) != (!(+(~(*l_757))))) < ((*p_63) = ((((*g_1190) = (void*)0) != l_1546) ^ 7))), l_1535)))))))), p_64)))), p_64))) == 0) || l_1535) && p_64) <= 0x75));
        ((void) sizeof ((g_1191 == &g_411 || g_1191 == 0) ? 1 : 0), __extension__ ({ if (g_1191 == &g_411 || g_1191 == 0) ; else __assert_fail ("g_1191 == &g_411 || g_1191 == 0", "/tmp/tmp6t_bgfzu.c", 438, __extension__ __PRETTY_FUNCTION__); }));
    }
    ((void) sizeof ((g_1191 == &g_411 || g_1191 == 0) ? 1 : 0), __extension__ ({ if (g_1191 == &g_411 || g_1191 == 0) ; else __assert_fail ("g_1191 == &g_411 || g_1191 == 0", "/tmp/tmp6t_bgfzu.c", 441, __extension__ __PRETTY_FUNCTION__); }));
    return (***g_947);
}
static uint8_t * func_85(uint32_t * p_86, int32_t * p_87, int32_t * const p_88, int32_t p_89, const uint32_t p_90)
{
    int16_t * const l_766 = &g_603;
    int32_t l_778 = 0x3773A5D7;
    int8_t l_782[6][10][4] = {{{0,0,6,0x1B},{(-9),0xF2,0xF2,(-9)},{(-9),0,6,0},{0,(-9),0x09,0xC8},{0x1B,0xD7,0x1B,0xC8},{0x09,(-9),0,0},{6,0,(-9),(-9)},{0xF2,0xF2,(-9),0x1B},{6,0,0,0},{0x09,0,0x1B,0}},{{0x1B,0,0x09,0},{0,0,6,0x1B},{(-9),0xF2,0xF2,(-9)},{(-9),0,6,0},{0,(-9),0x09,0xC8},{0x1B,0xD7,0x1B,0xC8},{0x09,(-9),0,0},{6,0,(-9),(-9)},{0xF2,0xF2,(-9),0x1B},{6,0,0,0}},{{6,0xD7,0,0xD7},{0,0xD7,6,(-9)},{0xD7,0x09,0x1B,0},{0xF2,0xC8,0xC8,0xF2},{0xF2,(-9),0x1B,0},{0xD7,0xF2,6,0},{0,0,0,0},{6,0xF2,0xD7,0},{0x1B,(-9),0xF2,0xF2},{0xC8,0xC8,0xF2,0}},{{0x1B,0x09,0xD7,(-9)},{6,0xD7,0,0xD7},{0,0xD7,6,(-9)},{0xD7,0x09,0x1B,0},{0xF2,0xC8,0xC8,0xF2},{0xF2,(-9),0x1B,0},{0xD7,0xF2,6,0},{0,0,0,0},{6,0xF2,0xD7,0},{0x1B,(-9),0xF2,0xF2}},{{0xC8,0xC8,0xF2,0},{0x1B,0x09,0xD7,(-9)},{6,0xD7,0,0xD7},{0,0xD7,6,(-9)},{0xD7,0x09,0x1B,0},{0xF2,0xC8,0xC8,0xF2},{0xF2,(-9),0x1B,0},{0xD7,0xF2,6,0},{0,0,0,0},{6,0xF2,0xD7,0}},{{0x1B,(-9),0xF2,0xF2},{0xC8,0xC8,0xF2,0},{0x1B,0x09,0xD7,(-9)},{6,0xD7,0,0xD7},{0,0xD7,6,(-9)},{0xD7,0x09,0x1B,0},{0xF2,0xC8,0xC8,0xF2},{0xF2,(-9),0x1B,0},{0xD7,0xF2,6,0},{0,0,0,0}}};
    uint8_t * const l_785 = &g_291;
    int32_t **l_792[3][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
    int32_t *l_809[10][4][6] = {{{&g_268,(void*)0,(void*)0,&g_15,&g_268,(void*)0},{&g_633,&g_15,(void*)0,&g_633,&g_18,&g_633},{&g_633,&g_638,&g_633,&g_15,&g_15,&g_633},{&g_268,&g_268,(void*)0,(void*)0,&g_15,&g_268}},{{&g_15,(void*)0,&g_638,&g_18,&g_268,&g_633},{&g_15,&g_633,&g_638,&g_633,&g_15,&g_15},{&g_638,&g_633,&g_633,&g_638,&g_268,(void*)0},{&g_638,&g_268,(void*)0,&g_633,&g_633,&g_638}},{{&g_15,(void*)0,&g_633,&g_18,&g_633,(void*)0},{&g_633,&g_268,&g_638,&g_638,&g_268,&g_633},{&g_15,&g_633,&g_638,&g_633,&g_15,(void*)0},{&g_638,&g_633,&g_633,(void*)0,&g_268,&g_638}},{{&g_638,(void*)0,(void*)0,&g_633,&g_633,(void*)0},{&g_15,&g_15,&g_633,&g_638,&g_633,&g_15},{&g_633,(void*)0,&g_638,&g_18,&g_268,&g_633},{&g_15,&g_633,&g_638,&g_633,&g_15,&g_15}},{{&g_638,&g_633,&g_633,&g_638,&g_268,(void*)0},{&g_638,&g_268,(void*)0,&g_633,&g_633,&g_638},{&g_15,(void*)0,&g_633,&g_18,&g_633,(void*)0},{&g_633,&g_268,&g_638,&g_638,&g_268,&g_633}},{{&g_15,&g_633,&g_638,&g_633,&g_15,(void*)0},{&g_638,&g_633,&g_633,(void*)0,&g_268,&g_638},{&g_638,(void*)0,(void*)0,&g_633,&g_633,(void*)0},{&g_15,&g_15,&g_633,&g_638,&g_633,&g_15}},{{&g_633,(void*)0,&g_638,&g_18,&g_268,&g_633},{&g_15,&g_633,&g_638,&g_633,&g_15,&g_15},{&g_638,&g_633,&g_633,&g_638,&g_268,(void*)0},{&g_638,&g_268,(void*)0,&g_633,&g_633,&g_638}},{{&g_15,(void*)0,&g_633,&g_18,&g_633,(void*)0},{&g_633,&g_268,&g_638,&g_638,&g_268,&g_633},{&g_15,&g_633,&g_638,&g_633,&g_15,(void*)0},{&g_638,&g_633,&g_633,(void*)0,&g_268,&g_638}},{{&g_638,(void*)0,(void*)0,&g_633,&g_633,(void*)0},{&g_15,&g_15,&g_633,&g_638,&g_633,&g_15},{&g_633,(void*)0,&g_638,&g_18,&g_268,&g_633},{&g_15,&g_633,&g_638,&g_633,&g_15,&g_15}},{{&g_18,(void*)0,(void*)0,&g_18,&g_15,&g_638},{&g_18,&g_15,&g_638,(void*)0,&g_638,&g_18},{&g_633,&g_633,(void*)0,&g_268,&g_638,&g_633},{&g_638,&g_15,(void*)0,(void*)0,&g_15,&g_638}}};
    uint16_t l_812[10][8] = {{0xA382,0x9A11,0x2944,0x409B,0x9A11,0x409B,0x2944,0x9A11},{0x64E1,0x2944,0xA382,0x64E1,0x409B,0x409B,0x64E1,0xA382},{0x9A11,0x9A11,0x07E5,0U,0x64E1,0x07E5,0x64E1,0U},{0xA382,0U,0xA382,0x409B,0U,0x2944,0x2944,0U},{0U,0x2944,0x2944,0U,0x409B,0xA382,0U,0xA382},{0U,0x64E1,0x07E5,0x64E1,0U,0x07E5,0x9A11,0x9A11},{0xA382,0x64E1,0x409B,0x409B,0x64E1,0xA382,0x2944,0x64E1},{0x9A11,0x2944,0x409B,0x9A11,0x409B,0x2944,0x9A11,0xA382},{0x64E1,0U,0x07E5,0x9A11,0x9A11,0x07E5,0U,0x64E1},{0xA382,0x9A11,0x2944,0x409B,0x9A11,0x409B,0x2944,0x9A11}};
    int8_t ***l_823 = &g_465[0][2][4];
    uint32_t l_833 = 0x7DE3B390;
    uint32_t *l_839 = &g_145;
    uint32_t **l_838 = &l_839;
    uint32_t ***l_837 = &l_838;
    uint32_t ****l_836 = &l_837;
    int8_t l_855 = 0x2E;
    uint16_t ***l_878 = &g_743;
    uint32_t **l_882 = &g_130;
    uint32_t l_892 = 0x7B4000FA;
    uint8_t *l_972[10] = {&g_716,&g_716,&g_716,&g_716,&g_716,&g_716,&g_716,&g_716,&g_716,&g_716};
    uint32_t *****l_977 = &l_836;
    int32_t l_1022[6] = {(-3),(-3),(-3),(-3),(-3),(-3)};
    int8_t l_1023 = 1;
    uint8_t ****l_1059 = (void*)0;
    const int8_t l_1086 = 0x16;
    uint8_t l_1090 = 1U;
    int16_t l_1095 = 1;
    uint16_t l_1118 = 0xCB32;
    int32_t l_1182 = 1;
    uint32_t l_1183 = 4294967294U;
    uint32_t l_1187 = 0xF0541801;
    int32_t l_1226 = 1;
    int i, j, k;
    return (**g_614);
}
static uint32_t * func_91(uint8_t p_92)
{
    int32_t l_93 = (-1);
    int32_t l_94 = 0x3999EA34;
    int32_t *l_95 = &l_94;
    int32_t *l_96 = &l_93;
    int32_t *l_97 = (void*)0;
    int32_t *l_98[8];
    int32_t **l_107 = &l_96;
    int i;
    for (i = 0; i < 8; i++)
        l_98[i] = &l_93;
    g_101--;
    for (g_13 = 0; (g_13 > 39); g_13 = safe_add_func_int32_t_s_s(g_13, 6))
    {
        uint32_t *l_106 = &g_13;
        return l_106;
    }
    (*l_107) = &g_100;
    ((void) sizeof ((l_96 == &g_100) ? 1 : 0), __extension__ ({ if (l_96 == &g_100) ; else __assert_fail ("l_96 == &g_100", "/tmp/tmp6t_bgfzu.c", 519, __extension__ __PRETTY_FUNCTION__); }));
    return l_96;
}
static int32_t * func_108(int32_t ** p_109, uint8_t * const p_110, const int32_t p_111, uint32_t p_112, int32_t p_113)
{
    int32_t l_126 = 0xDF4B1D3D;
    int32_t l_129[4];
    const int8_t l_177 = 0x44;
    uint32_t * const *l_272 = &g_248;
    int32_t l_307 = 0x25545FF2;
    uint16_t l_311 = 0U;
    uint32_t *l_375 = &g_145;
    uint32_t **l_374 = &l_375;
    int32_t *l_392[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t l_448 = 5U;
    uint8_t l_503 = 0x26;
    const int32_t l_532 = 0x508419C3;
    const uint16_t * const l_575 = &l_311;
    const uint16_t * const * const l_574 = &l_575;
    int16_t l_605 = 3;
    int16_t l_607 = 0x6CF4;
    uint32_t l_609 = 4294967292U;
    uint8_t ***l_677 = &g_615;
    int32_t *l_745 = &l_129[3];
    int8_t * const **l_754 = &g_600[4][1];
    int32_t *l_755 = &l_126;
    int32_t *l_756 = &g_633;
    int i;
    for (i = 0; i < 4; i++)
        l_129[i] = 0xDE8EBF9D;
    for (p_112 = 0; (p_112 <= 3); p_112 += 1)
    {
        uint32_t *l_127 = &g_128;
        int32_t l_131 = (-1);
        uint8_t *l_152 = &g_118;
        uint8_t **l_151 = &l_152;
        int8_t l_178 = 0xD1;
        int16_t l_183 = 0;
        int32_t l_205 = 0x963C95D7;
        int32_t *l_220 = &g_100;
        uint32_t l_229[9] = {1U,1U,0x5D11EB18,1U,1U,0x5D11EB18,1U,1U,0x5D11EB18};
        int32_t l_302 = 0x76B58073;
        uint32_t l_327[10][8] = {{0xE9A344E1,0xAED423E1,4294967295U,0xAED423E1,0xE9A344E1,0xF5A984FC,0U,4294967295U},{0x4DB0985C,0xE9A344E1,0U,0x9FEFAF0F,0xC11497F7,4294967292U,0xF5A984FC,0xAED423E1},{3U,0U,0U,4294967287U,0xC6D283DC,0x6152840A,0U,0U},{0xC11497F7,3U,4294967295U,4294967295U,3U,0xC11497F7,0xEDB65A2F,0x9FEFAF0F},{0x6152840A,0xC6D283DC,4294967287U,0U,0U,3U,0xC6D283DC,0xA29FEBA9},{4294967292U,0xC11497F7,0x9FEFAF0F,0U,0xE9A344E1,0x4DB0985C,0U,0x9FEFAF0F},{0xF5A984FC,0xE9A344E1,0xAED423E1,3U,4294967287U,0xC11497F7,0U,0x6152840A},{0xAD18B259,0x6152840A,1U,8U,0xC333C1A1,4294967295U,0xA29FEBA9,4294967287U},{3U,4294967292U,4294967292U,0xC6D283DC,0xC333C1A1,3U,0xE9A344E1,3U},{0xAD18B259,0xF5A984FC,8U,4294967287U,4294967287U,8U,0xF5A984FC,0xAD18B259}};
        int8_t **l_406 = (void*)0;
        int8_t ***l_464 = &g_411;
        int32_t *l_470 = &g_100;
        uint32_t l_493 = 0x1236AFFF;
        int32_t l_502[9][9] = {{0xDDE3FD4D,4,(-6),0x11890916,(-1),0xDDE3FD4D,0x11890916,1,0x11890916},{0x73A738F7,1,(-9),(-9),1,0x73A738F7,(-1),0x18EAF957,(-9)},{0xDDE3FD4D,(-1),0x11890916,(-6),4,0xDDE3FD4D,0xDDE3FD4D,4,(-6)},{0xCE1FB0EF,1,0xCE1FB0EF,0x73A738F7,(-1),0xCE1FB0EF,(-1),(-10),0x73A738F7},{(-1),4,0x11890916,(-1),(-2),(-1),0x11890916,4,(-1)},{0x141852EB,(-1),(-9),0x73A738F7,0x1985A28A,0x141852EB,0x73A738F7,0x18EAF957,0x73A738F7},{0x11890916,(-2),(-6),(-6),(-2),0x11890916,0,1,(-6)},{0x141852EB,0x1985A28A,0x73A738F7,(-9),(-1),0x141852EB,0x141852EB,(-1),(-9)},{(-1),(-2),(-1),0x11890916,4,(-1),0,0x27E58C0A,0x11890916}};
        uint16_t *l_524 = &g_341;
        uint32_t l_535[3][8] = {{0x62730DAC,0xE9EB4A1F,0x62730DAC,0xB68EDB20,0xE9EB4A1F,1U,1U,0xE9EB4A1F},{0xE9EB4A1F,1U,1U,0xE9EB4A1F,0xB68EDB20,0x62730DAC,0xE9EB4A1F,0x62730DAC},{0xE9EB4A1F,4294967295U,1U,4294967295U,0xE9EB4A1F,1U,0x2CA895AA,0x2CA895AA}};
        uint16_t * const *l_592 = (void*)0;
        uint16_t * const **l_591 = &l_592;
        int8_t * const *l_597[7][6] = {{(void*)0,&g_319[2][0],(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&g_319[1][0],&g_319[4][0],(void*)0},{&g_319[1][0],&g_319[1][0],(void*)0,&g_319[2][0],(void*)0,(void*)0},{&g_319[2][0],(void*)0,(void*)0,&g_319[2][0],(void*)0,&g_319[1][0]},{&g_319[1][0],(void*)0,&g_319[4][0],&g_319[1][0],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_319[2][0]},{(void*)0,(void*)0,&g_319[3][1],&g_319[0][1],(void*)0,&g_319[4][0]}};
        int8_t * const **l_596 = &l_597[5][0];
        int16_t l_608 = 7;
        uint32_t **l_631 = &g_130;
        uint16_t l_635 = 65533U;
        uint32_t ** const *l_651 = &l_374;
        int32_t *l_663[7][1][10] = {{{&g_15,&l_502[2][7],(void*)0,&l_502[1][1],&g_100,&l_126,&l_129[1],&g_15,&g_15,&l_129[1]}},{{(void*)0,&l_502[7][5],&g_633,&g_633,&l_502[7][5],&g_268,&g_15,(void*)0,&l_129[3],&g_15}},{{(void*)0,&l_302,&l_502[7][5],&g_18,&l_307,(void*)0,&l_129[3],&l_126,&l_502[7][5],&g_638}},{{(void*)0,&l_307,(void*)0,&l_129[0],&g_15,&g_268,&g_638,&g_638,&g_638,&g_268}},{{&g_268,&g_638,&g_638,&g_638,&g_268,&g_15,&l_129[0],(void*)0,&l_307,(void*)0}},{{&g_638,&l_502[7][5],&l_126,&l_129[3],(void*)0,&l_307,&g_18,&l_502[7][5],&l_302,(void*)0}},{{&g_15,&l_129[3],(void*)0,&g_15,&g_268,&g_638,&l_307,&l_307,&g_638,&g_268}}};
        int32_t l_696 = 0xC16C29A9;
        uint16_t l_749 = 1U;
        int i, j, k;
    }
    (*l_745) = ((g_99 == (g_128 = ((safe_mul_func_uint16_t_u_u(((l_754 != (void*)0) != ((*g_601) = ((*g_599) == (*l_754)))), (g_603 | g_24[0][6]))) & (((***g_614) ^= 0U) > p_113)))) != p_113);
    return l_756;
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_5;
    csmith_sink_ = g_8;
    csmith_sink_ = g_13;
    csmith_sink_ = g_15;
    csmith_sink_ = g_18;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            csmith_sink_ = g_24[i][j];
        }
    }
    csmith_sink_ = g_99;
    csmith_sink_ = g_100;
    csmith_sink_ = g_101;
    csmith_sink_ = g_118;
    csmith_sink_ = g_128;
    csmith_sink_ = g_145;
    csmith_sink_ = g_254;
    csmith_sink_ = g_268;
    csmith_sink_ = g_280;
    csmith_sink_ = g_291;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            csmith_sink_ = g_320[i][j];
        }
    }
    csmith_sink_ = g_341;
    csmith_sink_ = g_348;
    csmith_sink_ = g_476;
    csmith_sink_ = g_602;
    csmith_sink_ = g_603;
    csmith_sink_ = g_612;
    csmith_sink_ = g_633;
    csmith_sink_ = g_638;
    csmith_sink_ = g_716;
    csmith_sink_ = g_724;
    for (i = 0; i < 2; i++)
    {
        csmith_sink_ = g_1246[i];
    }
    for (i = 0; i < 7; i++)
    {
        csmith_sink_ = g_1407[i];
    }
    csmith_sink_ = g_1413;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                csmith_sink_ = g_1452[i][j][k];
            }
        }
    }
    csmith_sink_ = g_1477;
    csmith_sink_ = g_1516;
    platform_main_end(0,0);
    return 0;
}
