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
static long __undefined;
static uint64_t g_3 = 0xDD8D13034D00693ELL;
static int64_t g_18 = 3L;
static int64_t g_42 = 0L;
static int64_t *g_41 = &g_42;
static uint64_t g_61[4][3] = {{18446744073709551612UL,18446744073709551612UL,18446744073709551612UL},{18446744073709551612UL,18446744073709551606UL,18446744073709551612UL},{18446744073709551612UL,18446744073709551612UL,18446744073709551612UL},{18446744073709551612UL,18446744073709551606UL,18446744073709551612UL}};
static int32_t g_74 = 1L;
static int32_t g_76 = 0xE05BF5EFL;
static int16_t g_104 = 8L;
static int32_t g_108 = 0xE62ED8E9L;
static uint16_t g_135 = 0x8A5EL;
static uint32_t g_141 = 18446744073709551615UL;
static uint8_t g_144 = 0x31L;
static uint32_t g_166 = 5UL;
static int8_t g_187[3][9] = {{1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L}};
static uint64_t g_215[9][4][3] = {{{0x5171171D35FC118CLL,2UL,0xD6A9AA89525BE554LL},{0xC1D393908CA69266LL,0xF28CA52837081A23LL,0x7D469F3BFDC2BF5ELL},{0x7D469F3BFDC2BF5ELL,0xCD9FD2C490EA19DDLL,0xFEC59831632895B5LL},{0xA212EB4F3A628D86LL,0x9BEB6E18EC0D0173LL,0x5171171D35FC118CLL}},{{0xD6A9AA89525BE554LL,0xC1D393908CA69266LL,2UL},{1UL,1UL,18446744073709551606UL},{0xF28CA52837081A23LL,1UL,2UL},{0xCD9FD2C490EA19DDLL,0xC1D393908CA69266LL,1UL}},{{0x65A3C54BD25B4213LL,0x9BEB6E18EC0D0173LL,0x7D469F3BFDC2BF5ELL},{2UL,0xCD9FD2C490EA19DDLL,1UL},{0xBBA6016F2BD89C7BLL,2UL,2UL},{0xA78A7768BC73AE71LL,0xA212EB4F3A628D86LL,18446744073709551606UL}},{{0xA78A7768BC73AE71LL,18446744073709551606UL,2UL},{0xBBA6016F2BD89C7BLL,0xF28CA52837081A23LL,0x5171171D35FC118CLL},{2UL,0x65A3C54BD25B4213LL,0xFEC59831632895B5LL},{0x65A3C54BD25B4213LL,0xF28CA52837081A23LL,0xD6A9AA89525BE554LL}},{{0xCD9FD2C490EA19DDLL,18446744073709551606UL,0xCD9FD2C490EA19DDLL},{0xF28CA52837081A23LL,0xA212EB4F3A628D86LL,0xCD9FD2C490EA19DDLL},{1UL,2UL,0xD6A9AA89525BE554LL},{0xD6A9AA89525BE554LL,0xCD9FD2C490EA19DDLL,0xFEC59831632895B5LL}},{{0xA212EB4F3A628D86LL,0x9BEB6E18EC0D0173LL,0x5171171D35FC118CLL},{0xD6A9AA89525BE554LL,0xC1D393908CA69266LL,2UL},{1UL,1UL,18446744073709551606UL},{0xF28CA52837081A23LL,1UL,2UL}},{{0xCD9FD2C490EA19DDLL,0xC1D393908CA69266LL,1UL},{0x65A3C54BD25B4213LL,0x9BEB6E18EC0D0173LL,0x7D469F3BFDC2BF5ELL},{2UL,0xCD9FD2C490EA19DDLL,1UL},{0xBBA6016F2BD89C7BLL,2UL,2UL}},{{0xA78A7768BC73AE71LL,0xA212EB4F3A628D86LL,18446744073709551606UL},{0xA78A7768BC73AE71LL,18446744073709551606UL,2UL},{0xBBA6016F2BD89C7BLL,0xF28CA52837081A23LL,0x5171171D35FC118CLL},{2UL,0x65A3C54BD25B4213LL,0xFEC59831632895B5LL}},{{0x65A3C54BD25B4213LL,0xF28CA52837081A23LL,0xD6A9AA89525BE554LL},{0xCD9FD2C490EA19DDLL,18446744073709551606UL,0xCD9FD2C490EA19DDLL},{0xF28CA52837081A23LL,0xA212EB4F3A628D86LL,0xCD9FD2C490EA19DDLL},{1UL,2UL,0xD6A9AA89525BE554LL}}};
static uint8_t g_219 = 1UL;
static int32_t g_229 = 1L;
static uint8_t g_294[8] = {0UL,250UL,0UL,0UL,250UL,0UL,0UL,250UL};
static int64_t **g_297 = &g_41;
static int64_t ***g_296 = &g_297;
static uint32_t g_306 = 0x043B709FL;
static int64_t * const *g_332 = &g_41;
static int64_t * const **g_331 = &g_332;
static int64_t * const ***g_330 = &g_331;
static int64_t * const ****g_329[8] = {&g_330,(void*)0,(void*)0,&g_330,(void*)0,(void*)0,&g_330,(void*)0};
static uint64_t **g_333 = (void*)0;
static uint32_t g_360 = 0x274BB9F9L;
static int32_t g_361 = 1L;
static uint32_t g_366 = 1UL;
static uint16_t *g_420 = (void*)0;
static uint16_t ** const g_419 = &g_420;
static int32_t *g_445 = (void*)0;
static int32_t **g_444 = &g_445;
static uint8_t g_490 = 0UL;
static int32_t g_511 = 3L;
static int8_t g_512 = (-9L);
static uint32_t g_513[5] = {0x0C3C40BEL,0x0C3C40BEL,0x0C3C40BEL,0x0C3C40BEL,0x0C3C40BEL};
static int16_t g_516 = 0x2F93L;
static uint8_t g_517 = 0x33L;
static uint32_t g_529 = 1UL;
static int64_t g_533 = 0xED784760C996D737LL;
static uint8_t g_540 = 248UL;
static int32_t g_588[9][9] = {{7L,7L,7L,7L,7L,7L,7L,7L,7L},{0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL},{7L,7L,7L,7L,7L,7L,7L,7L,7L},{0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL},{7L,7L,7L,7L,7L,7L,7L,7L,7L},{0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL},{7L,7L,7L,7L,7L,7L,7L,7L,7L},{0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL},{7L,7L,7L,7L,7L,7L,7L,7L,7L}};
static int32_t g_622 = 0xB0124F78L;
static uint16_t ** const g_655 = &g_420;
static uint16_t ** const *g_654 = &g_655;
static uint8_t g_661 = 0x4BL;
static uint16_t g_737 = 0x228CL;
static int32_t *g_760 = &g_622;
static uint16_t **g_839 = &g_420;
static uint16_t **g_840[2][6][2] = {{{&g_420,&g_420},{&g_420,&g_420},{&g_420,(void*)0},{(void*)0,&g_420},{&g_420,&g_420},{&g_420,&g_420}},{{(void*)0,(void*)0},{&g_420,&g_420},{&g_420,&g_420},{&g_420,(void*)0},{(void*)0,&g_420},{&g_420,&g_420}}};
static uint16_t **g_841 = &g_420;
static int32_t ***g_851 = (void*)0;
static int32_t **** const g_850 = &g_851;
static int32_t **g_1029 = (void*)0;
static int32_t *** const g_1028 = &g_1029;
static int32_t *** const *g_1027 = &g_1028;
static uint16_t g_1094 = 0x4621L;
static int8_t g_1099 = 0x42L;
static int32_t ***g_1163 = &g_444;
static int32_t **** const g_1162 = &g_1163;
static int32_t **** const *g_1161 = &g_1162;
static const uint8_t g_1194[7][6][3] = {{{248UL,0x25L,248UL},{254UL,0x1EL,0xC8L},{1UL,0x25L,1UL},{254UL,4UL,0xC8L},{248UL,0x25L,248UL},{254UL,0x1EL,0xC8L}},{{1UL,0x25L,1UL},{254UL,4UL,0xC8L},{248UL,0x25L,248UL},{254UL,0x1EL,0xC8L},{1UL,0x25L,1UL},{254UL,4UL,0xC8L}},{{248UL,0x25L,248UL},{254UL,0x1EL,0xC8L},{1UL,0x25L,1UL},{254UL,4UL,0xC8L},{248UL,0x25L,248UL},{254UL,0x1EL,0xC8L}},{{1UL,0x25L,1UL},{254UL,4UL,0xC8L},{248UL,0x25L,248UL},{254UL,0x1EL,0xC8L},{1UL,0x25L,1UL},{254UL,4UL,0xC8L}},{{248UL,0x25L,248UL},{254UL,0x1EL,0xC8L},{1UL,0x25L,1UL},{254UL,4UL,0xC8L},{248UL,0x25L,248UL},{254UL,0x1EL,0xC8L}},{{1UL,0x25L,1UL},{254UL,4UL,0xC8L},{248UL,0x25L,248UL},{254UL,0x1EL,0xC8L},{1UL,0x25L,1UL},{254UL,4UL,0xC8L}},{{248UL,0x25L,248UL},{254UL,0x1EL,0xC8L},{1UL,0x25L,1UL},{254UL,4UL,0xC8L},{248UL,0x25L,248UL},{254UL,0x1EL,0xC8L}}};
static uint16_t g_1271 = 0xB6A9L;
static uint64_t g_1273 = 0x34D6610E5908C4A5LL;
static int8_t g_1340 = (-2L);
static int32_t ****g_1392 = &g_851;
static int32_t *****g_1391[8] = {(void*)0,&g_1392,(void*)0,&g_1392,(void*)0,&g_1392,(void*)0,&g_1392};
static uint8_t g_1421 = 0xB4L;
static int8_t *g_1429 = (void*)0;
static int8_t **g_1428 = &g_1429;
static uint32_t g_1458 = 0x36F78E21L;
static uint32_t *g_1489 = &g_360;
static uint32_t **g_1488[3] = {&g_1489,&g_1489,&g_1489};
static uint32_t ***g_1487[7] = {&g_1488[2],(void*)0,(void*)0,&g_1488[2],(void*)0,(void*)0,&g_1488[2]};
static int8_t g_1529 = (-1L);
static int8_t g_1536 = 0x30L;
static int64_t g_1573 = 9L;
static const int64_t g_1594 = 6L;
static const int64_t *g_1593 = &g_1594;
static const int64_t **g_1592 = &g_1593;
static const int64_t *** const g_1591 = &g_1592;
static const int64_t *** const *g_1590 = &g_1591;
static const uint8_t g_1655[1] = {0UL};
static int32_t g_1665 = (-4L);
static int16_t g_1676[4] = {0L,0L,0L,0L};
static int16_t **g_1721 = (void*)0;
static uint64_t func_1(void);
static uint64_t func_5(uint8_t p_6, int32_t p_7, uint32_t p_8, const uint16_t p_9);
static const uint16_t func_10(int64_t p_11, uint64_t p_12, uint32_t p_13, int8_t p_14);
static uint8_t func_23(int64_t * p_24, int64_t p_25, int64_t * p_26);
static int64_t * func_27(int64_t * p_28, uint16_t p_29, const int64_t * p_30);
static int64_t * func_31(uint32_t p_32, int16_t p_33, const uint32_t p_34, int64_t * p_35, uint32_t p_36);
static uint32_t func_37(int64_t * p_38, uint16_t p_39, const uint32_t p_40);
static int32_t func_43(int64_t * p_44, uint32_t p_45, int8_t p_46, int64_t * p_47, int64_t p_48);
static int64_t * func_49(int64_t * p_50, int64_t * p_51, uint32_t p_52, int16_t p_53);
static int64_t * func_54(uint64_t p_55, const uint32_t p_56, int64_t * p_57, uint16_t p_58);
static uint64_t func_1(void)
{
    uint64_t l_2[9] = {0x3198A8F93905C809LL,0x3198A8F93905C809LL,0x3198A8F93905C809LL,0x3198A8F93905C809LL,0x3198A8F93905C809LL,0x3198A8F93905C809LL,0x3198A8F93905C809LL,0x3198A8F93905C809LL,0x3198A8F93905C809LL};
    int32_t l_582[2];
    int64_t l_589 = 0x9F05023EBAF44911LL;
    int32_t l_620[9][4] = {{7L,(-7L),0x68318166L,(-7L)},{0x68318166L,(-7L),7L,5L},{(-7L),(-10L),0x4F717860L,0x68318166L},{0x7A093A2CL,0x86E3B2CBL,0x86E3B2CBL,0x7A093A2CL},{0x7A093A2CL,5L,0x4F717860L,0xFCC3A8E8L},{(-7L),0x7A093A2CL,7L,(-10L)},{0x68318166L,0x171559C0L,0x68318166L,(-10L)},{7L,0x7A093A2CL,(-7L),0xFCC3A8E8L},{0x4F717860L,5L,0x7A093A2CL,0x7A093A2CL}};
    uint64_t l_623 = 0UL;
    const uint32_t l_681 = 0x25D4395AL;
    int32_t ***l_682 = &g_444;
    int32_t *l_751 = &g_76;
    uint16_t **l_757[9] = {&g_420,&g_420,&g_420,&g_420,&g_420,&g_420,&g_420,&g_420,&g_420};
    uint16_t ***l_756[9][8] = {{(void*)0,(void*)0,&l_757[4],&l_757[6],&l_757[6],&l_757[6],&l_757[6],&l_757[4]},{(void*)0,(void*)0,&l_757[6],&l_757[6],&l_757[6],&l_757[4],(void*)0,&l_757[6]},{&l_757[0],&l_757[6],(void*)0,&l_757[0],&l_757[4],&l_757[0],(void*)0,&l_757[6]},{&l_757[6],&l_757[6],&l_757[4],&l_757[6],&l_757[6],(void*)0,&l_757[4],&l_757[4]},{&l_757[0],&l_757[4],&l_757[6],&l_757[6],&l_757[6],&l_757[6],&l_757[4],&l_757[0]},{&l_757[6],&l_757[6],&l_757[4],(void*)0,(void*)0,&l_757[6],(void*)0,&l_757[6]},{(void*)0,&l_757[6],(void*)0,&l_757[6],(void*)0,&l_757[6],(void*)0,(void*)0},{&l_757[0],&l_757[6],&l_757[6],&l_757[0],&l_757[4],&l_757[6],&l_757[6],&l_757[6]},{(void*)0,&l_757[4],&l_757[4],&l_757[4],&l_757[4],(void*)0,&l_757[6],&l_757[6]}};
    int32_t *l_875 = &l_620[4][0];
    int32_t l_991 = 0xCDD7FA4CL;
    uint8_t l_1006 = 0xB4L;
    int64_t l_1042 = 0x57EC9B933590F456LL;
    int16_t l_1047 = 1L;
    uint8_t l_1098 = 0x51L;
    int8_t l_1102[7][1][6] = {{{0xF4L,0xF4L,(-1L),0x70L,0xF4L,0x70L}},{{1L,0xF4L,1L,0x48L,(-1L),(-1L)}},{{0xD6L,1L,1L,0xD6L,0xF4L,0x70L}},{{0x70L,0xD6L,(-1L),0xD6L,0x70L,0x48L}},{{0xD6L,0x70L,0x48L,0x48L,0x70L,0xD6L}},{{1L,0xD6L,0xF4L,0x70L,0xF4L,0xD6L}},{{0xF4L,1L,0x48L,(-1L),(-1L),0x48L}}};
    uint32_t l_1156 = 0UL;
    int32_t *l_1171 = (void*)0;
    int32_t l_1189[3][7];
    uint8_t l_1202 = 0xD0L;
    uint64_t l_1265 = 0x196BF3305CD90299LL;
    int64_t l_1278[8][6] = {{0xA433B0D4C6B15991LL,0xA433B0D4C6B15991LL,0xA433B0D4C6B15991LL,0xA433B0D4C6B15991LL,0xA433B0D4C6B15991LL,0xA433B0D4C6B15991LL},{0xA433B0D4C6B15991LL,0xA433B0D4C6B15991LL,0xA433B0D4C6B15991LL,0xA433B0D4C6B15991LL,0xA433B0D4C6B15991LL,0xA433B0D4C6B15991LL},{0xA433B0D4C6B15991LL,0xA433B0D4C6B15991LL,0xA433B0D4C6B15991LL,0xA433B0D4C6B15991LL,0xA433B0D4C6B15991LL,0xA433B0D4C6B15991LL},{0xA433B0D4C6B15991LL,0xA433B0D4C6B15991LL,0xA433B0D4C6B15991LL,0xA433B0D4C6B15991LL,0xA433B0D4C6B15991LL,0xA433B0D4C6B15991LL},{0xA433B0D4C6B15991LL,0xA433B0D4C6B15991LL,0xA433B0D4C6B15991LL,0xA433B0D4C6B15991LL,0xA433B0D4C6B15991LL,0xA433B0D4C6B15991LL},{0xA433B0D4C6B15991LL,0xA433B0D4C6B15991LL,0xA433B0D4C6B15991LL,0xA433B0D4C6B15991LL,0xA433B0D4C6B15991LL,0xA433B0D4C6B15991LL},{0xA433B0D4C6B15991LL,0xA433B0D4C6B15991LL,0xA433B0D4C6B15991LL,0xA433B0D4C6B15991LL,0xA433B0D4C6B15991LL,0xA433B0D4C6B15991LL},{0xA433B0D4C6B15991LL,0xA433B0D4C6B15991LL,0xA433B0D4C6B15991LL,0xA433B0D4C6B15991LL,0xA433B0D4C6B15991LL,0xA433B0D4C6B15991LL}};
    int64_t **l_1291 = (void*)0;
    int32_t l_1344 = 0L;
    uint64_t l_1349 = 0x5461B7134C87DD14LL;
    uint64_t l_1419[7][9] = {{18446744073709551609UL,0UL,0UL,18446744073709551609UL,0UL,0UL,18446744073709551609UL,0UL,0UL},{18446744073709551609UL,0UL,0UL,18446744073709551609UL,0UL,0UL,18446744073709551609UL,0UL,0UL},{18446744073709551609UL,0UL,0UL,18446744073709551609UL,0UL,0UL,18446744073709551609UL,0UL,0UL},{18446744073709551609UL,0UL,0UL,18446744073709551609UL,0UL,0UL,18446744073709551609UL,0UL,0UL},{18446744073709551609UL,0UL,0UL,18446744073709551609UL,0UL,0UL,18446744073709551609UL,0UL,0UL},{18446744073709551609UL,0UL,0UL,18446744073709551609UL,0UL,0UL,18446744073709551609UL,0UL,0UL},{18446744073709551609UL,0UL,0UL,18446744073709551609UL,0UL,0UL,18446744073709551609UL,0UL,0UL}};
    int8_t l_1434 = 9L;
    int16_t l_1493 = (-2L);
    const int64_t *l_1589 = &g_42;
    const int64_t **l_1588 = &l_1589;
    const int64_t *** const l_1587 = &l_1588;
    const int64_t *** const *l_1586 = &l_1587;
    int8_t ***l_1614 = &g_1428;
    uint16_t l_1618 = 9UL;
    int64_t l_1658 = 9L;
    int32_t l_1659[2];
    int32_t l_1666 = 0x0A873CC4L;
    int64_t l_1677[10];
    int32_t l_1678 = (-1L);
    uint32_t l_1683[2];
    uint32_t l_1726[3];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_582[i] = 0x1E53B733L;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
            l_1189[i][j] = 0x3288C8DEL;
    }
    for (i = 0; i < 2; i++)
        l_1659[i] = 0x8051BFD0L;
    for (i = 0; i < 10; i++)
        l_1677[i] = (-9L);
    for (i = 0; i < 2; i++)
        l_1683[i] = 0x266A607BL;
    for (i = 0; i < 3; i++)
        l_1726[i] = 0xED5D79DAL;
    return g_135;
}
static uint64_t func_5(uint8_t p_6, int32_t p_7, uint32_t p_8, const uint16_t p_9)
{
    uint64_t *l_546[1];
    int32_t l_549 = 0x73879576L;
    int64_t ****l_553 = (void*)0;
    int64_t *****l_552 = &l_553;
    uint16_t *l_554 = &g_135;
    int32_t **l_555 = (void*)0;
    int i;
    for (i = 0; i < 1; i++)
        l_546[i] = &g_61[2][2];
    g_76 ^= (safe_mod_func_uint16_t_u_u((~(((void*)0 != l_546[0]) <= (safe_add_func_uint8_t_u_u((l_549 , 0x05L), ((g_294[7] , ((((safe_mul_func_uint16_t_u_u(((*l_554) = (0xC1771510854AA61CLL | (((void*)0 != l_546[0]) >= (((*l_552) = (void*)0) == (void*)0)))), p_8)) , l_555) != (void*)0) >= 0xDE35BB5CDEB02BB9LL)) > g_540))))), p_9));
    return g_306;
}
static const uint16_t func_10(int64_t p_11, uint64_t p_12, uint32_t p_13, int8_t p_14)
{
    int32_t l_535 = 3L;
    int32_t l_536 = 6L;
    int32_t *l_537 = (void*)0;
    int32_t *l_538 = &g_76;
    int32_t *l_539[3][7] = {{(void*)0,(void*)0,&l_536,(void*)0,(void*)0,(void*)0,(void*)0},{&g_76,&g_229,&g_76,(void*)0,(void*)0,&g_76,&g_229},{(void*)0,&g_229,&l_536,&l_536,&g_229,(void*)0,&g_229}};
    int i, j;
    ++g_540;
    (*g_444) = &l_536;
    return p_12;
}
static uint8_t func_23(int64_t * p_24, int64_t p_25, int64_t * p_26)
{
    int32_t l_534 = 0x4BF43E6FL;
    return l_534;
}
static int64_t * func_27(int64_t * p_28, uint16_t p_29, const int64_t * p_30)
{
    int64_t l_520 = 0x538749649901EBCELL;
    int32_t *l_521 = &g_108;
    int32_t *l_522 = &g_76;
    int32_t *l_523 = &g_108;
    int32_t l_524 = 0x046FB56CL;
    int32_t *l_525 = &g_108;
    int32_t *l_526 = &l_524;
    int32_t *l_527 = &g_229;
    int32_t *l_528[10][6][3] = {{{(void*)0,(void*)0,&l_524},{(void*)0,(void*)0,&l_524},{&l_524,(void*)0,&g_229},{&g_76,&g_76,(void*)0},{&l_524,(void*)0,(void*)0},{(void*)0,(void*)0,&l_524}},{{(void*)0,&g_76,&g_76},{&g_229,(void*)0,&l_524},{&l_524,(void*)0,(void*)0},{&l_524,(void*)0,(void*)0},{&g_229,&g_108,&g_229},{(void*)0,(void*)0,&l_524}},{{(void*)0,(void*)0,&l_524},{&l_524,(void*)0,&g_229},{&g_76,&g_76,(void*)0},{&l_524,(void*)0,(void*)0},{(void*)0,(void*)0,&l_524},{(void*)0,&g_76,&g_76}},{{&g_229,(void*)0,&l_524},{&l_524,(void*)0,(void*)0},{&l_524,(void*)0,(void*)0},{&g_229,&g_108,&g_229},{(void*)0,(void*)0,&l_524},{(void*)0,(void*)0,&l_524}},{{&l_524,(void*)0,&g_229},{&g_76,&g_76,(void*)0},{&l_524,(void*)0,(void*)0},{(void*)0,(void*)0,&l_524},{(void*)0,&g_76,&g_76},{(void*)0,&g_108,&l_524}},{{&g_229,&l_524,&g_108},{&g_229,(void*)0,&g_76},{(void*)0,&g_108,(void*)0},{&g_76,(void*)0,&g_229},{&g_108,&l_524,&g_229},{&l_524,&g_108,(void*)0}},{{&l_524,&l_524,&g_76},{&l_524,&g_76,&g_108},{&g_108,&g_76,&l_524},{&g_76,&l_524,&l_524},{(void*)0,&g_108,&l_524},{&g_229,&l_524,&g_108}},{{&g_229,(void*)0,&g_76},{(void*)0,&g_108,(void*)0},{&g_76,(void*)0,&g_229},{&g_108,&l_524,&g_229},{&l_524,&g_108,(void*)0},{&l_524,&l_524,&g_76}},{{&l_524,&g_76,&g_108},{&g_108,&g_76,&l_524},{&g_76,&l_524,&l_524},{(void*)0,&g_108,&l_524},{&g_229,&l_524,&g_108},{&g_229,(void*)0,&g_76}},{{(void*)0,&g_108,(void*)0},{&g_76,(void*)0,&g_229},{&g_108,&l_524,&g_229},{&l_524,&g_108,(void*)0},{&l_524,&l_524,&g_76},{&l_524,&g_76,&g_108}}};
    int i, j, k;
    g_529--;
    return (*g_297);
}
static int64_t * func_31(uint32_t p_32, int16_t p_33, const uint32_t p_34, int64_t * p_35, uint32_t p_36)
{
    int32_t *l_508 = (void*)0;
    int32_t l_509 = (-9L);
    int32_t *l_510[7][4] = {{&g_229,&g_76,&g_76,&g_229},{&g_76,&g_229,&g_76,&g_76},{&g_229,&g_229,&g_229,&g_229},{&g_229,&g_76,&g_76,&g_229},{&g_76,&g_229,&g_76,&g_76},{&g_229,&g_229,&g_229,&g_229},{&g_229,&g_76,&g_76,&g_229}};
    int i, j;
    ++g_513[0];
    g_517++;
    return (**g_296);
}
static uint32_t func_37(int64_t * p_38, uint16_t p_39, const uint32_t p_40)
{
    int16_t l_59 = 0x5FFFL;
    uint64_t *l_60 = &g_61[0][1];
    int32_t l_62[2][2] = {{0x632CAC24L,0x632CAC24L},{0x632CAC24L,0x632CAC24L}};
    int64_t **l_82 = (void*)0;
    int64_t *l_83[2][1];
    int32_t *l_228 = &g_229;
    const uint8_t l_243[2] = {0x59L,0x59L};
    int16_t **l_244 = (void*)0;
    uint16_t *l_256 = (void*)0;
    uint64_t * const l_262[2] = {&g_215[0][0][1],&g_215[0][0][1]};
    uint8_t *l_293 = &g_294[5];
    int64_t ** const *l_301[4][1][6] = {{{&g_297,&g_297,&g_297,&g_297,&g_297,&g_297}},{{&g_297,&g_297,&g_297,&g_297,&g_297,&g_297}},{{&g_297,&g_297,&g_297,&g_297,&g_297,&g_297}},{{&g_297,&g_297,&g_297,&g_297,&g_297,&g_297}}};
    int64_t ** const **l_300 = &l_301[2][0][4];
    int64_t ****l_379 = &g_296;
    int64_t **** const *l_378 = &l_379;
    int64_t l_407[10] = {0x6A17E192D74F2F84LL,0x5AD8708858D89D66LL,0x5AD8708858D89D66LL,0x6A17E192D74F2F84LL,0x466FC8F83AD853F6LL,0x6A17E192D74F2F84LL,0x5AD8708858D89D66LL,0x5AD8708858D89D66LL,0x6A17E192D74F2F84LL,0x466FC8F83AD853F6LL};
    int32_t **l_441 = &l_228;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_83[i][j] = (void*)0;
    }
    (*l_228) |= (((((((((func_43((g_41 = func_49((l_83[1][0] = func_54((l_62[1][1] |= ((*l_60) = l_59)), (((g_74 &= ((+(0x3BL != (l_59 , ((safe_sub_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(l_59, ((g_42 ^ (safe_div_func_uint64_t_u_u((safe_add_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((p_39 ^ g_3), ((0x7B06F8616691CFE0LL != (((l_59 , (*g_41)) > (-10L)) == l_59)) | l_59))), g_3)), p_39))) > 0xD884L))), 0x86L)) & l_59)))) ^ 1L)) && l_59) , 18446744073709551615UL), p_38, l_59)), &g_42, l_59, l_59)), l_59, p_39, p_38, g_3) | 1L) | p_39) >= g_3) <= g_3) , p_39) || 0xDCDEL) || g_108) , &g_42) == (void*)0);
    for (g_219 = 0; (g_219 > 5); g_219 = safe_add_func_uint32_t_u_u(g_219, 1))
    {
        int64_t **l_247 = &l_83[1][0];
        const int32_t l_258 = 0x549399D5L;
        int16_t *l_260 = &g_104;
        int16_t **l_259 = &l_260;
        uint64_t *l_261 = &g_3;
        uint8_t *l_292 = (void*)0;
        int32_t l_304 = 0xCEE8C25CL;
        int32_t l_365 = (-1L);
        int64_t *****l_383 = &l_379;
        int32_t **l_495 = &g_445;
        for (g_144 = 0; (g_144 <= 2); g_144 += 1)
        {
            int64_t ***l_245 = &l_82;
            uint16_t *l_255 = &g_135;
            uint16_t **l_254[1][9] = {{&l_255,&l_255,&l_255,&l_255,&l_255,&l_255,&l_255,&l_255,&l_255}};
            int32_t l_257 = (-2L);
            int64_t ***l_382 = (void*)0;
            int64_t **** const l_381 = &l_382;
            int64_t **** const *l_380 = &l_381;
            int16_t *l_414 = &l_59;
            uint8_t *l_482[6][9][4] = {{{&g_294[0],&g_144,(void*)0,&g_294[5]},{&g_294[5],&g_219,&g_294[5],(void*)0},{&g_294[5],&g_219,&g_144,&g_294[5]},{&g_219,&g_144,&g_294[5],&g_144},{&g_294[6],&g_144,&g_294[5],&g_144},{&g_294[5],&g_144,&g_219,&g_294[5]},{&g_294[5],&g_294[5],&g_294[6],&g_219},{&g_219,&g_294[5],&g_294[5],&g_144},{&g_144,&g_294[5],&g_144,&g_144}},{{&g_219,&g_294[1],&g_219,(void*)0},{&g_219,&g_294[0],&g_294[5],&g_144},{&g_294[5],&g_144,&g_294[5],&g_294[0]},{&g_294[5],&g_294[5],&g_294[5],(void*)0},{&g_294[5],&g_294[5],&g_294[5],&g_294[6]},{&g_219,&g_144,&g_219,&g_294[5]},{&g_219,&g_294[5],&g_144,&g_294[5]},{&g_144,&g_219,&g_294[5],&g_144},{&g_219,&g_219,&g_294[6],(void*)0}},{{&g_294[5],&g_219,&g_219,&g_294[1]},{&g_294[5],&g_144,&g_144,&g_294[5]},{&g_294[5],&g_219,&g_219,&g_219},{&g_294[1],(void*)0,&g_144,(void*)0},{&g_144,&g_219,&g_294[0],(void*)0},{&g_219,(void*)0,&g_219,&g_219},{&g_144,&g_219,&g_294[5],&g_294[5]},{&g_294[5],&g_144,&g_144,&g_294[1]},{&g_144,&g_219,&g_294[5],(void*)0}},{{&g_144,&g_219,&g_294[2],&g_144},{(void*)0,&g_219,&g_294[5],&g_294[5]},{(void*)0,&g_294[5],(void*)0,&g_294[5]},{&g_219,&g_144,&g_294[5],&g_294[6]},{&g_294[6],&g_294[5],&g_294[1],(void*)0},{&g_294[0],&g_294[5],&g_219,&g_294[0]},{&g_294[0],&g_144,&g_294[1],&g_144},{&g_294[6],&g_294[0],&g_294[5],(void*)0},{&g_219,&g_294[1],(void*)0,&g_144}},{{(void*)0,&g_294[5],&g_294[5],&g_144},{(void*)0,&g_294[5],&g_294[2],&g_219},{&g_144,&g_294[5],&g_294[5],&g_294[5]},{&g_144,&g_144,&g_144,&g_144},{&g_294[5],&g_294[5],&g_294[5],&g_144},{&g_144,&g_294[5],&g_219,&g_219},{&g_219,&g_294[1],&g_294[0],&g_219},{&g_144,&g_294[1],&g_144,&g_219},{&g_294[1],&g_294[5],&g_219,&g_144}},{{&g_294[5],&g_294[5],&g_144,&g_144},{&g_294[5],&g_144,&g_219,&g_294[5]},{&g_294[5],&g_294[5],&g_294[6],&g_219},{&g_219,&g_294[5],&g_294[5],&g_144},{&g_144,&g_294[5],&g_144,&g_144},{&g_219,&g_294[1],&g_219,(void*)0},{&g_219,&g_294[0],&g_294[5],&g_144},{&g_294[5],&g_294[2],&g_219,&g_144},{&g_294[0],&g_294[5],&g_219,&g_294[5]}}};
            uint8_t *l_484 = &g_294[6];
            int32_t ***l_496 = (void*)0;
            int32_t ***l_497 = (void*)0;
            int32_t ***l_498 = &l_441;
            int i, j, k;
        }
        if (p_40)
            continue;
    }
    return (*l_228);
}
static int32_t func_43(int64_t * p_44, uint32_t p_45, int8_t p_46, int64_t * p_47, int64_t p_48)
{
    int32_t *l_109 = &g_76;
    int32_t l_119 = 0L;
    uint32_t l_121[3];
    int16_t *l_124 = &g_104;
    int16_t *l_126[2][4] = {{(void*)0,&g_104,(void*)0,&g_104},{(void*)0,&g_104,(void*)0,&g_104}};
    int32_t *l_138 = &g_108;
    int32_t *l_139[10];
    int16_t l_140[2][4] = {{(-2L),(-3L),(-3L),(-2L)},{(-3L),(-2L),(-3L),(-3L)}};
    int32_t l_147 = 0x7C2C8185L;
    int i, j;
    for (i = 0; i < 3; i++)
        l_121[i] = 18446744073709551613UL;
    for (i = 0; i < 10; i++)
        l_139[i] = &l_119;
lbl_167:
    (*l_109) ^= g_74;
    for (g_74 = 21; (g_74 >= 17); --g_74)
    {
        int32_t *l_112 = &g_108;
        int32_t **l_113 = &l_112;
        int32_t *l_114 = &g_76;
        int32_t l_115 = 0L;
        int32_t *l_116 = &l_115;
        int32_t *l_117 = &l_115;
        int32_t *l_118[10][8][1] = {{{&g_108},{(void*)0},{&g_108},{(void*)0},{&g_108},{(void*)0},{&g_108},{(void*)0}},{{&g_108},{(void*)0},{&g_108},{(void*)0},{&g_108},{(void*)0},{&g_108},{(void*)0}},{{&g_108},{(void*)0},{&g_108},{(void*)0},{&g_108},{(void*)0},{&g_108},{(void*)0}},{{&g_108},{(void*)0},{&g_108},{(void*)0},{&g_108},{(void*)0},{&g_108},{(void*)0}},{{&g_108},{(void*)0},{&g_108},{(void*)0},{&g_108},{(void*)0},{&g_108},{(void*)0}},{{&g_108},{(void*)0},{&g_108},{(void*)0},{&g_108},{(void*)0},{&g_108},{(void*)0}},{{&g_108},{(void*)0},{&g_108},{(void*)0},{&g_108},{(void*)0},{&g_108},{(void*)0}},{{&g_108},{(void*)0},{&g_108},{(void*)0},{&g_108},{(void*)0},{&g_108},{(void*)0}},{{&g_108},{(void*)0},{&g_108},{(void*)0},{&g_108},{(void*)0},{&g_108},{(void*)0}},{{&g_108},{(void*)0},{&g_108},{(void*)0},{&g_108},{(void*)0},{&g_108},{(void*)0}}};
        int8_t l_120 = 4L;
        int16_t **l_125 = &l_124;
        uint64_t *l_136 = &g_61[3][0];
        int32_t **l_137 = &l_118[7][5][0];
        int i, j, k;
        (*l_113) = l_112;
        l_121[0]++;
        (*l_116) = (((*l_125) = l_124) == l_126[1][2]);
        (*l_137) = ((*l_113) = ((((*l_136) = (safe_div_func_int32_t_s_s((g_135 ^= ((((*p_44) = ((p_46 &= (((*l_109) , (*l_109)) == ((void*)0 == l_124))) != (safe_rshift_func_uint8_t_u_s(((safe_mul_func_uint16_t_u_u((*l_109), ((safe_mul_func_uint16_t_u_u(65535UL, (p_45 > (((-1L) ^ ((((**l_113) = (g_74 < g_42)) , p_48) != g_61[3][2])) || 4L)))) >= 3L))) , g_61[0][1]), 2)))) , &l_119) != &g_76)), g_61[0][0]))) >= g_74) , (void*)0));
    }
    ++g_141;
    for (g_74 = 1; (g_74 >= 0); g_74 -= 1)
    {
        uint64_t l_150 = 18446744073709551615UL;
        int8_t *l_186 = &g_187[1][6];
        uint16_t *l_209 = &g_135;
        int32_t l_210 = 6L;
        uint8_t l_211 = 250UL;
        uint32_t l_222 = 0x2A6C3B22L;
        int i;
        for (p_45 = 0; (p_45 <= 2); p_45 += 1)
        {
            int16_t l_148 = (-1L);
            int32_t l_149 = (-1L);
            const int32_t *l_161 = &l_147;
            const int32_t **l_160 = &l_161;
            for (l_119 = 1; (l_119 >= 0); l_119 -= 1)
            {
                g_144--;
            }
            --l_150;
            for (g_104 = 1; (g_104 >= 0); g_104 -= 1)
            {
                uint8_t *l_155 = &g_144;
                int i, j;
                if (((safe_mod_func_int64_t_s_s((l_121[p_45] | ((*l_155) = l_121[(g_74 + 1)])), (g_104 | (safe_lshift_func_int16_t_s_s(1L, 4))))) , (((g_76 <= (l_160 == &l_161)) ^ (g_166 = (safe_add_func_int16_t_s_s((l_140[g_104][(g_74 + 1)] = ((safe_add_func_uint64_t_u_u(((((*l_155) |= 0x5EL) & ((g_108 |= (1L >= 65535UL)) && g_42)) | 0x20L), (*l_109))) && 0x2512C824L)), g_76)))) & l_150)))
                {
                    g_108 |= ((*l_109) = 6L);
                    for (g_108 = 0; (g_108 <= 2); g_108 += 1)
                    {
                        (*l_160) = &l_147;
                        return p_45;
                    }
                    if (p_46)
                        goto lbl_167;
                }
                else
                {
                    (*l_138) &= (**l_160);
                    for (g_135 = 0; (g_135 <= 2); g_135 += 1)
                    {
                        (*l_138) = (-3L);
                        if (g_108)
                            break;
                        (*l_160) = &l_147;
                        if (p_45)
                            continue;
                    }
                }
                return (*l_109);
            }
            (*l_109) = (safe_mod_func_int8_t_s_s((*l_109), (safe_div_func_uint16_t_u_u(0x581DL, p_46))));
        }
        (*l_138) = ((((+(((*g_41) = (safe_add_func_int64_t_s_s((safe_rshift_func_int16_t_s_s((l_211 |= (safe_sub_func_uint16_t_u_u((safe_add_func_int32_t_s_s(l_121[(g_74 + 1)], g_3)), ((l_150 != p_48) , ((safe_mul_func_int16_t_s_s(((*l_124) = ((safe_rshift_func_int8_t_s_s(((*l_186) = (~g_144)), p_48)) || 248UL)), ((((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint64_t_u_u(((safe_sub_func_uint32_t_u_u((safe_div_func_int8_t_s_s((!((safe_div_func_uint32_t_u_u(g_144, (safe_add_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((*l_209) = (safe_div_func_int32_t_s_s((-1L), g_76))), l_150)), 250UL)))) | 0L)), 0xBCL)), p_45)) < l_210), g_61[0][1])), 13)), l_210)) < 0x54L) && 0x59D8L) == p_46))) < l_150))))), p_46)), 2UL))) <= p_48)) , 0x88362133L) < 0xD9249688L) , p_45);
        if ((safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s((*l_109))), g_135)))
        {
            int32_t **l_218 = &l_139[4];
            --g_215[0][0][1];
            (*l_218) = &l_119;
        }
        else
        {
            uint32_t l_225 = 0x2B33F4ABL;
            for (g_144 = 0; (g_144 <= 1); g_144 += 1)
            {
                --g_219;
                (*l_109) |= l_211;
                --l_222;
            }
            l_225++;
        }
        for (l_210 = 1; (l_210 >= 0); l_210 -= 1)
        {
            (*l_138) = ((void*)0 == &l_119);
        }
    }
    return g_3;
}
static int64_t * func_49(int64_t * p_50, int64_t * p_51, uint32_t p_52, int16_t p_53)
{
    uint8_t l_89 = 0UL;
    uint8_t *l_90 = (void*)0;
    uint8_t *l_91 = (void*)0;
    uint8_t *l_92 = &l_89;
    int32_t l_93 = 3L;
    int32_t *l_98[4] = {&g_76,&g_76,&g_76,&g_76};
    int32_t **l_99 = (void*)0;
    int32_t **l_100 = &l_98[2];
    int16_t *l_103 = &g_104;
    int8_t l_105 = (-5L);
    int32_t l_106 = (-5L);
    int32_t *l_107 = &g_108;
    int i;
    (*l_107) &= ((safe_add_func_int32_t_s_s((((safe_add_func_int32_t_s_s(((((safe_unary_minus_func_uint8_t_u((((*l_92) = l_89) | l_93))) ^ ((*l_103) = ((((safe_rshift_func_uint16_t_u_s(((safe_sub_func_uint32_t_u_u((((*l_100) = l_98[3]) != &g_76), (safe_rshift_func_uint8_t_u_u(((((void*)0 == &g_76) | ((g_61[0][1] ^ (0x7F0BBFFDL ^ g_61[0][0])) || p_52)) && p_53), g_61[3][0])))) && 0xBDL), p_52)) ^ g_76) || 1UL) != 0xDF4A203FL))) <= p_53) < 7L), g_42)) < 255UL) ^ l_105), l_106)) ^ 0x1825F2AAL);
    return p_50;
}
static int64_t * func_54(uint64_t p_55, const uint32_t p_56, int64_t * p_57, uint16_t p_58)
{
    int32_t *l_75 = &g_76;
    int32_t l_77 = 0xBE3E2CA5L;
    int32_t *l_78[1];
    uint32_t l_79 = 4294967292UL;
    int i;
    for (i = 0; i < 1; i++)
        l_78[i] = &g_76;
    --l_79;
    return p_57;
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_61[i][j], "g_61[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);
        }
    }
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_187[i][j], "g_187[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);
        }
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_215[i][j][k], "g_215[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);
            }
        }
    }
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_294[i], "g_294[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_306, "g_306", print_hash_value);
    transparent_crc(g_360, "g_360", print_hash_value);
    transparent_crc(g_361, "g_361", print_hash_value);
    transparent_crc(g_366, "g_366", print_hash_value);
    transparent_crc(g_490, "g_490", print_hash_value);
    transparent_crc(g_511, "g_511", print_hash_value);
    transparent_crc(g_512, "g_512", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_513[i], "g_513[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_516, "g_516", print_hash_value);
    transparent_crc(g_517, "g_517", print_hash_value);
    transparent_crc(g_529, "g_529", print_hash_value);
    transparent_crc(g_533, "g_533", print_hash_value);
    transparent_crc(g_540, "g_540", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_588[i][j], "g_588[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);
        }
    }
    transparent_crc(g_622, "g_622", print_hash_value);
    transparent_crc(g_661, "g_661", print_hash_value);
    transparent_crc(g_737, "g_737", print_hash_value);
    transparent_crc(g_1094, "g_1094", print_hash_value);
    transparent_crc(g_1099, "g_1099", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1194[i][j][k], "g_1194[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);
            }
        }
    }
    transparent_crc(g_1271, "g_1271", print_hash_value);
    transparent_crc(g_1273, "g_1273", print_hash_value);
    transparent_crc(g_1340, "g_1340", print_hash_value);
    transparent_crc(g_1421, "g_1421", print_hash_value);
    transparent_crc(g_1458, "g_1458", print_hash_value);
    transparent_crc(g_1529, "g_1529", print_hash_value);
    transparent_crc(g_1536, "g_1536", print_hash_value);
    transparent_crc(g_1573, "g_1573", print_hash_value);
    transparent_crc(g_1594, "g_1594", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1655[i], "g_1655[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_1665, "g_1665", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1676[i], "g_1676[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
