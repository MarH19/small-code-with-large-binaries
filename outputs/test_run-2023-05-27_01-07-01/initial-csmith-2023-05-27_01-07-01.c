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
static int32_t g_16 = 1;
static int32_t g_34 = 0xA7609FA8;
static uint32_t g_38 = 0x7B88CDF8;
static int16_t g_51 = 0xDE5A;
static int32_t *g_66 = &g_16;
static int32_t **g_65[2][8][9] = {{{&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66},{&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66},{&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66},{&g_66,&g_66,&g_66,&g_66,&g_66,(void*)0,(void*)0,&g_66,&g_66},{&g_66,&g_66,&g_66,(void*)0,&g_66,&g_66,(void*)0,&g_66,&g_66},{&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66},{(void*)0,(void*)0,&g_66,&g_66,(void*)0,(void*)0,&g_66,&g_66,&g_66},{(void*)0,&g_66,&g_66,(void*)0,&g_66,&g_66,&g_66,&g_66,&g_66}},{{&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66},{&g_66,&g_66,&g_66,&g_66,&g_66,(void*)0,&g_66,&g_66,(void*)0},{&g_66,&g_66,&g_66,(void*)0,(void*)0,&g_66,&g_66,(void*)0,(void*)0},{&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66},{&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66},{(void*)0,(void*)0,&g_66,&g_66,(void*)0,(void*)0,&g_66,&g_66,&g_66},{(void*)0,&g_66,&g_66,(void*)0,&g_66,&g_66,&g_66,&g_66,&g_66},{&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66}}};
static int8_t g_81 = 9;
static int16_t g_133 = 0x46DC;
static int16_t *g_132[8][5][6] = {{{&g_133,&g_133,(void*)0,&g_133,&g_133,&g_133},{&g_133,&g_133,(void*)0,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{(void*)0,&g_133,&g_133,&g_133,&g_133,&g_133},{&g_133,(void*)0,&g_133,&g_133,&g_133,&g_133}},{{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,(void*)0,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,(void*)0},{&g_133,&g_133,(void*)0,&g_133,&g_133,&g_133}},{{&g_133,&g_133,&g_133,&g_133,&g_133,(void*)0},{&g_133,(void*)0,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133}},{{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{(void*)0,&g_133,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133}},{{(void*)0,&g_133,&g_133,(void*)0,&g_133,&g_133},{&g_133,&g_133,&g_133,(void*)0,&g_133,&g_133},{&g_133,&g_133,(void*)0,(void*)0,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,(void*)0}},{{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,(void*)0,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,(void*)0,&g_133,&g_133}},{{&g_133,&g_133,&g_133,(void*)0,&g_133,&g_133},{&g_133,&g_133,(void*)0,&g_133,&g_133,&g_133},{(void*)0,&g_133,&g_133,&g_133,&g_133,(void*)0},{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{(void*)0,&g_133,(void*)0,&g_133,&g_133,&g_133}},{{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{(void*)0,&g_133,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133}}};
static int16_t **g_131[3] = {&g_132[1][0][3],&g_132[1][0][3],&g_132[1][0][3]};
static uint32_t *g_141 = &g_38;
static int32_t g_157[2][6] = {{0x685E78B0,0x685E78B0,0x685E78B0,0x685E78B0,0x685E78B0,0x685E78B0},{0x685E78B0,0x685E78B0,0x685E78B0,0x685E78B0,0x685E78B0,0x685E78B0}};
static uint32_t g_176 = 9U;
static uint32_t **g_183 = &g_141;
static uint32_t ***g_182[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int32_t *g_245 = &g_34;
static uint32_t *g_276 = &g_38;
static int16_t g_303 = (-1);
static int8_t g_305 = (-1);
static uint32_t ****g_320 = &g_182[3];
static uint16_t g_329 = 0x3FAA;
static uint16_t *g_328[6][9][4] = {{{&g_329,&g_329,&g_329,(void*)0},{&g_329,&g_329,&g_329,&g_329},{&g_329,&g_329,&g_329,&g_329},{(void*)0,&g_329,&g_329,&g_329},{&g_329,&g_329,&g_329,(void*)0},{&g_329,&g_329,&g_329,(void*)0},{&g_329,&g_329,&g_329,&g_329},{&g_329,&g_329,&g_329,(void*)0},{&g_329,&g_329,&g_329,(void*)0}},{{&g_329,&g_329,(void*)0,&g_329},{(void*)0,&g_329,(void*)0,&g_329},{(void*)0,&g_329,&g_329,(void*)0},{&g_329,&g_329,&g_329,(void*)0},{&g_329,&g_329,(void*)0,&g_329},{(void*)0,&g_329,&g_329,&g_329},{&g_329,&g_329,(void*)0,&g_329},{(void*)0,(void*)0,(void*)0,&g_329},{&g_329,(void*)0,&g_329,&g_329}},{{&g_329,(void*)0,&g_329,&g_329},{(void*)0,&g_329,&g_329,&g_329},{&g_329,&g_329,&g_329,(void*)0},{&g_329,(void*)0,&g_329,&g_329},{&g_329,&g_329,(void*)0,&g_329},{&g_329,(void*)0,(void*)0,&g_329},{&g_329,&g_329,&g_329,&g_329},{(void*)0,&g_329,&g_329,&g_329},{&g_329,&g_329,&g_329,&g_329}},{{&g_329,&g_329,&g_329,(void*)0},{&g_329,(void*)0,&g_329,&g_329},{(void*)0,&g_329,&g_329,&g_329},{&g_329,&g_329,(void*)0,&g_329},{&g_329,&g_329,(void*)0,&g_329},{&g_329,&g_329,&g_329,(void*)0},{&g_329,&g_329,&g_329,&g_329},{&g_329,(void*)0,&g_329,&g_329},{(void*)0,&g_329,&g_329,&g_329}},{{&g_329,&g_329,&g_329,&g_329},{&g_329,&g_329,(void*)0,&g_329},{(void*)0,&g_329,(void*)0,&g_329},{&g_329,(void*)0,&g_329,(void*)0},{(void*)0,&g_329,(void*)0,&g_329},{&g_329,&g_329,&g_329,&g_329},{&g_329,&g_329,&g_329,&g_329},{(void*)0,&g_329,(void*)0,&g_329},{(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_329,(void*)0,&g_329,&g_329},{&g_329,&g_329,&g_329,(void*)0},{&g_329,&g_329,&g_329,(void*)0},{&g_329,&g_329,&g_329,&g_329},{&g_329,(void*)0,(void*)0,(void*)0},{&g_329,(void*)0,&g_329,&g_329},{&g_329,&g_329,&g_329,&g_329},{&g_329,&g_329,(void*)0,&g_329},{&g_329,&g_329,&g_329,&g_329}}};
static uint16_t **g_327 = &g_328[3][0][0];
static uint32_t g_351[6] = {0x7B752946,0x7B752946,0x7B752946,0x7B752946,0x7B752946,0x7B752946};
static uint32_t g_399 = 0xD37FD78E;
static uint16_t g_408 = 0U;
static int8_t g_465 = (-1);
static uint16_t g_490 = 0xD1B4;
static int16_t ***g_591 = &g_131[0];
static uint8_t g_636 = 255U;
static uint8_t *g_635 = &g_636;
static uint32_t g_742 = 2U;
static int32_t *g_781 = &g_34;
static uint32_t ***g_844 = (void*)0;
static uint16_t g_855[5][9] = {{1U,0x401F,0xB8F0,0xB8F0,0x401F,1U,0x401F,0xB8F0,0xB8F0},{0x82C7,0x82C7,1U,0xB8F0,1U,0x82C7,0x82C7,1U,0xB8F0},{5U,0x401F,5U,1U,1U,5U,0x401F,5U,1U},{5U,1U,1U,5U,0x401F,5U,1U,1U,5U},{0x82C7,1U,0xB8F0,1U,0x82C7,0x82C7,1U,0xB8F0,1U}};
static int32_t *g_876[2] = {&g_34,&g_34};
static int8_t *g_878 = (void*)0;
static int8_t func_1(void);
static int32_t * func_2(uint32_t p_3, uint32_t p_4, int32_t p_5);
static uint32_t func_6(int8_t p_7);
static uint8_t func_8(int16_t p_9, uint32_t p_10, uint32_t p_11, int32_t p_12);
static uint16_t func_14(uint16_t p_15);
static int32_t func_21(int32_t * p_22, uint32_t p_23, int32_t * p_24, uint32_t p_25, uint32_t p_26);
static int32_t * func_27(int32_t * p_28, int8_t p_29);
static int32_t * func_30(int32_t * p_31);
static int32_t func_39(int32_t ** p_40, uint32_t p_41, uint32_t p_42, int32_t * p_43);
static int32_t ** func_44(uint32_t p_45, int32_t * p_46);
static int8_t func_1(void)
{
    uint32_t l_13 = 0U;
    int16_t ***l_134 = &g_131[0];
    int32_t *l_135 = &g_16;
    int32_t **l_961 = &g_66;
    (*l_961) = func_2(((*g_276) = func_6((func_8(l_13, (func_14((g_16 != ((safe_lshift_func_int16_t_s_u(g_16, (safe_sub_func_uint32_t_u_u((func_21(func_27(&g_16, l_13), (~(safe_add_func_int8_t_s_s(0x86, (((safe_lshift_func_int16_t_s_u((g_131[0] == (void*)0), 3)) , &g_131[0]) == l_134)))), l_135, g_133, g_16) == (*l_135)), g_16)))) ^ g_133))) != l_13), g_636, g_157[1][5]) , (*l_135)))), l_13, l_13);
    return (*l_135);
}
static int32_t * func_2(uint32_t p_3, uint32_t p_4, int32_t p_5)
{
    int32_t *l_960 = &g_34;
    return l_960;
}
static uint32_t func_6(int8_t p_7)
{
    int32_t *l_957[3];
    int32_t **l_958 = (void*)0;
    int32_t **l_959 = &l_957[2];
    int i;
    for (i = 0; i < 3; i++)
        l_957[i] = &g_34;
    (*l_959) = l_957[2];
    return p_7;
}
static uint8_t func_8(int16_t p_9, uint32_t p_10, uint32_t p_11, int32_t p_12)
{
    uint8_t l_664 = 1U;
    uint32_t l_669 = 0x2E5A9F17;
    int32_t l_725 = 0x375EC06F;
    uint32_t ****l_812 = &g_182[3];
    uint16_t ***l_875 = (void*)0;
    uint16_t ****l_874 = &l_875;
    uint16_t *****l_873[1];
    uint32_t **l_923[4][4] = {{&g_276,&g_276,&g_276,&g_276},{&g_276,&g_276,&g_141,&g_276},{&g_276,&g_276,&g_141,&g_276},{&g_276,(void*)0,&g_276,&g_141}};
    uint8_t **l_929 = &g_635;
    int32_t l_937 = 6;
    int32_t *l_943[5][8] = {{&l_937,&g_34,&l_937,(void*)0,&g_34,&l_937,&l_725,(void*)0},{&l_725,(void*)0,(void*)0,&g_34,&g_34,&g_34,&g_34,(void*)0},{&l_725,&l_725,&l_937,&l_937,&g_34,(void*)0,&l_725,&g_34},{&l_937,&g_34,(void*)0,&l_937,&g_34,&l_937,(void*)0,&g_34},{&g_34,&l_725,(void*)0,&l_937,&l_725,(void*)0,&g_34,(void*)0}};
    uint8_t *l_945[1];
    uint32_t ****l_950 = &g_844;
    int i, j;
    for (i = 0; i < 1; i++)
        l_873[i] = &l_874;
    for (i = 0; i < 1; i++)
        l_945[i] = &l_664;
    if (l_664)
    {
        uint8_t l_675 = 0x71;
        int32_t l_687[9] = {0x7B5CCDDD,0xEB188278,0x7B5CCDDD,0xEB188278,0x7B5CCDDD,0xEB188278,0x7B5CCDDD,0xEB188278,0x7B5CCDDD};
        int8_t *l_702 = (void*)0;
        int32_t *l_724[4][3][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_687[5],&l_687[5],(void*)0,&l_687[5]}},{{(void*)0,(void*)0,&l_687[1],(void*)0,(void*)0},{&l_687[5],(void*)0,&l_687[5],&l_687[5],(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_687[5],&l_687[5],(void*)0,&l_687[5]}},{{(void*)0,(void*)0,&l_687[1],(void*)0,(void*)0},{&l_687[5],(void*)0,&l_687[5],&l_687[5],(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int16_t l_750[10][2][1] = {{{(-5)},{(-5)}},{{0},{0x67FD}},{{0},{(-5)}},{{(-5)},{0x67FD}},{{(-5)},{0x67FD}},{{(-5)},{(-5)}},{{0x67FD},{(-5)}},{{0x67FD},{(-5)}},{{(-5)},{0x67FD}},{{(-5)},{0x67FD}}};
        uint32_t l_816 = 0U;
        uint16_t **l_829 = &g_328[0][2][2];
        uint32_t **l_891 = &g_276;
        uint8_t l_907 = 0x1C;
        int32_t l_914 = 0;
        int16_t *l_921[2];
        int32_t **l_922 = &g_781;
        uint8_t **l_928 = &g_635;
        uint8_t ***l_930 = &l_928;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_921[i] = &l_750[7][0][0];
        for (g_408 = 0; (g_408 <= 10); g_408 = safe_add_func_uint8_t_u_u(g_408, 5))
        {
            int16_t l_674 = 0xD2AA;
            int8_t *l_682 = &g_81;
            uint32_t ****l_710[7] = {&g_182[3],&g_182[3],&g_182[3],&g_182[3],&g_182[3],&g_182[3],&g_182[3]};
            int32_t *l_723 = &g_16;
            uint16_t *l_734 = &g_329;
            int i;
        }
        for (g_742 = 0; (g_742 > 27); g_742 = safe_add_func_int16_t_s_s(g_742, 6))
        {
            uint16_t l_794 = 0U;
            int32_t l_830[10] = {(-9),(-9),1,1,1,(-9),(-9),1,1,1};
            int16_t l_845[2][10][3] = {{{0x0289,0xB349,(-1)},{(-6),(-2),(-2)},{(-8),(-1),(-10)},{(-6),0x5BCF,0x0EE5},{0x0289,(-1),(-10)},{(-7),0xB06D,(-2)},{1,(-1),(-1)},{0xF4D2,0x5BCF,0xD92F},{1,(-1),0x8ABE},{(-7),(-2),0xD92F}},{{0x0289,0xB349,(-1)},{(-6),(-2),(-2)},{(-8),(-1),(-10)},{(-6),0x5BCF,0x0EE5},{0x0289,(-1),(-10)},{(-7),0xB06D,(-2)},{1,(-1),(-1)},{0xF4D2,0x5BCF,0xD92F},{1,(-1),0x8ABE},{(-7),(-2),0xD92F}}};
            int32_t l_895 = 0x362A482E;
            int32_t *l_896 = &l_687[7];
            int i, j, k;
            for (g_399 = 21; (g_399 <= 58); g_399++)
            {
                uint16_t **l_798[3];
                int32_t l_799[2][4][6] = {{{(-1),(-2),(-2),(-1),0x68400F9B,3},{2,(-2),0x68400F9B,2,0x68400F9B,(-2)},{0xD1BF5601,(-2),3,0xD1BF5601,0x68400F9B,0x68400F9B},{(-1),(-2),(-2),(-1),0x68400F9B,3}},{{2,(-2),0x68400F9B,2,0x68400F9B,(-2)},{0xD1BF5601,(-2),3,0xD1BF5601,0x68400F9B,0x68400F9B},{(-1),(-2),(-2),(-1),0x68400F9B,3},{2,(-2),0x68400F9B,2,0x68400F9B,(-2)}}};
                uint32_t ****l_815[1];
                uint16_t ***l_872 = &l_798[2];
                uint16_t ****l_871[5];
                uint16_t *****l_870[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                uint8_t **l_879 = &g_635;
                uint8_t l_887 = 0xE2;
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_798[i] = &g_328[2][1][0];
                for (i = 0; i < 1; i++)
                    l_815[i] = &g_182[3];
                for (i = 0; i < 5; i++)
                    l_871[i] = &l_872;
            }
        }
        (*l_922) = ((((0x5832 >= (safe_div_func_uint8_t_u_u((l_664 <= ((l_669 , 0x4C) > (safe_sub_func_int16_t_s_s((l_914 & p_9), (0x58 <= ((l_725 = ((safe_lshift_func_int16_t_s_s((l_669 <= (((safe_div_func_int32_t_s_s((safe_add_func_int32_t_s_s(0x9B942D73, 0xBFB7254D)), l_725)) != 4294967295U) & 8U)), 6)) && 9U)) , 0x66)))))), p_9))) == p_10) <= 255U) , (void*)0);
        if (((l_937 = (l_923[1][3] == ((l_725 = (((safe_lshift_func_uint8_t_u_u(((p_12 >= (safe_lshift_func_int8_t_s_u(p_12, ((0x8681A4E2 ^ ((&g_635 != ((*l_930) = (l_929 = l_928))) && (0x62EB48C9 || ((*g_276) = ((((((0 & ((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s((((((&g_131[1] != (void*)0) , 3) , p_11) == 0x0129D367) || 1), (*g_635))), l_669)), 0)) > l_725)) != p_10) ^ l_669) != p_10) , p_9) == p_11))))) ^ p_12)))) != 0x7B), 0)) || 0x9B) >= p_12)) , l_891))) , l_669))
        {
            int16_t l_941 = (-1);
            int32_t **l_942[1];
            uint32_t *****l_951 = (void*)0;
            uint32_t *****l_952 = &l_812;
            uint32_t *****l_953 = &g_320;
            int i;
            for (i = 0; i < 1; i++)
                l_942[i] = &l_724[2][2][2];
            l_943[4][5] = ((*l_922) = &l_725);
            (*g_781) = (((1 ^ ((*g_66) || (&l_724[2][0][0] == ((!((((((p_12 <= p_9) && p_11) & (**l_922)) && (*g_635)) , (**g_591)) != (**g_591))) , l_942[0])))) && p_11) || 0xD5);
            (*l_922) = (*l_922);
        }
        else
        {
            return p_12;
        }
    }
    else
    {
        return p_11;
    }
    (*g_66) = p_11;
    return (*g_635);
}
static uint16_t func_14(uint16_t p_15)
{
    int16_t *l_172 = &g_51;
    int16_t *l_173 = &g_51;
    uint32_t l_175[1][6] = {{0xAE77BACE,0xAE77BACE,0xAE77BACE,0xAE77BACE,0xAE77BACE,0xAE77BACE}};
    int16_t l_177 = (-1);
    uint8_t *l_178[1];
    int32_t l_179 = 0xFA26938D;
    uint32_t ***l_185 = &g_183;
    int16_t **l_188 = (void*)0;
    uint32_t ****l_193 = &g_182[3];
    uint8_t l_198[5];
    int32_t l_233 = 0x0C404CD8;
    int32_t l_238 = 0x8E098A7A;
    int32_t *l_243 = &l_179;
    int32_t l_353 = (-1);
    uint16_t ***l_360 = &g_327;
    uint32_t l_362 = 0x4142C643;
    int16_t l_388 = 8;
    int32_t l_402 = 0x616EEC3F;
    uint32_t *****l_403 = &g_320;
    int32_t l_418 = 1;
    uint32_t *l_425[2][10][5] = {{{&l_175[0][0],&l_175[0][0],&g_38,&l_175[0][0],&l_175[0][0]},{&l_175[0][0],&g_399,&l_175[0][2],&g_176,&g_176},{(void*)0,&l_175[0][0],&g_38,(void*)0,&l_175[0][0]},{&g_399,(void*)0,&g_399,&g_399,&g_176},{&l_175[0][0],(void*)0,&l_175[0][1],(void*)0,&l_175[0][0]},{&g_176,&l_175[0][0],&l_175[0][0],&l_175[0][0],&g_176},{&g_399,&g_399,&l_175[0][3],&l_175[0][0],&l_175[0][0]},{&l_175[0][5],&g_176,(void*)0,&l_175[0][0],(void*)0},{&l_175[0][0],&g_176,&l_175[0][2],(void*)0,(void*)0},{&l_175[0][0],&g_399,&l_175[0][0],&l_175[0][5],(void*)0}},{{(void*)0,&l_175[0][1],&g_176,&l_175[0][1],(void*)0},{&g_399,&g_38,&g_38,&l_175[0][0],(void*)0},{(void*)0,&l_175[0][0],&l_175[0][0],&g_38,(void*)0},{&g_176,&l_175[0][5],&g_38,&g_38,(void*)0},{&l_175[0][0],&g_38,&g_176,&g_176,(void*)0},{(void*)0,&g_399,&g_176,&g_399,(void*)0},{&g_399,(void*)0,&l_175[0][0],&l_175[0][0],(void*)0},{&l_175[0][0],&l_175[0][0],&g_176,&g_399,(void*)0},{&l_175[0][0],&g_176,&l_175[0][2],(void*)0,(void*)0},{&l_175[0][0],&g_399,&l_175[0][0],&l_175[0][5],(void*)0}}};
    int32_t *l_500 = &g_16;
    uint32_t l_615 = 0xF85FED94;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_178[i] = (void*)0;
    for (i = 0; i < 5; i++)
        l_198[i] = 3U;
    if ((((g_38 >= (safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((g_157[1][5] == (safe_div_func_int32_t_s_s((g_16 || ((safe_mod_func_uint16_t_u_u((((safe_sub_func_int32_t_s_s(p_15, ((safe_lshift_func_uint8_t_u_u((l_179 = (p_15 >= (((((safe_add_func_int32_t_s_s((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((l_172 == (l_173 = l_172)), (g_176 = ((p_15 , (+p_15)) , l_175[0][0])))), g_34)), 0xC3CA42F7)) && 0x16DB) == l_175[0][5]) || p_15) <= l_177))), p_15)) , p_15))) ^ p_15) , p_15), p_15)) || 0xA2B03852)), g_16))), 2)), l_177))) || l_179) & g_38))
    {
        uint32_t l_181 = 0x1807826B;
        int16_t **l_187 = &g_132[6][3][5];
        int16_t ***l_190 = &l_188;
        uint32_t ****l_191[9] = {(void*)0,&l_185,&l_185,(void*)0,&l_185,&l_185,(void*)0,&l_185,&l_185};
        uint8_t *l_202 = &l_198[2];
        int32_t *l_242 = &l_179;
        uint16_t l_401 = 0xEF64;
        uint32_t *l_426[7][1];
        uint16_t *l_515 = &g_329;
        int32_t l_583 = (-10);
        int16_t l_584 = 1;
        uint16_t ***l_600 = &g_327;
        int16_t l_659 = 1;
        int i, j;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 1; j++)
                l_426[i][j] = &g_399;
        }
        if (((*g_66) = ((!l_181) & (*g_66))))
        {
            return g_157[1][5];
        }
        else
        {
            uint32_t ****l_184 = (void*)0;
            uint32_t ****l_186 = &g_182[4];
            int16_t ***l_189 = &g_131[0];
            (*l_186) = (l_185 = g_182[3]);
            (*l_189) = (l_188 = l_187);
        }
        (*l_190) = (void*)0;
        for (g_176 = 0; (g_176 <= 4); g_176 += 1)
        {
            uint32_t *****l_192[8][1] = {{&l_191[5]},{(void*)0},{&l_191[5]},{&l_191[5]},{(void*)0},{&l_191[5]},{&l_191[5]},{(void*)0}};
            uint8_t *l_201[5] = {&l_198[2],&l_198[2],&l_198[2],&l_198[2],&l_198[2]};
            uint16_t l_237[10] = {65535U,0xAB87,65535U,65535U,0xAB87,65535U,65535U,0xAB87,65535U,65535U};
            int32_t **l_248 = &l_243;
            int16_t l_278 = 0xCF4F;
            int32_t l_382 = (-5);
            int32_t l_383 = (-6);
            int16_t ***l_385 = &l_188;
            uint32_t *l_422 = &g_38;
            uint16_t *l_516 = (void*)0;
            uint16_t ***l_560 = &g_327;
            int i, j;
        }
        if ((((void*)0 == (**l_600)) ^ ((8 ^ ((*g_276) = 3U)) & ((((**l_403) != ((safe_lshift_func_uint16_t_u_s(p_15, 1)) , (*g_320))) || ((((p_15 | (+(safe_sub_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u((p_15 , p_15), p_15)) , (*l_242)), l_659)))) != (*g_245)) && p_15) > 65535U)) , (*l_242)))))
        {
            int32_t *l_660 = &l_238;
            int32_t **l_661 = &l_660;
            (*l_661) = l_660;
            for (g_81 = 0; (g_81 <= 8); g_81 += 1)
            {
                int8_t l_662 = 0;
                return l_662;
            }
            return p_15;
        }
        else
        {
            int32_t **l_663 = &l_242;
            (*l_663) = (void*)0;
        }
    }
    else
    {
        return p_15;
    }
    return p_15;
}
static int32_t func_21(int32_t * p_22, uint32_t p_23, int32_t * p_24, uint32_t p_25, uint32_t p_26)
{
    int16_t l_136 = (-1);
    int16_t ***l_137 = &g_131[0];
    uint32_t *l_139 = &g_38;
    uint32_t **l_138 = &l_139;
    int32_t *l_140 = &g_16;
    uint32_t *l_143[2];
    uint32_t **l_142 = &l_143[0];
    int16_t l_144 = 0x8226;
    int32_t l_149[5];
    int i;
    for (i = 0; i < 2; i++)
        l_143[i] = &g_38;
    for (i = 0; i < 5; i++)
        l_149[i] = 0xBD024A6B;
lbl_152:
    l_144 = (l_136 < (((((p_24 == p_22) , ((((p_26 , &g_131[0]) == l_137) >= (((*l_138) = &g_38) == ((*l_142) = (g_141 = &p_23)))) > (*l_140))) | (-8)) > (*l_140)) <= p_25));
    for (p_23 = 0; (p_23 == 36); p_23 = safe_add_func_int32_t_s_s(p_23, 1))
    {
        int32_t **l_150 = (void*)0;
        int32_t **l_151 = &g_66;
        l_149[2] = ((safe_mod_func_uint32_t_u_u(0x482E1C06, (*l_140))) || (*p_22));
        (*l_151) = p_22;
        if (p_23)
            goto lbl_152;
    }
    return (*l_140);
}
static int32_t * func_27(int32_t * p_28, int8_t p_29)
{
    int32_t *l_33 = &g_16;
    int32_t **l_32 = &l_33;
    uint16_t l_122 = 0U;
    int16_t *l_124 = &g_51;
    int16_t **l_123 = &l_124;
    int16_t ***l_125 = &l_123;
    (*l_32) = func_30(((*l_32) = p_28));
    for (p_29 = 0; p_29 < 2; p_29 += 1)
    {
        for (g_34 = 0; g_34 < 8; g_34 += 1)
        {
            for (g_38 = 0; g_38 < 9; g_38 += 1)
            {
                g_65[p_29][g_34][g_38] = &l_33;
            }
        }
    }
    l_122 = (safe_lshift_func_uint8_t_u_s((p_29 , 255U), 0));
    (*l_125) = l_123;
    return p_28;
}
static int32_t * func_30(int32_t * p_31)
{
    uint32_t l_59[8] = {4294967292U,0xD69B45C7,4294967292U,0xD69B45C7,4294967292U,0xD69B45C7,4294967292U,0xD69B45C7};
    int32_t l_67 = 1;
    int32_t l_82 = 0x1C1CA363;
    int32_t *l_96 = &g_34;
    int i;
    for (g_34 = (-27); (g_34 == 18); g_34++)
    {
        int32_t *l_37[7][3][10] = {{{(void*)0,(void*)0,&g_34,&g_16,(void*)0,(void*)0,&g_16,&g_34,&g_16,(void*)0},{(void*)0,(void*)0,&g_34,(void*)0,(void*)0,&g_34,(void*)0,&g_34,&g_16,(void*)0},{(void*)0,&g_16,&g_34,(void*)0,(void*)0,(void*)0,(void*)0,&g_34,&g_16,(void*)0}},{{(void*)0,(void*)0,&g_34,&g_16,(void*)0,(void*)0,&g_16,&g_34,&g_16,(void*)0},{(void*)0,(void*)0,&g_34,(void*)0,(void*)0,&g_34,(void*)0,&g_34,&g_16,(void*)0},{(void*)0,&g_16,&g_34,(void*)0,(void*)0,(void*)0,(void*)0,&g_34,&g_16,(void*)0}},{{(void*)0,(void*)0,&g_34,&g_16,(void*)0,(void*)0,&g_16,&g_34,&g_16,(void*)0},{(void*)0,(void*)0,&g_34,(void*)0,(void*)0,&g_34,(void*)0,&g_34,&g_16,(void*)0},{(void*)0,&g_16,&g_34,(void*)0,(void*)0,(void*)0,(void*)0,&g_34,&g_16,&g_16}},{{&g_16,&g_16,&g_34,&g_34,&g_16,&g_16,&g_34,&g_34,&g_34,&g_16},{&g_16,&g_16,&g_16,&g_16,&g_16,(void*)0,&g_16,&g_34,&g_16,&g_16},{&g_16,&g_34,&g_34,&g_16,&g_16,&g_16,&g_16,&g_34,&g_34,&g_16}},{{&g_16,&g_16,&g_34,&g_34,&g_16,&g_16,&g_34,&g_34,&g_34,&g_16},{&g_16,&g_16,&g_16,&g_16,&g_16,(void*)0,&g_16,&g_34,&g_16,&g_16},{&g_16,&g_34,&g_34,&g_16,&g_16,&g_16,&g_16,&g_34,&g_34,&g_16}},{{&g_16,&g_16,&g_34,&g_34,&g_16,&g_16,&g_34,&g_34,&g_34,&g_16},{&g_16,&g_16,&g_16,&g_16,&g_16,(void*)0,&g_16,&g_34,&g_16,&g_16},{&g_16,&g_34,&g_34,&g_16,&g_16,&g_16,&g_16,&g_34,&g_34,&g_16}},{{&g_16,&g_16,&g_34,&g_34,&g_16,&g_16,&g_34,&g_34,&g_34,&g_16},{&g_16,&g_16,&g_16,&g_16,&g_16,(void*)0,&g_16,&g_34,&g_16,&g_16},{&g_16,&g_34,&g_34,&g_16,&g_16,&g_16,&g_16,&g_34,&g_34,&g_16}}};
        int16_t *l_49 = (void*)0;
        int16_t *l_50 = &g_51;
        int32_t **l_54 = &l_37[5][0][2];
        uint32_t *l_62 = &l_59[5];
        int8_t *l_91 = &g_81;
        int32_t *l_94 = &g_16;
        int8_t l_108 = 0x95;
        int i, j, k;
        l_82 = (&p_31 != ((g_38 = (&g_34 == &g_34)) , (func_39(func_44(((*l_62) = (safe_mod_func_int16_t_s_s(((*l_50) = g_34), (safe_add_func_int8_t_s_s((((*l_54) = (void*)0) != ((0x5F > (safe_div_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u(l_59[2], ((safe_add_func_int8_t_s_s(((g_16 & g_34) <= 0x13), l_59[5])) ^ l_59[4]))) , l_59[2]), l_59[2]))) , (void*)0)), l_59[2]))))), p_31), l_67, g_34, &l_67) , &g_66)));
        if (((2U != (g_38 , (((*l_91) = (((((((-1) | (l_67 = ((g_81 ^ 0U) | 0x0E))) , ((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(((*l_50) = (safe_mod_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(0U, g_34)), (l_67 , l_67)))), 1)), l_67)) || g_51)) >= l_59[2]) , g_34) , &g_81) == l_91)) > g_34))) ^ g_38))
        {
            int32_t l_97 = 0x124D13D8;
            for (g_38 = 0; (g_38 <= 7); g_38 += 1)
            {
                int16_t l_93 = (-8);
                int32_t *l_95[9][8] = {{&l_67,(void*)0,&l_82,&l_82,(void*)0,&l_67,&l_82,(void*)0},{&g_34,&l_82,&l_82,&g_34,&l_82,&l_82,&g_34,&l_67},{(void*)0,&g_34,&g_16,&g_34,&g_34,&g_16,&g_34,(void*)0},{&l_67,&g_34,&l_82,&l_82,&g_34,&l_82,&l_82,&g_34},{(void*)0,&l_82,&l_67,(void*)0,&l_82,&l_82,(void*)0,&l_67},{&g_34,&g_34,&g_16,&g_34,(void*)0,&g_16,(void*)0,&g_34},{&l_67,&g_34,&l_67,&l_82,&g_34,&l_82,&l_82,&g_34},{&g_34,&l_82,&l_82,&g_34,&l_82,&l_67,&g_34,&l_67},{&g_34,(void*)0,&g_16,(void*)0,&g_34,&g_16,&l_67,&l_67}};
                int i, j;
                for (l_82 = 0; (l_82 <= 7); l_82 += 1)
                {
                    int32_t l_92 = 0;
                    (*l_54) = (((*l_91) = l_92) , ((0 && (l_93 = ((void*)0 == &g_66))) , l_94));
                    return p_31;
                }
                for (l_67 = 6; (l_67 >= 0); l_67 -= 1)
                {
                    (*l_54) = p_31;
                }
                for (g_51 = 0; g_51 < 2; g_51 += 1)
                {
                    for (l_67 = 0; l_67 < 8; l_67 += 1)
                    {
                        for (g_81 = 0; g_81 < 9; g_81 += 1)
                        {
                            g_65[g_51][l_67][g_81] = (void*)0;
                        }
                    }
                }
                for (l_67 = 0; (l_67 <= 1); l_67 += 1)
                {
                    for (g_51 = 7; (g_51 >= 1); g_51 -= 1)
                    {
                        int i, j, k;
                        (*l_54) = l_95[(l_67 + 2)][g_51];
                        (*l_54) = l_96;
                        l_97 = (l_82 = (-4));
                    }
                }
            }
            (*l_54) = p_31;
        }
        else
        {
            uint8_t l_103[3][2][9] = {{{0x4B,0xFC,0x1A,1U,0xFC,0x7B,0U,247U,0U},{0x4B,0x0C,1U,1U,0x0C,0x4B,0U,0xFC,8U}},{{0x4B,247U,0xD9,1U,247U,0xD5,0U,0x0C,255U},{0x4B,0xFC,0x1A,1U,0xFC,0x7B,0U,247U,0U}},{{0x4B,0x0C,1U,1U,0x0C,0x4B,0U,0xFC,8U},{0x4B,247U,0xD9,1U,247U,0xD5,0U,0x0C,255U}}};
            int32_t *l_115 = &l_82;
            int32_t l_116 = 3;
            int32_t l_117 = 0x2AABE801;
            int i, j, k;
            l_117 = (!(((safe_div_func_int32_t_s_s((((((((safe_lshift_func_int16_t_s_u((*l_96), l_103[0][0][6])) > (safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((((*l_50) = ((((*l_91) = ((l_108 && g_16) || (((safe_rshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s(0x6425F510, ((*l_115) = ((safe_div_func_int32_t_s_s((*l_94), (((((*l_54) = p_31) != p_31) , (((*l_94) >= l_103[0][0][6]) || g_51)) && g_34))) | (*l_96))))), l_116)) & g_34) , 2))) || (*l_115)) , (*l_96))) ^ (*l_94)) , (*l_96)), 1)), 0))) , g_51) , &g_66) == (void*)0) , 0xD51DFD2E) <= (*l_94)), g_16)) , (*l_96)) | (*l_96)));
        }
    }
    for (g_81 = 0; (g_81 <= 7); g_81 += 1)
    {
        return p_31;
    }
    (*l_96) = ((*l_96) >= 0U);
    return p_31;
}
static int32_t func_39(int32_t ** p_40, uint32_t p_41, uint32_t p_42, int32_t * p_43)
{
    uint32_t *l_72[10];
    int32_t l_79[2][7][8] = {{{0x37BAD6E3,0x415DBE4B,0x49029496,0x71D1BA05,0xF1D91A4A,1,0,0x42281945},{0x2B3A3C3A,0xBFC796D6,(-1),1,1,(-10),4,0xEB022B26},{2,0x2B46DFF6,0x37BAD6E3,0x4A05A9EE,0x415DBE4B,2,1,0},{(-5),(-1),0x743585F1,0x415DBE4B,0x3E3B667D,0x4084F7CB,(-1),0},{0x8B7CB4D6,9,(-10),(-8),0,0xD830BF04,0xD830BF04,0},{0x37BAD6E3,0,0,0x37BAD6E3,(-1),0x4D3E44E8,0,0x49029496},{(-1),0x6A37A547,0x992CE4CA,1,0xFBA24273,0x4A05A9EE,4,(-1)}},{{1,0x6A37A547,7,0x42281945,(-1),0x4D3E44E8,1,7},{0x64C66072,0,8,0x2B3A3C3A,1,0xD830BF04,0x49029496,1},{1,9,0x2B3A3C3A,0x743585F1,(-10),0x4084F7CB,0x64C66072,0},{7,(-1),0x49029496,0xF37D796E,(-1),2,(-1),(-1)},{0x4A05A9EE,0x2B46DFF6,0xEB022B26,(-1),0xF1D91A4A,(-10),0xF1D91A4A,(-1)},{0xF37D796E,0xBFC796D6,0xF37D796E,0,0x42281945,1,4,2},{(-5),0x415DBE4B,8,0x4A05A9EE,0x4084F7CB,(-5),0x42281945,(-1)}}};
    int8_t *l_80 = &g_81;
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_72[i] = &g_38;
    p_43 = p_43;
    (*p_43) = (0x8F497C31 | ((*g_66) != ((safe_rshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s(((*l_80) = ((l_72[4] != &g_38) , (safe_lshift_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_u(p_41, (g_38 || l_79[0][2][4]))) == ((void*)0 == &g_51)) , l_79[0][2][4]), 8)))), l_79[0][3][2])), p_42)) | g_38)));
    return (*p_43);
}
static int32_t ** func_44(uint32_t p_45, int32_t * p_46)
{
    int32_t *l_63 = &g_34;
    int32_t **l_64 = &l_63;
    (*l_64) = l_63;
    return g_65[1][4][8];
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_16;
    csmith_sink_ = g_34;
    csmith_sink_ = g_38;
    csmith_sink_ = g_51;
    csmith_sink_ = g_81;
    csmith_sink_ = g_133;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            csmith_sink_ = g_157[i][j];
        }
    }
    csmith_sink_ = g_176;
    csmith_sink_ = g_303;
    csmith_sink_ = g_305;
    csmith_sink_ = g_329;
    for (i = 0; i < 6; i++)
    {
        csmith_sink_ = g_351[i];
    }
    csmith_sink_ = g_399;
    csmith_sink_ = g_408;
    csmith_sink_ = g_465;
    csmith_sink_ = g_490;
    csmith_sink_ = g_636;
    csmith_sink_ = g_742;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            csmith_sink_ = g_855[i][j];
        }
    }
    platform_main_end(0,0);
    return 0;
}
