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
static int64_t
(safe_unary_minus_func_int64_t_s)(int64_t si )
{
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
(safe_add_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
(safe_sub_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
(safe_mul_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
(safe_mod_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
(safe_div_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
(safe_lshift_func_int64_t_s_s)(int64_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
(safe_lshift_func_int64_t_s_u)(int64_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
(safe_rshift_func_int64_t_s_s)(int64_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
(safe_rshift_func_int64_t_s_u)(int64_t left, unsigned int right )
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
static uint64_t
(safe_unary_minus_func_uint64_t_u)(uint64_t ui )
{
  return -ui;
}
static uint64_t
(safe_add_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
  return ui1 + ui2;
}
static uint64_t
(safe_sub_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
  return ui1 - ui2;
}
static uint64_t
(safe_mul_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
(safe_mod_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
(safe_div_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
(safe_lshift_func_uint64_t_u_s)(uint64_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
(safe_lshift_func_uint64_t_u_u)(uint64_t left, unsigned int right )
{
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
(safe_rshift_func_uint64_t_u_s)(uint64_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
(safe_rshift_func_uint64_t_u_u)(uint64_t left, unsigned int right )
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
crc32_8bytes (uint64_t val)
{
 crc32_byte ((val>>0) & 0xff);
 crc32_byte ((val>>8) & 0xff);
 crc32_byte ((val>>16) & 0xff);
 crc32_byte ((val>>24) & 0xff);
 crc32_byte ((val>>32) & 0xff);
 crc32_byte ((val>>40) & 0xff);
 crc32_byte ((val>>48) & 0xff);
 crc32_byte ((val>>56) & 0xff);
}
static void
transparent_crc (uint64_t val, char* vname, int flag)
{
 crc32_8bytes(val);
 if (flag) {
    printf("...checksum after hashing %s : %lX\n", vname, crc32_context ^ 0xFFFFFFFFUL);
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

volatile uint64_t csmith_sink_ = 0;
static long __undefined;
static int32_t g_3 = (-8L);
static uint8_t g_22 = 0x94L;
static int32_t g_74 = 0L;
static int32_t *g_73[3] = {&g_74,&g_74,&g_74};
static int64_t g_109 = 0xA37F729B20146E06LL;
static uint8_t *g_114 = (void*)0;
static uint8_t **g_113 = &g_114;
static uint8_t ***g_112 = &g_113;
static int32_t **g_120 = &g_73[2];
static int8_t g_135 = 0x5FL;
static int32_t ****g_166 = (void*)0;
static int32_t g_194 = 9L;
static int16_t g_202 = (-1L);
static uint32_t g_209 = 0xDD7E7900L;
static uint8_t ****g_230 = (void*)0;
static uint8_t *****g_229 = &g_230;
static uint16_t g_240 = 0x6156L;
static uint64_t g_242[2][9] = {{18446744073709551612UL,0xB26E68338B46DE65LL,18446744073709551612UL,0x2C5A230DB6F47332LL,0x2C5A230DB6F47332LL,18446744073709551612UL,0xB26E68338B46DE65LL,18446744073709551612UL,0x2C5A230DB6F47332LL},{18446744073709551612UL,0x2C5A230DB6F47332LL,0x2C5A230DB6F47332LL,18446744073709551612UL,0xB26E68338B46DE65LL,18446744073709551612UL,0x2C5A230DB6F47332LL,0x2C5A230DB6F47332LL,18446744073709551612UL}};
static int16_t g_264[3] = {(-8L),(-8L),(-8L)};
static int16_t g_266 = 0xC173L;
static int16_t g_355[6][8][1] = {{{0xAFA6L},{0xAFA6L},{0xAFA6L},{0xAFA6L},{0xAFA6L},{0xAFA6L},{0xAFA6L},{0xAFA6L}},{{0xAFA6L},{0xAFA6L},{0xAFA6L},{0xAFA6L},{0xAFA6L},{0xAFA6L},{0xAFA6L},{0xAFA6L}},{{0xAFA6L},{0xAFA6L},{0xAFA6L},{0xAFA6L},{0xAFA6L},{0xAFA6L},{0xAFA6L},{0xAFA6L}},{{0xAFA6L},{0xAFA6L},{0xAFA6L},{0xAFA6L},{0xAFA6L},{0xAFA6L},{0xAFA6L},{0xAFA6L}},{{0xAFA6L},{0xAFA6L},{0xAFA6L},{0xAFA6L},{0xAFA6L},{0xAFA6L},{0xAFA6L},{0xAFA6L}},{{0xAFA6L},{0xAFA6L},{0xAFA6L},{0xAFA6L},{0xAFA6L},{0xAFA6L},{0xAFA6L},{0xAFA6L}}};
static uint64_t *g_376 = &g_242[0][7];
static uint64_t **g_375[1][3] = {{&g_376,&g_376,&g_376}};
static int32_t g_388 = (-1L);
static int32_t **g_556[3] = {(void*)0,(void*)0,(void*)0};
static int8_t g_632 = 0xEAL;
static uint32_t g_633 = 0xAA0CE313L;
static uint64_t g_673 = 0xA4B17D1833F30FC3LL;
static uint32_t g_680[1][1][8] = {{{0x73B54D6EL,0x73B54D6EL,0x73B54D6EL,0x73B54D6EL,0x73B54D6EL,0x73B54D6EL,0x73B54D6EL,0x73B54D6EL}}};
static int16_t *g_714 = (void*)0;
static int16_t **g_713 = &g_714;
static uint64_t ***g_742 = &g_375[0][1];
static uint16_t g_758 = 65534UL;
static int64_t *g_806 = &g_109;
static int64_t **g_805 = &g_806;
static int64_t **g_845 = &g_806;
static int64_t ***g_902 = &g_845;
static int64_t ****g_901 = &g_902;
static int64_t ****g_904[2][8] = {{&g_902,&g_902,(void*)0,&g_902,&g_902,&g_902,(void*)0,&g_902},{&g_902,&g_902,&g_902,(void*)0,(void*)0,&g_902,&g_902,&g_902}};
static int32_t ****g_908 = (void*)0;
static uint32_t **g_959 = (void*)0;
static uint8_t g_998 = 0x19L;
static int8_t *g_1009[3][2] = {{&g_632,&g_632},{&g_632,&g_632},{&g_632,&g_632}};
static uint8_t g_1121 = 255UL;
static int8_t func_1(void);
static int64_t func_4(int16_t p_5, int8_t p_6);
static uint8_t func_11(uint32_t p_12, uint64_t p_13, uint16_t p_14, int32_t p_15, int32_t p_16);
inline static int64_t func_25(uint64_t p_26, int32_t p_27, uint8_t * p_28);
static uint32_t func_35(uint16_t p_36, uint8_t * p_37, int8_t p_38);
inline static uint16_t func_39(uint32_t p_40);
static uint8_t * func_43(int8_t p_44, uint64_t p_45);
inline static int16_t func_48(int32_t p_49, uint8_t p_50, uint8_t * p_51, uint8_t * p_52);
static uint8_t * func_55(int32_t p_56, uint8_t * p_57, int8_t p_58, uint64_t p_59, uint8_t * p_60);
static uint8_t * func_61(uint8_t * p_62, int32_t p_63, uint8_t * p_64, uint8_t * p_65);
static int8_t func_1(void)
{
    int32_t l_2[1][3];
    int32_t l_53 = 1L;
    uint8_t *l_391 = &g_22;
    int8_t l_645 = 0x4FL;
    int32_t *l_694 = &l_2[0][0];
    int32_t l_701[8] = {(-1L),7L,(-1L),(-1L),7L,(-1L),(-1L),7L};
    uint64_t **l_707 = &g_376;
    uint16_t l_716 = 65535UL;
    uint8_t l_718 = 0xB1L;
    int32_t l_719 = 0x31A1EA88L;
    int32_t ***l_751 = &g_120;
    int8_t l_756 = 3L;
    int32_t l_759 = 0x60EF6F63L;
    int32_t l_786[1][7][9] = {{{(-3L),(-1L),1L,0x2C7FA26DL,0x2C7FA26DL,1L,(-1L),(-3L),(-1L)},{0x8F6575D5L,0L,1L,(-1L),0x2C7FA26DL,0L,0x1C6BCEE3L,0x667BCFA5L,0x667BCFA5L},{(-1L),(-5L),0L,(-3L),0L,(-5L),(-1L),0L,(-1L)},{0L,0xEE6D1564L,(-1L),(-3L),0x667BCFA5L,0x2C7FA26DL,1L,0L,1L},{1L,0x8F6575D5L,(-1L),(-1L),0x8F6575D5L,1L,(-1L),0L,(-1L)},{0L,1L,(-1L),0x2C7FA26DL,0L,0x1C6BCEE3L,0x667BCFA5L,0x667BCFA5L,0x1C6BCEE3L},{(-1L),0x667BCFA5L,(-1L),0x667BCFA5L,(-1L),0L,(-1L),(-3L),(-1L)}}};
    uint32_t l_788[10][3][7] = {{{4294967295UL,4294967286UL,0x38E2D34EL,0xF6D837F4L,4294967295UL,0UL,0UL},{0UL,0x8353642DL,0xF0B47901L,9UL,0xDE85439BL,0UL,0x4DEB67E5L},{1UL,1UL,0x701C05BFL,9UL,0x910A95F4L,0xFB3FC007L,0UL}},{{0x9B7737D1L,1UL,0xC530F6E4L,0xF6D837F4L,0xAFA6C33BL,0x551355ADL,0x4406163AL},{0xD592CB8BL,0x38E2D34EL,8UL,4294967295UL,0x7ECB0C97L,4294967288UL,0xCD3200D7L},{0xE87BD38CL,0xDE85439BL,1UL,0x976C6550L,0xCD3200D7L,8UL,8UL}},{{4294967286UL,0x16086E17L,0xBBE617D9L,0x16086E17L,4294967286UL,4294967288UL,0x4DEB67E5L},{0xFB3FC007L,1UL,0UL,0x3AA880B9L,0x16086E17L,0x8E74F2EAL,1UL},{0x3AA880B9L,0xEEBEA8E5L,0x1C89938DL,0x7ECB0C97L,4294967286UL,1UL,0UL}},{{0x398A9D9FL,0xE28F619FL,4294967295UL,0x06167BEDL,0xB1FB1893L,0xB424FD4EL,0UL},{0x646E6370L,0x396E5532L,0x8E74F2EAL,4294967295UL,0xF64CF73BL,9UL,0xCD3200D7L},{4294967287UL,0xF64CF73BL,0x4406163AL,0xFB3FC007L,8UL,0x9B7737D1L,4294967295UL}},{{0xBBE617D9L,0xA593BA6CL,1UL,0xDF5CA00CL,4294967295UL,1UL,4294967288UL},{4294967295UL,8UL,0UL,0xA173F1A7L,4294967295UL,0x42ED18B4L,0xBAD447B2L},{0x7952E01AL,0xE28F619FL,0x42ED18B4L,0x976C6550L,4294967295UL,0x6C27E289L,0xF64CF73BL}},{{0x16086E17L,0xF7181825L,0xDF5CA00CL,0UL,4294967295UL,1UL,0x9B7737D1L},{0x396E5532L,4294967295UL,0UL,1UL,8UL,0x16086E17L,5UL},{2UL,4294967288UL,0xBBE617D9L,5UL,0xF64CF73BL,0xF6D837F4L,4294967286UL}},{{0x934461CEL,0xB1FB1893L,0xE8D93BF9L,0xE8D93BF9L,0xB1FB1893L,0x934461CEL,0xCC87EE8AL},{0x7952E01AL,0UL,0xF64CF73BL,1UL,4294967286UL,0x398A9D9FL,0x2D1381C9L},{0x3AA880B9L,0x16086E17L,0x8E74F2EAL,1UL,0xD592CB8BL,0xF7181825L,0x910A95F4L}},{{0x9B7737D1L,0UL,0xEEBEA8E5L,1UL,0x646E6370L,0x396E5532L,0x8E74F2EAL},{0x06167BEDL,0xB1FB1893L,0xB424FD4EL,0UL,0x8E74F2EAL,1UL,0UL},{4294967288UL,4294967288UL,4294967295UL,1UL,4294967295UL,0UL,0xCC87EE8AL}},{{0x398A9D9FL,4294967295UL,4294967295UL,0xE8EEF08CL,4294967288UL,0xF0B47901L,0x934461CEL},{0x4DEB67E5L,0xF7181825L,1UL,0x7ECB0C97L,0xDF5CA00CL,0x8353642DL,0xF7181825L},{1UL,0xE28F619FL,0xEEBEA8E5L,0xFB3FC007L,4294967295UL,0x8353642DL,0UL}},{{1UL,8UL,4294967293UL,4294967295UL,0xF64CF73BL,0xF0B47901L,0xA593BA6CL},{0xFB3FC007L,0xA593BA6CL,0x4406163AL,2UL,0UL,0UL,0xBAD447B2L},{0xBBE617D9L,0xF64CF73BL,4294967288UL,0xF0B47901L,9UL,1UL,0xD592CB8BL}}};
    uint32_t l_812[4][6] = {{1UL,0x7A956B6CL,1UL,0x7A956B6CL,1UL,0x7A956B6CL},{0x546CACBDL,0x7A956B6CL,0x546CACBDL,0x7A956B6CL,0x546CACBDL,0x7A956B6CL},{1UL,0x7A956B6CL,1UL,0x7A956B6CL,1UL,0x7A956B6CL},{0x546CACBDL,0x7A956B6CL,0x546CACBDL,0x7A956B6CL,0x546CACBDL,0x7A956B6CL}};
    int8_t l_822 = 0L;
    int64_t ***l_823 = &g_805;
    int8_t l_854 = 0x1DL;
    int64_t l_862[6][9][4] = {{{0xE7C5DC7050034895LL,(-5L),0L,0x26A64633ABB0AF82LL},{(-4L),1L,(-1L),(-5L)},{(-1L),0xE79B004C1587AB20LL,(-1L),1L},{(-4L),0xEF4098D3B58977D4LL,0x8745CB23E2ACBE97LL,9L},{0x90ACD294480113D4LL,(-6L),0x03D7A4A6D5CD06F5LL,0L},{0x03D7A4A6D5CD06F5LL,0L,1L,0L},{0xE743C36174A9E732LL,0L,0xE79B004C1587AB20LL,8L},{0xE0B60085E999D3D3LL,0x5129C5801304E114LL,0xE7C5DC7050034895LL,(-4L)},{0x6AC0AB3F6435C17CLL,0xE7C5DC7050034895LL,0L,0x6B46A59AC40FFDB2LL}},{{8L,9L,9L,0x26A64633ABB0AF82LL},{0x8745CB23E2ACBE97LL,0x5185998B0F9025BBLL,0xE743C36174A9E732LL,3L},{0xC898892ABF844D04LL,0xEC717A66B54152B4LL,0L,0xE7C5DC7050034895LL},{0x51638B59585C4167LL,0xE67969C837BB6B7ALL,0xEF4098D3B58977D4LL,(-4L)},{0x5185998B0F9025BBLL,(-1L),9L,9L},{(-5L),(-5L),0x51638B59585C4167LL,0L},{0x5129C5801304E114LL,0xC898892ABF844D04LL,0x910EC29FC7257DC6LL,0x03D7A4A6D5CD06F5LL},{0xF6FD045ADBE8EFE8LL,0x13C962E1CCED6D2FLL,0x6AC0AB3F6435C17CLL,0x910EC29FC7257DC6LL},{0L,0x13C962E1CCED6D2FLL,4L,0x03D7A4A6D5CD06F5LL}},{{0x13C962E1CCED6D2FLL,0xC898892ABF844D04LL,0xD81D157516B1AA99LL,0L},{1L,(-5L),(-3L),9L},{(-1L),(-1L),0xEC717A66B54152B4LL,(-4L)},{4L,0xE67969C837BB6B7ALL,(-1L),0xE7C5DC7050034895LL},{0x0C211522551303F8LL,0xEC717A66B54152B4LL,7L,3L},{1L,0x5185998B0F9025BBLL,0x05D3243E8157B83BLL,0x26A64633ABB0AF82LL},{0L,9L,(-10L),0x6B46A59AC40FFDB2LL},{0x26A64633ABB0AF82LL,0xE7C5DC7050034895LL,(-4L),(-4L)},{0L,0x5129C5801304E114LL,0x6B46A59AC40FFDB2LL,8L}},{{2L,0L,0x90ACD294480113D4LL,0L},{0x7555E6D3B3D5165ALL,0L,1L,0L},{0x42BCD448B98AABF2LL,(-6L),0x5129C5801304E114LL,9L},{9L,0xE0B60085E999D3D3LL,0L,0x7555E6D3B3D5165ALL},{1L,1L,0x426BB727783D4E66LL,1L},{1L,(-4L),0L,1L},{9L,1L,0x5129C5801304E114LL,(-7L)},{0x42BCD448B98AABF2LL,0x7E8A61A88682428FLL,1L,(-10L)},{0x7555E6D3B3D5165ALL,0x910EC29FC7257DC6LL,0x90ACD294480113D4LL,1L}},{{2L,0x0C211522551303F8LL,0x6B46A59AC40FFDB2LL,0xEF4098D3B58977D4LL},{0L,0x7555E6D3B3D5165ALL,(-4L),0x6AC0AB3F6435C17CLL},{0x26A64633ABB0AF82LL,7L,(-10L),0x13C962E1CCED6D2FLL},{0L,0xEF4098D3B58977D4LL,0x05D3243E8157B83BLL,7L},{1L,0x51638B59585C4167LL,7L,1L},{0x0C211522551303F8LL,(-4L),(-1L),0x101547800640DFD1LL},{4L,0x42BCD448B98AABF2LL,0xEC717A66B54152B4LL,2L},{(-1L),(-3L),(-3L),(-1L)},{1L,0x03D7A4A6D5CD06F5LL,0xD81D157516B1AA99LL,0xE0B60085E999D3D3LL}},{{0x13C962E1CCED6D2FLL,7L,4L,0xE79B004C1587AB20LL},{0L,0x8745CB23E2ACBE97LL,0x6AC0AB3F6435C17CLL,0xE79B004C1587AB20LL},{0xF6FD045ADBE8EFE8LL,7L,0x910EC29FC7257DC6LL,0xE0B60085E999D3D3LL},{0x5129C5801304E114LL,0x03D7A4A6D5CD06F5LL,0x51638B59585C4167LL,(-1L)},{(-5L),(-3L),9L,2L},{0x5185998B0F9025BBLL,0x42BCD448B98AABF2LL,0xEF4098D3B58977D4LL,0x101547800640DFD1LL},{0x51638B59585C4167LL,0L,0x8745CB23E2ACBE97LL,(-4L)},{0x05D3243E8157B83BLL,0L,0x0C211522551303F8LL,0x6AC0AB3F6435C17CLL},{2L,0xE0B60085E999D3D3LL,(-4L),0xEC717A66B54152B4LL}}};
    int64_t ***l_900 = &g_805;
    int64_t ****l_899 = &l_900;
    int32_t l_938 = 0x8DB6C8E4L;
    uint32_t l_939 = 0x780CFD18L;
    int32_t *****l_955 = &g_166;
    int8_t l_958 = 0xEBL;
    uint32_t l_962 = 18446744073709551615UL;
    int32_t *****l_974 = &g_166;
    uint32_t l_1016 = 4UL;
    uint8_t l_1046 = 0UL;
    int8_t l_1070 = 0x89L;
    int32_t l_1072 = 0x79875344L;
    int32_t l_1104[6][8][5] = {{{0xB4CA048AL,0L,1L,0xBD3DE722L,0xE4F5D970L},{0x16E89D38L,4L,0xE4F5D970L,(-1L),0x1A89F128L},{0x03FE4F19L,0x16E89D38L,(-3L),0xB4CA048AL,0xC9DDD189L},{0xDB870E7EL,(-1L),0x1A89F128L,(-4L),1L},{0xDB870E7EL,5L,5L,0xDB870E7EL,0L},{0x03FE4F19L,0xBD3DE722L,0x5E83ADF1L,(-9L),0xCD0D65A5L},{0x16E89D38L,0x918949B3L,0xDB870E7EL,0xE4F5D970L,0xB4CA048AL},{0xB4CA048AL,0L,0L,(-9L),0xBD3DE722L}},{{0x5E83ADF1L,0xC9DDD189L,(-9L),0xDB870E7EL,(-1L)},{(-3L),0xB4CA048AL,0xC9DDD189L,(-4L),(-3L)},{5L,0xB4CA048AL,0x03FE4F19L,0xB4CA048AL,5L},{0xCD0D65A5L,0xC9DDD189L,(-1L),(-1L),0xD5093739L},{0x1712B4F4L,0L,(-3L),0xBD3DE722L,0L},{(-9L),0x918949B3L,0L,0xC9DDD189L,0xD5093739L},{0xF19A4602L,0xBD3DE722L,(-4L),(-1L),5L},{0xD5093739L,5L,(-1L),(-3L),(-3L)}},{{0xBD3DE722L,(-1L),(-1L),(-1L),(-1L)},{0xE4F5D970L,0x16E89D38L,(-4L),0x918949B3L,0xBD3DE722L},{0x918949B3L,4L,0L,(-3L),0xB4CA048AL},{(-1L),0L,(-3L),0x1712B4F4L,0xCD0D65A5L},{0x918949B3L,(-1L),(-1L),0x16E89D38L,0L},{0xE4F5D970L,0x5E83ADF1L,0x03FE4F19L,0x1A89F128L,1L},{0xBD3DE722L,0L,0xC9DDD189L,0x1A89F128L,0xC9DDD189L},{0xD5093739L,0xD5093739L,(-9L),0x16E89D38L,0x1A89F128L}},{{0xF19A4602L,(-4L),0L,0x1712B4F4L,0xE4F5D970L},{(-9L),0x1A89F128L,0xDB870E7EL,(-3L),(-1L)},{0x1712B4F4L,(-4L),0x5E83ADF1L,0x918949B3L,0xF19A4602L},{0xCD0D65A5L,0xD5093739L,5L,(-1L),(-3L)},{5L,0L,0x1A89F128L,(-3L),(-3L)},{(-3L),0x5E83ADF1L,(-3L),(-1L),0xF19A4602L},{0x5E83ADF1L,(-1L),0xE4F5D970L,0xC9DDD189L,(-1L)},{0xB4CA048AL,0L,1L,0xBD3DE722L,0xE4F5D970L}},{{0x16E89D38L,4L,0xE4F5D970L,(-1L),0x1A89F128L},{0x03FE4F19L,0x16E89D38L,(-3L),0xB4CA048AL,0xC9DDD189L},{0xDB870E7EL,(-1L),0x1A89F128L,(-4L),1L},{0xDB870E7EL,5L,5L,0xDB870E7EL,0L},{0L,0xB4CA048AL,0xDB870E7EL,0xD5093739L,(-4L)},{0xF19A4602L,0x1A89F128L,5L,0L,(-1L)},{(-1L),(-1L),0x918949B3L,0xD5093739L,0xB4CA048AL},{0xDB870E7EL,0xCD0D65A5L,0xD5093739L,5L,(-1L)}},{{0x1712B4F4L,(-1L),0xCD0D65A5L,(-3L),0xE4F5D970L},{4L,(-1L),0L,(-1L),4L},{(-4L),0xCD0D65A5L,(-1L),0xBD3DE722L,0x6C27FB01L},{(-1L),(-1L),1L,0xB4CA048AL,0L},{0xD5093739L,0x1A89F128L,0x5E83ADF1L,0xCD0D65A5L,0x6C27FB01L},{(-9L),0xB4CA048AL,(-3L),0L,4L},{0x6C27FB01L,4L,0xC9DDD189L,1L,0xE4F5D970L},{0xB4CA048AL,(-1L),0xC9DDD189L,0xC9DDD189L,(-1L)}}};
    int16_t l_1110 = (-4L);
    uint8_t l_1126 = 0xC5L;
    uint32_t l_1137 = 0x7C6CEDC2L;
    int16_t l_1151 = 0xB382L;
    int64_t *****l_1156 = &l_899;
    uint32_t *l_1158 = &l_1016;
    uint32_t **l_1157 = &l_1158;
    uint32_t ***l_1159 = &g_959;
    uint32_t l_1160 = 4294967295UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_2[i][j] = 2L;
    }
    for (g_3 = 0; (g_3 <= 0); g_3 += 1)
    {
        uint32_t l_20[1][5][4] = {{{0UL,0x79A7B445L,0UL,0x79A7B445L},{0UL,0x79A7B445L,0UL,0x79A7B445L},{0UL,0x79A7B445L,0UL,0x79A7B445L},{0UL,0x79A7B445L,0UL,0x79A7B445L},{0UL,0x79A7B445L,0UL,0x79A7B445L}}};
        uint8_t *l_21[3];
        int32_t l_31[4][4] = {{1L,1L,5L,1L},{1L,0x261718BCL,0x261718BCL,1L},{0x261718BCL,1L,0x261718BCL,0x261718BCL},{1L,1L,5L,1L}};
        uint8_t **l_389 = &g_114;
        uint8_t **l_390 = &l_21[2];
        int32_t l_392[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        uint32_t *l_487 = &g_209;
        int64_t *l_677 = (void*)0;
        int64_t *l_678 = &g_109;
        uint8_t l_679 = 0x9CL;
        int32_t *l_681 = &l_392[1];
        int32_t l_693[7][1][9] = {{{0xDD709E06L,4L,7L,4L,0xDD709E06L,(-7L),0xD8835874L,0x4A59FC96L,0x5DBC0755L}},{{5L,(-6L),(-3L),(-9L),0xBC25568DL,(-9L),(-3L),(-6L),5L}},{{0xC174B36BL,0x38E64998L,0x51CA2F0FL,0xDD709E06L,0x4A59FC96L,(-7L),0x6DE86D87L,(-7L),0x4A59FC96L}},{{0x092118AAL,(-9L),(-9L),0x092118AAL,(-9L),0xF2AD5169L,0xF4E74B14L,5L,0xAA6C9BEAL}},{{0xC174B36BL,0x4A59FC96L,0x6DE86D87L,0x17816718L,0x17816718L,0x6DE86D87L,0x4A59FC96L,0xC174B36BL,7L}},{{5L,0x4D6457C2L,0xAA6C9BEAL,1L,(-9L),5L,5L,(-9L),1L}},{{0xDD709E06L,0xD8835874L,0xDD709E06L,0x38E64998L,0x4A59FC96L,0x17816718L,0x151C65D8L,7L,7L}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_21[i] = &g_22;
    }
    return l_1160;
}
static int64_t func_4(int16_t p_5, int8_t p_6)
{
    uint8_t *****l_646 = &g_230;
    int32_t l_656 = 0x47695993L;
    l_646 = &g_230;
    if (p_5)
    {
        int8_t l_659[1][7] = {{0xCDL,0xCDL,0xCDL,0xCDL,0xCDL,0xCDL,0xCDL}};
        uint16_t *l_668 = (void*)0;
        uint16_t *l_669 = (void*)0;
        uint16_t *l_670[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_671 = 0x85B16D08L;
        uint64_t *l_672 = &g_673;
        int32_t l_674 = 0xF2E867E5L;
        int64_t *l_675 = &g_109;
        int32_t *l_676 = &g_74;
        int i, j;
        (*l_676) = (safe_add_func_int64_t_s_s(((*l_675) = ((safe_lshift_func_uint16_t_u_u((((p_6 != (safe_mod_func_uint32_t_u_u(g_242[0][5], (safe_mul_func_int8_t_s_s((~249UL), (l_656 = l_656)))))) , (safe_mul_func_uint8_t_u_u((l_659[0][4] | 0x437AL), (safe_rshift_func_uint16_t_u_u(((l_674 = (safe_mod_func_uint64_t_u_u(((*l_672) = ((*g_376) = (l_671 = (((safe_lshift_func_uint16_t_u_s((g_240 = ((((l_656 < 4294967287UL) > ((safe_sub_func_uint64_t_u_u(l_659[0][4], 2L)) <= g_355[4][0][0])) >= 0xD2BC23DBDBAE1CE6LL) ^ l_656)), g_74)) || l_659[0][4]) == 65530UL)))), l_656))) <= p_6), l_659[0][4]))))) >= p_5), p_6)) == (-1L))), p_5));
    }
    else
    {
        return p_5;
    }
    return l_656;
}
static uint8_t func_11(uint32_t p_12, uint64_t p_13, uint16_t p_14, int32_t p_15, int32_t p_16)
{
    uint64_t l_508 = 0UL;
    int32_t l_512 = (-5L);
    int64_t *l_523 = &g_109;
    uint8_t ****l_549[5][9] = {{&g_112,&g_112,&g_112,&g_112,&g_112,&g_112,&g_112,&g_112,&g_112},{&g_112,&g_112,&g_112,&g_112,&g_112,&g_112,&g_112,&g_112,&g_112},{&g_112,&g_112,(void*)0,&g_112,&g_112,&g_112,&g_112,(void*)0,&g_112},{&g_112,&g_112,&g_112,&g_112,&g_112,(void*)0,(void*)0,&g_112,&g_112},{&g_112,&g_112,&g_112,(void*)0,&g_112,&g_112,&g_112,&g_112,&g_112}};
    int32_t l_551 = (-5L);
    int32_t **l_623 = &g_73[0];
    int i, j;
lbl_493:
    for (g_266 = 0; (g_266 >= (-7)); g_266 = safe_sub_func_int32_t_s_s(g_266, 1))
    {
        return p_16;
    }
    for (g_202 = 8; (g_202 == 5); g_202 = safe_sub_func_uint16_t_u_u(g_202, 3))
    {
        if (g_202)
            goto lbl_493;
        for (p_13 = 0; (p_13 <= 2); p_13 += 1)
        {
            int i;
            (*g_120) = &g_74;
        }
    }
    for (g_202 = 2; (g_202 >= 0); g_202 -= 1)
    {
        int32_t *l_494 = &g_74;
        int16_t l_518 = (-4L);
        int32_t ***l_519 = &g_120;
        int32_t ***l_521 = (void*)0;
        uint64_t *l_572 = &l_508;
        int i;
        (*l_494) = g_264[g_202];
        if ((*l_494))
            break;
        for (p_15 = 0; (p_15 <= 0); p_15 += 1)
        {
            int64_t *l_511 = &g_109;
            int32_t l_520[2];
            uint32_t l_522 = 4294967295UL;
            int32_t l_576 = 0xE2205FD0L;
            int32_t **l_599 = &l_494;
            uint8_t *l_621[9][4] = {{&g_22,&g_22,&g_22,&g_22},{&g_22,&g_22,&g_22,&g_22},{&g_22,&g_22,&g_22,&g_22},{&g_22,&g_22,&g_22,&g_22},{&g_22,&g_22,&g_22,&g_22},{&g_22,&g_22,&g_22,&g_22},{&g_22,&g_22,&g_22,&g_22},{&g_22,&g_22,&g_22,&g_22},{&g_22,&g_22,&g_22,&g_22}};
            int i, j;
            for (i = 0; i < 2; i++)
                l_520[i] = 0L;
        }
    }
    return l_512;
}
inline static int64_t func_25(uint64_t p_26, int32_t p_27, uint8_t * p_28)
{
    int32_t *l_488 = &g_3;
    (*g_120) = l_488;
    return g_22;
}
static uint32_t func_35(uint16_t p_36, uint8_t * p_37, int8_t p_38)
{
    uint64_t l_484[7] = {0x380635DDA8162FA7LL,0x380635DDA8162FA7LL,0x380635DDA8162FA7LL,0x380635DDA8162FA7LL,0x380635DDA8162FA7LL,0x380635DDA8162FA7LL,0x380635DDA8162FA7LL};
    int32_t l_486 = 0x1707049CL;
    int i;
    for (p_36 = 24; (p_36 > 17); --p_36)
    {
        int32_t *l_483[9][3][2] = {{{(void*)0,&g_74},{&g_74,(void*)0},{&g_3,&g_74}},{{&g_3,(void*)0},{&g_74,&g_74},{(void*)0,&g_3}},{{&g_74,&g_3},{(void*)0,&g_74},{&g_74,(void*)0}},{{&g_3,&g_74},{&g_3,(void*)0},{&g_74,&g_74}},{{(void*)0,&g_3},{&g_74,&g_3},{(void*)0,&g_74}},{{&g_74,(void*)0},{&g_3,&g_74},{&g_3,(void*)0}},{{&g_74,&g_74},{(void*)0,&g_3},{&g_74,&g_3}},{{(void*)0,&g_74},{&g_74,(void*)0},{&g_3,&g_74}},{{&g_3,(void*)0},{&g_74,&g_74},{(void*)0,&g_3}}};
        int32_t *l_485 = (void*)0;
        int i, j, k;
        l_484[1] = p_36;
        (*g_120) = l_485;
        l_486 = (0xA44675D09DC035A2LL != l_484[0]);
    }
    return g_388;
}
inline static uint16_t func_39(uint32_t p_40)
{
    int8_t l_405 = 0x13L;
    uint8_t ***l_416[3];
    int32_t l_417 = 0xDB5623DFL;
    int32_t ***l_421 = &g_120;
    int32_t l_431 = 1L;
    uint8_t l_458 = 0x7FL;
    int32_t *l_463 = &l_431;
    int i;
    for (i = 0; i < 3; i++)
        l_416[i] = &g_113;
    for (g_209 = (-2); (g_209 != 59); g_209 = safe_add_func_uint64_t_u_u(g_209, 1))
    {
        int32_t l_395 = 0xADE0BD54L;
        int32_t *l_402 = &g_388;
        int32_t **l_401 = &l_402;
        uint16_t l_412[1][8][6] = {{{4UL,65534UL,4UL,0xB786L,0xB786L,4UL},{0xE40CL,0xE40CL,0xB786L,0x35C3L,0xB786L,0xE40CL},{0xB786L,65534UL,0x35C3L,0x35C3L,65534UL,0xB786L},{0xE40CL,0xB786L,0x35C3L,0xB786L,0xE40CL,0xE40CL},{4UL,0xB786L,0xB786L,4UL,65534UL,4UL},{4UL,65534UL,4UL,0xB786L,0xB786L,4UL},{0xE40CL,0xE40CL,0xB786L,0x35C3L,0xB786L,0xE40CL},{0xB786L,65534UL,0x35C3L,0x35C3L,65534UL,0xB786L}}};
        int32_t *l_413 = &g_74;
        int i, j, k;
        l_395 = p_40;
        (*l_413) = (safe_mul_func_uint16_t_u_u(l_395, (safe_div_func_int64_t_s_s(((+((&g_388 != ((*l_401) = &g_388)) , (safe_rshift_func_int8_t_s_u(l_405, 4)))) | ((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((((l_395 != (((safe_mod_func_int16_t_s_s((l_405 > (&g_355[1][3][0] != (void*)0)), g_355[3][2][0])) || l_405) || g_74)) != 0UL) | g_3), p_40)), 0x16848BA5L)) ^ 5L)), l_412[0][0][3]))));
    }
    for (g_202 = 0; (g_202 <= 1); g_202 += 1)
    {
        int32_t l_419[9] = {0x7B2C7243L,0L,0L,0x7B2C7243L,0L,0L,0x7B2C7243L,0L,0L};
        int32_t l_432 = 0x70A77F8EL;
        uint16_t l_433 = 0xCBC5L;
        int i;
        for (g_109 = 1; (g_109 >= 0); g_109 -= 1)
        {
            int32_t *l_418 = &g_74;
            int32_t ***l_422 = &g_120;
            int32_t ****l_423 = (void*)0;
            int32_t ****l_424 = &l_422;
            int64_t l_434[10];
            uint8_t l_443[9];
            uint16_t *l_444[6][9][4] = {{{&g_240,&g_240,&g_240,&g_240},{&g_240,&g_240,&l_433,&l_433},{&g_240,&l_433,&g_240,&l_433},{&g_240,&l_433,&l_433,&l_433},{&l_433,&l_433,(void*)0,&l_433},{&l_433,&g_240,(void*)0,&g_240},{&l_433,&g_240,&l_433,(void*)0},{&g_240,&g_240,&g_240,&g_240},{&g_240,&g_240,&l_433,&l_433}},{{&g_240,&l_433,&g_240,&l_433},{&g_240,&l_433,&l_433,&l_433},{&l_433,&l_433,(void*)0,&l_433},{&l_433,&g_240,(void*)0,&g_240},{&l_433,&g_240,&l_433,(void*)0},{&g_240,&g_240,&g_240,&g_240},{&g_240,&g_240,&l_433,&l_433},{&g_240,&l_433,&g_240,&l_433},{&g_240,&l_433,&l_433,&l_433}},{{&l_433,&l_433,(void*)0,&l_433},{&l_433,&g_240,(void*)0,&g_240},{&l_433,&g_240,&l_433,(void*)0},{&g_240,&g_240,&g_240,&g_240},{&g_240,&g_240,&l_433,&l_433},{&g_240,&l_433,&g_240,&l_433},{&g_240,&l_433,&l_433,&l_433},{&l_433,&l_433,(void*)0,&l_433},{&l_433,&g_240,(void*)0,&g_240}},{{&l_433,&g_240,&l_433,(void*)0},{&g_240,&g_240,&g_240,&g_240},{&g_240,&g_240,&l_433,&l_433},{&g_240,&l_433,&g_240,&l_433},{&g_240,&l_433,&l_433,&l_433},{&l_433,&l_433,(void*)0,&l_433},{&l_433,&g_240,(void*)0,&g_240},{&l_433,&g_240,&l_433,(void*)0},{&g_240,&g_240,&g_240,&g_240}},{{&g_240,&g_240,&l_433,&l_433},{&g_240,&l_433,&g_240,&l_433},{&g_240,&l_433,&l_433,&l_433},{&l_433,&l_433,(void*)0,&l_433},{&l_433,&g_240,(void*)0,&g_240},{&l_433,&g_240,&l_433,(void*)0},{&g_240,&g_240,&g_240,&g_240},{&g_240,&g_240,&l_433,&l_433},{&g_240,&l_433,&g_240,&l_433}},{{&g_240,&l_433,&l_433,&l_433},{&l_433,&l_433,(void*)0,&l_433},{&l_433,&g_240,(void*)0,&g_240},{&g_240,&l_433,(void*)0,&l_433},{&g_240,&l_433,&l_433,&g_240},{&l_433,&g_240,&g_240,&l_433},{&l_433,&g_240,&l_433,(void*)0},{&g_240,&l_433,(void*)0,(void*)0},{&g_240,&g_240,&l_433,&l_433}}};
            int16_t *l_459 = (void*)0;
            int16_t *l_460 = (void*)0;
            int16_t *l_461 = &g_355[2][4][0];
            uint32_t *l_462 = &g_209;
            int i, j, k;
            for (i = 0; i < 10; i++)
                l_434[i] = (-4L);
            for (i = 0; i < 9; i++)
                l_443[i] = 255UL;
            (*g_120) = (*g_120);
            (*l_418) = (l_417 = (safe_add_func_uint16_t_u_u(g_242[g_109][g_109], ((void*)0 == l_416[2]))));
            l_434[1] = (l_433 = ((*l_418) = (((g_242[g_202][(g_202 + 5)] = ((p_40 || l_419[7]) < (((!p_40) , ((l_421 == ((*l_424) = (g_355[0][7][0] , l_422))) ^ (((safe_add_func_uint8_t_u_u((((p_40 , (safe_sub_func_uint8_t_u_u(((((safe_rshift_func_int16_t_s_u(l_431, (((l_417 = l_432) | 0x27L) , p_40))) || g_242[0][5]) < (**g_120)) > g_194), (***l_421)))) < 4294967289UL) == 0x8430CE59L), p_40)) < g_242[1][7]) ^ (-5L)))) & (-1L)))) | 0xB9B582A47882F886LL) | p_40)));
            l_419[7] = ((((safe_lshift_func_uint16_t_u_s((((p_40 < p_40) , ((*l_462) = (safe_lshift_func_uint16_t_u_u((((*l_461) = (l_432 <= ((safe_mul_func_uint16_t_u_u((g_240 = l_443[6]), p_40)) || (!(safe_sub_func_int8_t_s_s((0x5899L > (safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s(0x6EL, 250UL)), (safe_rshift_func_uint16_t_u_s((safe_div_func_uint32_t_u_u(((g_264[2] , 0x5DL) == l_458), 0x8345C4B8L)), 7)))), l_419[7]))), p_40)))))) == g_388), l_433)))) < 0x3C5497D5L), 12)) > 0x1BDBE2DBL) & 0UL) || 0xEE0BD0EFL);
        }
        l_463 = (**l_421);
        for (l_432 = 0; (l_432 >= 0); l_432 -= 1)
        {
            int64_t *l_470 = &g_109;
            int32_t l_480 = (-1L);
            if ((*l_463))
            {
                int32_t *l_464 = &l_417;
                for (g_388 = 0; (g_388 >= 0); g_388 -= 1)
                {
                    return g_264[0];
                }
                (*l_464) = (*l_463);
                if (p_40)
                    continue;
                (**l_421) = (**l_421);
            }
            else
            {
                int32_t *l_465[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                for (g_209 = 0; (g_209 <= 0); g_209 += 1)
                {
                    for (g_109 = 0; (g_109 <= 0); g_109 += 1)
                    {
                        return p_40;
                    }
                }
                (**l_421) = l_465[2];
                (*g_120) = l_465[3];
                for (g_388 = 0; (g_388 <= 0); g_388 += 1)
                {
                    int32_t *l_474[6];
                    int32_t l_477 = 0xF7745F72L;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_474[i] = &g_194;
                    l_480 = (((safe_rshift_func_int16_t_s_s((((safe_add_func_int16_t_s_s(((p_40 , (0x17395EC055DD7B72LL < ((void*)0 == l_470))) >= ((safe_sub_func_int8_t_s_s(((!((l_419[7] = p_40) , (0xA86DL & ((((((safe_div_func_int32_t_s_s(8L, (((l_477 && (safe_mul_func_uint8_t_u_u((l_419[5] != 18446744073709551615UL), l_477))) , 247UL) , (*l_463)))) != g_22) || l_477) , &g_376) == (void*)0) >= p_40)))) , g_242[0][5]), p_40)) <= g_264[1])), 0x5CB8L)) && p_40) , 0x1DEAL), 13)) && 6L) >= (*l_463));
                }
            }
            return g_264[1];
        }
    }
    return (***l_421);
}
static uint8_t * func_43(int8_t p_44, uint64_t p_45)
{
    uint32_t l_207 = 0x13DD6524L;
    int32_t l_211 = 0x24A24281L;
    uint8_t *l_270[10];
    uint8_t ****l_320 = &g_112;
    uint64_t **l_377 = &g_376;
    int32_t *l_385 = &l_211;
    int i;
    for (i = 0; i < 10; i++)
        l_270[i] = &g_22;
    for (p_45 = (-16); (p_45 >= 35); p_45 = safe_add_func_uint32_t_u_u(p_45, 8))
    {
        int16_t *l_201 = &g_202;
        uint32_t *l_208 = &g_209;
        int32_t l_210[2];
        int32_t l_295 = 0xE699EE68L;
        int32_t l_297 = 0x9D7D5A0AL;
        int i;
        for (i = 0; i < 2; i++)
            l_210[i] = (-9L);
    }
    return (***l_320);
}
inline static int16_t func_48(int32_t p_49, uint8_t p_50, uint8_t * p_51, uint8_t * p_52)
{
    uint32_t l_54[3];
    uint8_t *l_66[5];
    int64_t l_67 = 1L;
    uint8_t *l_69 = &g_22;
    uint8_t **l_68 = &l_69;
    uint8_t *l_116 = (void*)0;
    int32_t *l_154 = &g_74;
    int32_t l_184[8][9] = {{0x405A668AL,0x90D51287L,0xE84822C4L,0x405A668AL,1L,1L,0x405A668AL,0xE84822C4L,0x90D51287L},{0x405A668AL,0x90D51287L,0xE84822C4L,0x405A668AL,1L,1L,0x405A668AL,0xE84822C4L,0x90D51287L},{0x405A668AL,0x90D51287L,0xE84822C4L,0x405A668AL,1L,1L,0x405A668AL,0xE84822C4L,0x90D51287L},{0x405A668AL,0x90D51287L,0xE84822C4L,0x405A668AL,1L,1L,0x405A668AL,0xE84822C4L,0x90D51287L},{0x405A668AL,0x90D51287L,0xE84822C4L,0x405A668AL,1L,1L,0x405A668AL,0xE84822C4L,0x90D51287L},{0x405A668AL,0x90D51287L,0xE84822C4L,0x405A668AL,1L,1L,0x405A668AL,0xE84822C4L,0x90D51287L},{0x405A668AL,0x90D51287L,0xE84822C4L,0x405A668AL,1L,1L,0x405A668AL,0xE84822C4L,0x90D51287L},{0x405A668AL,0x90D51287L,0xE84822C4L,0x405A668AL,1L,1L,0x405A668AL,0xE84822C4L,0x90D51287L}};
    int8_t l_187 = 0x8FL;
    uint8_t ****l_188 = (void*)0;
    int64_t *l_189[2];
    int32_t l_190 = 0xE55B4935L;
    int32_t ***l_192 = &g_120;
    int32_t ****l_191 = &l_192;
    int32_t *l_193 = &g_194;
    int i, j;
    for (i = 0; i < 3; i++)
        l_54[i] = 3UL;
    for (i = 0; i < 5; i++)
        l_66[i] = &g_22;
    for (i = 0; i < 2; i++)
        l_189[i] = &g_109;
    p_49 = ((*l_154) = (((l_54[1] , &g_22) == (p_52 = ((*l_68) = (g_22 , func_55(l_54[2], func_61(l_66[2], l_67, &p_50, ((*l_68) = l_66[2])), l_54[1], l_67, l_116))))) <= g_22));
    for (g_135 = (-4); (g_135 > (-7)); g_135 = safe_sub_func_uint8_t_u_u(g_135, 1))
    {
        for (p_49 = (-20); (p_49 != 24); p_49++)
        {
            (*l_154) = p_50;
        }
    }
    p_49 = (safe_mod_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s((((((((*l_154) = ((((*g_112) != &p_52) , ((*l_193) = (((safe_sub_func_int16_t_s_s((+(*l_154)), (g_166 == (((((safe_add_func_int8_t_s_s((p_49 ^ 0xD9AAL), (~(l_190 = (safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_u(((g_109 = (l_184[5][2] = (safe_lshift_func_int8_t_s_u(((((safe_lshift_func_int8_t_s_s(((((safe_add_func_uint32_t_u_u((safe_add_func_int64_t_s_s(l_184[2][3], (safe_mul_func_uint16_t_u_u(0x92D2L, 1L)))), (-6L))) , 1L) ^ g_3) != 0x45631F00L), l_187)) <= p_49) , l_188) != (void*)0), 3)))) & p_50), 0)) , (-8L)), (*l_154))), 0xD68EL)))))) ^ (*l_154)) > g_3) , 18446744073709551615UL) , l_191)))) > (***l_192)) ^ 4L))) , (*l_154))) <= g_135) , 0x3CL) < g_22) , 0xABCBL) && (-10L)), 0UL)) | p_49), 0xA9ED696CL));
    return (***l_192);
}
static uint8_t * func_55(int32_t p_56, uint8_t * p_57, int8_t p_58, uint64_t p_59, uint8_t * p_60)
{
    int32_t **l_119 = &g_73[1];
    int32_t ***l_118[4][9] = {{&l_119,&l_119,&l_119,&l_119,&l_119,&l_119,&l_119,&l_119,&l_119},{&l_119,&l_119,&l_119,&l_119,&l_119,&l_119,&l_119,&l_119,&l_119},{&l_119,&l_119,&l_119,&l_119,&l_119,&l_119,&l_119,&l_119,&l_119},{&l_119,&l_119,&l_119,&l_119,&l_119,&l_119,&l_119,&l_119,&l_119}};
    int8_t *l_133 = (void*)0;
    int8_t *l_134 = &g_135;
    uint64_t l_136 = 0xCE2C80CF28406A83LL;
    uint8_t **l_137 = (void*)0;
    int32_t ****l_142 = &l_118[1][1];
    uint8_t ****l_147 = &g_112;
    uint8_t *****l_148 = &l_147;
    int32_t *l_149 = &g_74;
    int32_t l_150 = 0x0C632DA6L;
    uint16_t l_151 = 65535UL;
    int32_t l_152 = 0xE95A6F79L;
    uint8_t l_153[1];
    int i, j;
    for (i = 0; i < 1; i++)
        l_153[i] = 0x86L;
    l_136 = (((3L != (safe_unary_minus_func_int32_t_s((g_74 & ((&g_73[1] == (g_120 = &g_73[2])) ^ (g_109 > (((g_74 == (safe_mod_func_int32_t_s_s(p_59, p_56))) >= ((*l_134) = ((safe_lshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((p_59 == g_74), 9L)), 0x03L)), 1UL)), g_74)), (**l_119))) && 0x66L))) < (**l_119)))))))) <= 0xF23DFB53829EA9C7LL) <= 0x58279F83FA7B1138LL);
    l_137 = ((*g_112) = (*g_112));
    l_150 = ((safe_rshift_func_int16_t_s_s(((8UL & (safe_add_func_uint64_t_u_u(18446744073709551615UL, ((g_135 = (((*l_142) = &l_119) == (void*)0)) <= (((((p_58 || ((g_22 && ((&g_120 == (((safe_add_func_int32_t_s_s((safe_sub_func_int64_t_s_s((((*l_149) = ((((*l_148) = l_147) == &g_112) < g_3)) , g_3), g_22)), 0xC91DF687L)) & g_22) , &g_120)) , p_58)) && l_150)) & g_109) >= l_151) || g_74) || (*l_149)))))) | l_152), g_22)) ^ l_153[0]);
    return (*g_113);
}
static uint8_t * func_61(uint8_t * p_62, int32_t p_63, uint8_t * p_64, uint8_t * p_65)
{
    int32_t *l_72[1];
    int32_t **l_76 = (void*)0;
    uint8_t *l_85 = &g_22;
    int i;
    for (i = 0; i < 1; i++)
        l_72[i] = &g_3;
    for (p_63 = 0; (p_63 != 18); p_63 = safe_add_func_uint64_t_u_u(p_63, 6))
    {
        int16_t l_86 = (-1L);
        int32_t l_87 = (-1L);
        if (p_63)
        {
            return &g_22;
        }
        else
        {
            int32_t **l_75 = (void*)0;
            l_72[0] = (g_73[1] = l_72[0]);
        }
        if (((((p_63 , l_76) != &l_72[0]) , g_22) , (l_87 = (safe_div_func_int8_t_s_s((safe_add_func_int16_t_s_s(p_63, (((g_22 <= (((0x57L > (((safe_div_func_uint32_t_u_u((((safe_sub_func_uint64_t_u_u((((void*)0 == l_85) && p_63), (-9L))) && l_86) | l_86), p_63)) > (-1L)) > p_63)) == 0xBF6B3DAD933B1518LL) , p_63)) | p_63) | g_74))), p_63)))))
        {
            return p_64;
        }
        else
        {
            uint32_t l_107[1];
            int i;
            for (i = 0; i < 1; i++)
                l_107[i] = 7UL;
            for (l_87 = 0; (l_87 <= (-28)); l_87 = safe_sub_func_int8_t_s_s(l_87, 5))
            {
                uint64_t l_90 = 0xFCFF147090205405LL;
                int64_t *l_108 = &g_109;
                int32_t l_110 = 0L;
                int32_t l_111[6] = {0xF11966D8L,(-2L),(-2L),0xF11966D8L,(-2L),(-2L)};
                int i;
                l_90 = p_63;
                if ((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((+(0L == (~(safe_add_func_int8_t_s_s((safe_div_func_uint8_t_u_u((*p_65), 7UL)), ((safe_sub_func_int32_t_s_s(p_63, (safe_rshift_func_int16_t_s_s((((((*l_108) = (safe_add_func_uint32_t_u_u(((((void*)0 == &g_73[1]) > g_74) >= (((g_3 != g_22) && l_107[0]) , 0x76L)), 1UL))) != 9L) >= p_63) <= p_63), 9)))) < 0x868C93045D781F8ELL)))))) , 6L), 3)), l_110)))
                {
                    l_111[1] = p_63;
                }
                else
                {
                    uint8_t ****l_115 = &g_112;
                    (*l_115) = g_112;
                    return (*g_113);
                }
            }
            return l_85;
        }
    }
    return l_85;
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_3;
    csmith_sink_ = g_22;
    csmith_sink_ = g_74;
    csmith_sink_ = g_109;
    csmith_sink_ = g_135;
    csmith_sink_ = g_194;
    csmith_sink_ = g_202;
    csmith_sink_ = g_209;
    csmith_sink_ = g_240;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 9; j++)
        {
            csmith_sink_ = g_242[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        csmith_sink_ = g_264[i];
    }
    csmith_sink_ = g_266;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 1; k++)
            {
                csmith_sink_ = g_355[i][j][k];
            }
        }
    }
    csmith_sink_ = g_388;
    csmith_sink_ = g_632;
    csmith_sink_ = g_633;
    csmith_sink_ = g_673;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 8; k++)
            {
                csmith_sink_ = g_680[i][j][k];
            }
        }
    }
    csmith_sink_ = g_758;
    csmith_sink_ = g_998;
    csmith_sink_ = g_1121;
    platform_main_end(0,0);
    return 0;
}
