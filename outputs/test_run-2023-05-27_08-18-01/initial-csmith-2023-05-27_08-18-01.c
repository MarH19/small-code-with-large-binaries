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
static long __undefined;
static uint8_t g_8 = 7U;
static uint32_t g_93 = 0U;
static uint8_t g_110 = 1U;
static uint32_t g_131 = 0xB6C63C42;
static int32_t g_132 = 0;
static int32_t g_152 = 0xF7D83A0D;
static uint16_t g_153 = 0x679C;
static int32_t g_188 = 0x9708B61A;
static int32_t g_197 = 1;
static int32_t g_224 = 0x60422813;
static int32_t g_275 = 0;
static uint8_t g_281 = 1U;
static uint32_t g_288 = 0xFF553064;
static uint8_t g_332 = 0U;
static int8_t g_476 = 0;
static int16_t g_569 = (-1);
static int32_t g_583 = 0;
static int8_t g_585 = 0x14;
static uint16_t g_771 = 8U;
static int32_t g_837 = 4;
static uint32_t func_1(void);
static uint16_t func_2(uint32_t p_3, uint32_t p_4, uint16_t p_5, int16_t p_6, int16_t p_7);
static int8_t func_10(uint32_t p_11, uint32_t p_12);
static uint16_t func_13(uint32_t p_14, int16_t p_15, const uint8_t p_16, int32_t p_17);
static uint32_t func_18(uint32_t p_19, int16_t p_20, int32_t p_21, uint16_t p_22);
static int32_t func_23(uint8_t p_24, uint32_t p_25, int16_t p_26, uint8_t p_27, int32_t p_28);
static uint8_t func_31(int8_t p_32, int32_t p_33, uint16_t p_34, uint32_t p_35);
static uint32_t func_40(int32_t p_41);
static int16_t func_48(uint32_t p_49, int16_t p_50, int32_t p_51, int32_t p_52, int32_t p_53);
static int8_t func_56(const int32_t p_57, uint8_t p_58, uint8_t p_59, uint16_t p_60);
static uint32_t func_1(void)
{
    uint8_t l_9 = 0x63;
    int8_t l_783 = 0x9B;
    int32_t l_1073 = 0x17B7D161;
    int32_t l_1110 = 1;
    uint8_t l_1111 = 248U;
    l_1073 = ((func_2(g_8, l_9, (g_771 = ((0xCD >= func_10(g_8, (func_13(func_18((g_8 >= func_23((safe_sub_func_int32_t_s_s(l_9, (func_31((safe_rshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u(g_8, func_40((0x9A01 < (safe_unary_minus_func_int16_t_s(l_9)))))), 6)), g_8, g_8, g_8) < 0x7A))), g_8, g_8, l_9, l_9)), g_8, l_9, l_9), l_9, l_9, l_9) , g_332))) <= g_771)), l_783, g_8) | l_783) == l_9);
    for (g_288 = (-9); (g_288 < 35); g_288 = safe_add_func_uint16_t_u_u(g_288, 4))
    {
        int32_t l_1076 = 2;
        int32_t l_1085 = 1;
        uint8_t l_1093 = 252U;
        int32_t l_1112 = 0xF37F1F95;
        int32_t l_1113 = 1;
        l_1076 = l_9;
        for (g_837 = 0; (g_837 != (-11)); g_837--)
        {
            int8_t l_1092 = (-1);
            g_152 = (safe_rshift_func_int16_t_s_s(((safe_div_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u((((((l_1085 = l_1076) || (((safe_mod_func_int16_t_s_s(g_771, (safe_mul_func_uint8_t_u_u((+l_9), l_783)))) < g_569) , 1)) <= ((g_188 <= (!((1 <= 6) >= g_837))) | g_837)) || g_275) & 0U), l_1076)) != 0xE333), 4294967295U)) , 1), l_1092));
            l_1093 = ((g_583 = 0x4630CB5D) && (l_1076 || (g_152 >= g_110)));
        }
        l_1113 = ((l_1112 = ((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(0x84, (safe_add_func_int8_t_s_s(g_583, ((safe_mul_func_uint16_t_u_u((6 & l_1073), (g_197 >= (g_275 , ((l_1085 = g_224) , (((g_585 = ((safe_mul_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((0xE0B4BF8C < (safe_add_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(((l_1110 = g_188) > g_188), 0x22)), g_8))), l_1093)), (-1))) ^ 3U)) > l_1111) > g_110)))))) <= g_837))))), 4U)) != l_1093)) ^ 1);
        return g_197;
    }
    return l_1110;
}
static uint16_t func_2(uint32_t p_3, uint32_t p_4, uint16_t p_5, int16_t p_6, int16_t p_7)
{
    int32_t l_800 = 0x05E0515B;
    int32_t l_815 = 0x0C21575A;
    uint16_t l_906 = 0x96AB;
    const uint16_t l_1072 = 0x8555;
    for (g_188 = 0; (g_188 <= 21); ++g_188)
    {
        uint16_t l_794 = 65535U;
        int32_t l_795 = 2;
        int32_t l_801 = 1;
        int8_t l_838 = 1;
        int32_t l_1065 = 0x536A70B3;
        g_583 = ((safe_rshift_func_uint16_t_u_s(((safe_mul_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(0xAEC0CA38, 4294967295U)) & (l_794 = 7U)), l_795)) ^ g_188), (safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(0xBB84, (l_801 = l_800))), ((g_476 = (((g_771 = (g_583 , ((p_7 & 0x1A2C8A0D) <= 0x747D3678))) || l_800) != l_795)) < p_3))))) , 0x82B4), l_800)) > l_795);
        if ((p_6 >= ((safe_mul_func_int16_t_s_s(l_794, (l_800 || (safe_div_func_uint8_t_u_u(((((safe_mod_func_int8_t_s_s(p_4, l_800)) > ((l_795 = (safe_add_func_int16_t_s_s(1, (-1)))) && (safe_add_func_uint32_t_u_u((((safe_lshift_func_uint16_t_u_s(((+((l_815 = p_5) || (safe_mod_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(4U, l_801)), 0x25)))) , g_476), 8)) == 0U) <= p_3), p_5)))) ^ l_800) ^ 0x8F), (-1)))))) & p_6)))
        {
            int8_t l_842 = (-10);
            l_815 = ((((((p_4 != (safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s((~(l_800 = (safe_sub_func_uint8_t_u_u(g_583, (safe_mul_func_uint16_t_u_u(((safe_div_func_int32_t_s_s(0x0AFEA872, (+((safe_rshift_func_int16_t_s_u(((((safe_unary_minus_func_uint16_t_u(l_801)) , (l_838 = ((safe_lshift_func_uint16_t_u_s(g_93, 1)) , g_837))) > ((g_583 , (((+(safe_rshift_func_int16_t_s_s(0, (((g_476 != g_771) == g_132) != g_837)))) ^ p_7) , (-10))) , g_275)) && 0x6A97AD64), g_93)) <= l_842)))) | 0xC6F31D26), 0x976D)))))), p_4)), g_131))) > p_6) & g_188) && 0x7069578F) < g_583) <= g_8);
        }
        else
        {
            return p_3;
        }
        for (g_275 = (-12); (g_275 <= 12); ++g_275)
        {
            uint16_t l_867 = 0xB8F2;
            int32_t l_868 = 0xF87DB6F2;
            int32_t l_969 = 0x95703AD8;
            uint32_t l_1017 = 4294967293U;
            for (g_110 = (-23); (g_110 >= 19); g_110++)
            {
                int8_t l_865 = 0;
                uint16_t l_866 = 0xA38B;
                int32_t l_890 = 0x423F14F2;
                int16_t l_899 = 0x62B7;
                if (((g_583 = (5 > (g_153 >= ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((g_131 || (l_868 = (l_795 = ((p_7 = ((safe_rshift_func_int16_t_s_s(((p_4 == 0xE8B0EA1C) , (safe_div_func_int8_t_s_s((safe_unary_minus_func_int16_t_s((p_6 = (safe_mod_func_int8_t_s_s(((g_8 = (((((safe_rshift_func_uint8_t_u_u(g_837, 7)) >= (safe_unary_minus_func_uint16_t_u((safe_lshift_func_uint8_t_u_s((4294967290U >= g_837), ((safe_add_func_int8_t_s_s(l_800, l_865)) , p_7)))))) && l_866) || l_838) >= l_867)) & p_4), p_5))))), 255U))), 1)) <= l_867)) >= p_4)))), g_476)), 6)) > l_815)))) ^ g_110))
                {
                    uint32_t l_869 = 0xEF4E04CF;
                    l_869 = p_7;
                }
                else
                {
                    int32_t l_885 = (-1);
                    l_890 = ((safe_add_func_uint32_t_u_u((((p_4 && ((l_795 = (((p_6 >= (safe_mul_func_uint16_t_u_u((p_5 = ((p_5 ^ (g_288 <= ((!(((l_800 , (safe_sub_func_uint32_t_u_u((((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((g_569 == (safe_mod_func_int32_t_s_s((((l_885 || (safe_mod_func_int16_t_s_s(((((g_585 = ((safe_mul_func_uint8_t_u_u((l_890 >= 0xD1), g_93)) > g_152)) & 251U) , 0xCFCF372A) != 9), g_569))) ^ 0xD5) && 0), g_281))), 5)), 3)) || l_865) , l_866), p_7))) , l_815) > l_890)) <= g_224))) > p_5)), 0x3D68))) | 0x73F00CB7) ^ g_332)) == 0x97F29B7C)) , 0x0B) <= (-1)), 0x891D3509)) <= p_3);
                    l_815 = (safe_sub_func_int32_t_s_s((((g_332 = (safe_mod_func_int8_t_s_s((safe_div_func_int8_t_s_s(((((l_899 = (safe_rshift_func_int8_t_s_u(l_815, 4))) ^ 0x64451E21) | (g_771 = p_5)) >= (((((safe_div_func_int32_t_s_s(((safe_rshift_func_int16_t_s_s((safe_add_func_int8_t_s_s((l_906 != (l_866 >= (l_801 = (safe_sub_func_uint32_t_u_u(4294967289U, (safe_add_func_uint16_t_u_u(((l_794 , (safe_mod_func_uint8_t_u_u((g_8 = 0x16), (safe_unary_minus_func_int16_t_s((safe_rshift_func_uint8_t_u_u((g_224 , l_800), 0))))))) ^ 0), 0xAC53))))))), g_93)), l_890)) , g_837), 0x49B1D10B)) ^ g_152) >= p_4) && g_275) & 7U)), g_476)), (-2)))) , g_152) >= 6U), g_583));
                    if (g_224)
                        break;
                }
                if (g_153)
                    continue;
                if (g_771)
                    break;
            }
            l_868 = l_867;
            if (((p_7 , (((((g_132 = (safe_unary_minus_func_int32_t_s(((((safe_rshift_func_uint16_t_u_s((!p_6), ((g_569 = (safe_lshift_func_int16_t_s_s(((+((safe_add_func_uint8_t_u_u(g_152, (p_3 && (p_6 != ((0 >= g_275) <= 3))))) == ((safe_add_func_uint16_t_u_u(g_288, 0xA09C)) , 1U))) < p_6), 1))) || g_569))) == 0x3862) >= g_837) , g_771)))) > l_867) >= 0xB7) & l_815) | 1U)) != p_5))
            {
                l_815 = g_569;
                g_132 = p_6;
                g_132 = 1;
            }
            else
            {
                int32_t l_943 = 0xD1A6E6F9;
                uint16_t l_1006 = 0x2368;
                uint8_t l_1052 = 0x4B;
                if ((((g_8 && (((((safe_add_func_int8_t_s_s(((((p_6 = 0x9EE5) | ((((safe_mod_func_int8_t_s_s(((l_868 = (((safe_add_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u(((((safe_add_func_uint16_t_u_u(((p_5 = ((safe_rshift_func_uint8_t_u_s(((safe_mod_func_int8_t_s_s(l_800, (l_868 | (safe_mod_func_uint16_t_u_u((l_943 , (g_771 = (l_969 = (((((safe_mul_func_int16_t_s_s(g_224, ((!(l_800 & (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(((((((safe_mod_func_uint16_t_u_u((((g_476 = (0x33F547F1 == (safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u((safe_rshift_func_int16_t_s_s((+(safe_rshift_func_uint16_t_u_s(((safe_div_func_int32_t_s_s((safe_sub_func_int8_t_s_s(l_868, g_281)), 0x7D46E0F8)) , p_5), 8))), l_943)))), l_794)), p_7)), p_4)))) & l_868) != l_867), p_3)) | g_152) < g_153) & 65530U) < g_8) , p_5), p_4)), l_794)))) < l_943))) , p_7) <= 0x53) <= g_110) <= l_867)))), 0xBFD8))))) , g_569), g_110)) , g_132)) > 0x2572), l_868)) >= l_943) | 0x52) && p_3), p_4)) , p_4), g_153)) == p_4) || 0U)) || p_7), g_288)) && g_583) <= 255U) != 2)) && p_6) <= g_585), 1)) ^ g_152) == 3) ^ 0xEBBCEC7A) != (-1))) || l_838) , l_867))
                {
                    int16_t l_993 = (-1);
                    int32_t l_1007 = 0x25960EA3;
                    for (g_8 = 0; (g_8 > 49); g_8 = safe_add_func_int16_t_s_s(g_8, 3))
                    {
                        const uint8_t l_996 = 0x9C;
                        g_583 = (g_93 == ((g_188 >= ((8U >= (safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u((!(g_153 = (((safe_rshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s(((((safe_mod_func_uint16_t_u_u(4U, g_110)) <= ((safe_mul_func_uint8_t_u_u((((((-1) < 1U) , (((safe_div_func_int8_t_s_s((l_993 != (l_969 = ((safe_sub_func_uint16_t_u_u((p_6 ^ g_837), 0x5C6B)) , g_837))), l_906)) ^ g_288) ^ l_996)) == 0xCE) | l_993), 0U)) ^ 2)) || 0) && 0xAD962EC0), 0)) > p_7) | (-1)), 0x54)), 5)) , p_3) , p_5))), l_867)), l_996)), 10))) , 0x69F3)) != p_6));
                    }
                    if (((((~(l_1007 = ((((((l_993 , ((l_868 || (safe_div_func_uint8_t_u_u(g_332, g_837))) & (safe_div_func_int8_t_s_s(p_3, (((((safe_sub_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((p_6 == g_332) && (g_771 = g_569)), ((((p_7 = ((0x9A47 != g_476) <= p_6)) && l_943) , l_1006) && g_153))), 0xF9F4)) != 4294967289U) <= 0xEA8E) <= p_3) || p_4))))) > p_5) < l_1006) > g_188) > 0xBA) && l_906))) > p_4) | l_1006) > l_815))
                    {
                        const int8_t l_1016 = (-6);
                        int32_t l_1018 = 0x7A1A8B7A;
                        g_197 = (l_1018 = ((p_7 , ((safe_div_func_int16_t_s_s(0x2277, g_188)) | 0xA56F)) , (((safe_lshift_func_int8_t_s_u(((g_132 = (safe_mod_func_int16_t_s_s(l_943, (safe_sub_func_int32_t_s_s((((l_1016 > 0U) || p_4) >= l_1017), l_815))))) , (-2)), p_5)) ^ g_585) & p_6)));
                    }
                    else
                    {
                        const uint16_t l_1043 = 0x1880;
                        g_132 = (safe_unary_minus_func_uint16_t_u((safe_mul_func_uint8_t_u_u(g_153, ((safe_mod_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((((safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((((((safe_lshift_func_uint16_t_u_s(g_585, 13)) & ((g_275 ^ l_993) , (g_281 = (!(safe_sub_func_int32_t_s_s((safe_unary_minus_func_int8_t_s((0xE2 && (safe_mul_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((g_188 || (p_4 && (!(-6)))), (safe_div_func_int8_t_s_s((-2), 253U)))), 0xF5))))), 2)))))) > p_6) & p_7) , p_4), l_1043)), g_288)) <= g_332) == g_288), g_197)) >= l_868), 0x07E7)) , g_837)))));
                    }
                }
                else
                {
                    l_800 = p_4;
                    l_868 = (safe_rshift_func_int8_t_s_s(0, 1));
                }
                for (l_815 = 0; (l_815 <= (-9)); l_815--)
                {
                    for (l_969 = (-24); (l_969 < 25); l_969 = safe_add_func_int16_t_s_s(l_969, 1))
                    {
                        g_197 = (g_583 != p_4);
                    }
                    g_583 = (l_795 = (safe_add_func_int32_t_s_s(((g_476 = (g_585 = ((((l_800 = l_1052) && (safe_rshift_func_int16_t_s_s(p_7, 7))) < ((((safe_rshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(l_943, (safe_lshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((l_1065 = 0x4DE4), (((l_1006 && (g_281 , 0x045E)) , (safe_sub_func_uint8_t_u_u(248U, ((((safe_mul_func_int8_t_s_s(((safe_div_func_int32_t_s_s((l_1072 ^ p_3), 0xEC9B1889)) == l_795), l_795)) != p_7) ^ l_867) <= 0)))) < l_868))), l_1017)), 3)))), 11)) , p_6) == g_224) >= (-3))) , l_969))) , p_5), 0xE3891B83)));
                }
            }
        }
    }
    l_800 = g_8;
    l_800 = 0;
    return l_815;
}
static int8_t func_10(uint32_t p_11, uint32_t p_12)
{
    const uint32_t l_772 = 1U;
    uint16_t l_780 = 0xDD07;
    int32_t l_781 = 0;
    int32_t l_782 = 0x4C0A0851;
    l_782 = (((g_152 , (((g_281 || 0) != (g_771 , g_93)) & 0x1A6F)) > l_772) == (l_772 > ((+(((l_781 = (g_288 = (l_780 = ((g_275 = (safe_lshift_func_int8_t_s_u((((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(0xF7A3, 2)), g_281)) != p_11) != p_12), g_288))) == p_12)))) && 0x8E0714DF) < g_476)) <= g_583)));
    return p_12;
}
static uint16_t func_13(uint32_t p_14, int16_t p_15, const uint8_t p_16, int32_t p_17)
{
    uint32_t l_734 = 4294967286U;
    int32_t l_735 = 0x4084D062;
    int8_t l_745 = 0x30;
    if ((((p_14 <= (g_153 = (p_17 <= ((((safe_mod_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(0x90EE, (safe_add_func_uint16_t_u_u((p_15 != (safe_sub_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(g_131, (safe_div_func_uint32_t_u_u(4294967295U, (safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((l_734 = g_131), 0x0DF8CB76)), (((p_17 && 0x04) == p_14) < l_735))), l_735)))))) , 0x8D54), g_281))), p_14)))), 4294967289U)) ^ l_735), g_93)) == 1) | p_16) > p_15)))) || 0x38) < p_17))
    {
        const int16_t l_736 = 0xC016;
        int32_t l_737 = 0xE461C942;
        uint16_t l_744 = 2U;
        g_583 = ((((l_737 = (p_17 == l_736)) , (l_735 = (safe_rshift_func_uint8_t_u_s((l_734 < ((((g_188 < (g_153 = 0xFFDE)) && ((((-1) != (safe_div_func_uint16_t_u_u((0U && ((((((l_744 = 0x86) , (-5)) == p_15) , g_224) , g_188) <= g_8)), 0x2697))) > p_14) > g_110)) <= l_734) || l_745)), 1)))) >= p_17) || l_734);
        l_735 = (safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u((0x4189 >= (safe_mod_func_int8_t_s_s((p_15 >= ((safe_sub_func_uint8_t_u_u(0x25, (!0xD41E))) != g_8)), (p_14 && 0xA86F4DE2)))), 3)), 6)), (safe_sub_func_int32_t_s_s((g_197 = (safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((p_14 ^ (safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(g_569, 0xF2DC60A0)), g_132))), g_132)), 247U))), g_8)))), p_16)), (-1)));
    }
    else
    {
        return g_93;
    }
    return g_476;
}
static uint32_t func_18(uint32_t p_19, int16_t p_20, int32_t p_21, uint16_t p_22)
{
    uint32_t l_338 = 0x90B11C7D;
    int32_t l_352 = 0x5F1AE000;
    uint8_t l_414 = 0xEE;
    int16_t l_427 = (-7);
    uint8_t l_472 = 0U;
    int16_t l_537 = 0xD729;
    int32_t l_538 = 0;
    int32_t l_584 = 0x5EF81E7E;
    g_152 = (l_338 = (safe_add_func_uint8_t_u_u(p_20, p_22)));
    g_152 = p_20;
    if ((safe_div_func_uint16_t_u_u((((g_153 , (((g_281 = ((safe_unary_minus_func_int8_t_s(l_338)) | p_20)) && (l_338 | ((safe_div_func_uint32_t_u_u((((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(p_22, (((l_352 = (((p_20 = l_338) ^ ((safe_rshift_func_int16_t_s_u(l_338, g_8)) || (safe_sub_func_int16_t_s_s(((g_131 || 251U) > p_22), g_110)))) >= 0U)) > 0x73544DA8) & g_197))), p_19)) < 65530U) < p_21), l_338)) & 1U))) ^ p_22)) && g_8) ^ g_332), l_338)))
    {
        uint32_t l_400 = 0x680F40A1;
        int32_t l_413 = 0x68F75EC2;
        const uint32_t l_442 = 0xB7860BB8;
        int32_t l_443 = 0;
        g_152 = ((safe_add_func_uint32_t_u_u((safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((l_352 = (p_20 , (safe_add_func_int8_t_s_s(((((safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_div_func_int32_t_s_s(((((+(safe_mul_func_int8_t_s_s(0x1F, (+((p_20 , (safe_div_func_int16_t_s_s((((safe_add_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_u(p_19, (safe_lshift_func_int16_t_s_s(((g_93 = (safe_mul_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(((((+((safe_mul_func_uint8_t_u_u((safe_div_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(5U, 3)), (safe_div_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((g_153 = (p_22 = ((l_400 = g_281) < (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(0x55, (safe_div_func_int32_t_s_s((safe_mod_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((((1 ^ ((safe_lshift_func_uint8_t_u_s((l_413 ^ l_338), 4)) >= 0)) | l_413) | p_22), 0x31)) > 0x2A6515E3), l_338)), p_22)))), l_413))))), l_413)) & p_21), 9U)) , l_414), p_19)))), 6)) ^ p_21)) && p_20) < g_281) == l_413), g_275)), p_21)) && 0x16), 2)) & 0xBE), 0x3B))) == g_275), 12)))) || 1U), g_8)) , 0xC997) < l_413), (-6)))) && 1U))))) <= g_188) | l_413) ^ 0x029F), (-1))), l_413)), (-9))) < g_131) == (-10)) , l_352), g_281)))), l_338)), g_197)), p_19)) <= 255U);
        p_21 = (((p_22 < ((l_413 = (safe_mul_func_uint16_t_u_u(p_19, (safe_mul_func_int16_t_s_s((((safe_div_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((((safe_add_func_int32_t_s_s(l_427, (safe_div_func_int16_t_s_s((((l_413 | ((safe_mul_func_uint16_t_u_u(p_20, (((l_443 = (safe_div_func_uint32_t_u_u(g_8, ((((safe_rshift_func_int8_t_s_u((l_352 = ((l_400 , (safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s(g_332, (((safe_add_func_int16_t_s_s((l_442 >= p_22), p_20)) , 250U) , 2U))), l_414))) & p_21)), 5)) != g_188) , l_400) , l_413)))) || g_93) != g_275))) <= p_19)) | 0xA622) && 0x32C7), p_22)))) & g_152) == 1), p_22)) <= p_20), 0x5559)) , p_19), 0x37453B0A)) <= p_21) ^ 251U), p_21))))) != p_20)) ^ g_131) ^ 0xE836181A);
    }
    else
    {
        int32_t l_473 = 0x481DE108;
        int32_t l_507 = 0xCF3E1E3C;
        for (p_20 = (-21); (p_20 == 5); p_20 = safe_add_func_int32_t_s_s(p_20, 1))
        {
            uint32_t l_452 = 0x6EE753C9;
            int32_t l_471 = (-1);
            int32_t l_474 = 0x7C1FB03A;
            int32_t l_475 = 0x6BECDB6F;
            int32_t l_504 = (-1);
            int32_t l_505 = 0x9FC1B618;
            p_21 = (((safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s((((safe_add_func_uint32_t_u_u((l_452 <= p_21), p_20)) >= (safe_div_func_int32_t_s_s((g_476 = (((l_475 = (l_452 , ((l_474 = (p_19 != (safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u((8 == (safe_rshift_func_int8_t_s_u(g_152, ((safe_div_func_uint16_t_u_u((safe_add_func_int8_t_s_s(0xA6, (safe_add_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((l_471 = (l_452 > l_338)), l_472)) != l_473), 255U)))), g_132)) | 0)))), 0xF7379A04)), l_473)), g_197)))) > 5))) && l_473) , g_152)), 4294967295U))) , g_281), l_473)), g_8)) ^ l_473) >= 0x857729BD);
            for (l_471 = 0; (l_471 > 13); l_471 = safe_add_func_uint8_t_u_u(l_471, 7))
            {
                uint32_t l_487 = 4294967295U;
                int32_t l_488 = 0xD98FD706;
                p_21 = (g_131 ^ p_20);
                for (p_21 = 25; (p_21 > 2); --p_21)
                {
                    int32_t l_506 = (-2);
                    l_507 = (safe_mul_func_uint16_t_u_u(0x0D94, (safe_mod_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u((((l_487 , (l_352 = (l_488 = 0x71))) || (!(safe_rshift_func_int16_t_s_s((l_505 = (l_475 = (l_352 = ((safe_add_func_uint32_t_u_u((l_473 = (l_474 = (1U < (safe_sub_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((((((g_476 = p_19) | g_224) <= ((safe_add_func_int16_t_s_s(0xD14B, 0x6D17)) || ((((safe_div_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s(g_332, p_22)) & l_473), l_504)) | 0x0615C79E) ^ 0xD5) >= l_487))) & g_131) <= p_22) <= 0xB876), l_487)), l_473))))), 0xA3907394)) ^ g_153)))), 1)))) >= 0U), l_506)) == l_414), p_21))));
                    l_473 = p_19;
                }
                g_152 = (safe_rshift_func_uint8_t_u_s((p_20 >= (((safe_lshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u((-1), 0)) | ((safe_add_func_int32_t_s_s(((1U & (((((((((((-8) || (safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(0x02, 2)), ((safe_mod_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((0x6421 == (safe_add_func_uint32_t_u_u((safe_div_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(((+(safe_add_func_int8_t_s_s((g_281 , 3), ((safe_mul_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((0x9541 & g_197), (-9))), (-3))) != 1)))) > 0), g_131)), 0xFE74)), p_21))), p_20)) , p_22), l_473)) && p_21)))) <= l_488) | 0x71) != l_475) , 0xB857) || g_476) == l_473) < g_224) >= 0x46) <= 4294967293U)) , l_537), g_8)) , g_332)), 0)) || 0x67) , l_538)), l_352));
            }
            if (((safe_sub_func_int32_t_s_s(((((safe_div_func_uint32_t_u_u((g_93 = (safe_add_func_uint32_t_u_u((((((l_538 = 1) <= ((safe_mod_func_int16_t_s_s(((g_197 = (g_275 = (safe_mod_func_uint32_t_u_u(((((safe_sub_func_uint16_t_u_u(65535U, l_505)) && (safe_add_func_uint32_t_u_u(l_537, (safe_add_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s((g_585 = ((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((l_584 = ((l_352 = ((safe_mod_func_uint16_t_u_u(((g_288 == (l_507 = (safe_sub_func_int16_t_s_s((g_569 = (safe_rshift_func_int8_t_s_s(l_338, l_504))), (safe_sub_func_uint16_t_u_u((((safe_mod_func_uint16_t_u_u((((((g_153 = (((safe_lshift_func_uint8_t_u_s(((((safe_sub_func_int16_t_s_s((g_583 = (safe_sub_func_int8_t_s_s((g_476 = ((safe_lshift_func_int8_t_s_u((+(l_505 && 6U)), g_153)) != g_275)), 0x0F))), g_110)) , p_20) , p_22) > 4), l_505)) , g_332) >= g_332)) & 0) , 0x65) < p_21) == p_22), g_275)) , l_473) ^ l_507), l_474)))))) & 0), p_19)) <= 0)) ^ l_473)), 0)), g_288)) == l_473)), l_427)) , l_475), l_338)), 3U))))) , l_352) & 0x69), g_188)))) | p_19), p_19)) > 0xB223)) , l_473) | g_332) < l_474), g_132))), g_110)) <= 0xBC50) && p_20) == g_224), g_188)) <= l_414))
            {
                uint8_t l_609 = 0xE5;
                p_21 = (~(g_288 = 0xB9A22583));
                if (g_281)
                    break;
                for (g_583 = 0; (g_583 <= (-3)); --g_583)
                {
                    uint32_t l_611 = 4294967292U;
                    for (l_507 = 0; (l_507 >= 18); l_507 = safe_add_func_int16_t_s_s(l_507, 9))
                    {
                        l_505 = (-5);
                        if (p_22)
                            break;
                    }
                    for (g_585 = 0; (g_585 != 21); ++g_585)
                    {
                        int32_t l_610 = 0;
                        int32_t l_637 = (-2);
                        int32_t l_659 = (-6);
                        g_152 = ((l_538 = (((safe_mod_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(1U, ((g_131 = (((p_21 = (-7)) , (safe_div_func_uint32_t_u_u((l_611 = ((9 <= (safe_unary_minus_func_uint8_t_u(((p_22 = (((safe_div_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(g_188, g_583)) || (((((g_476 = ((((((p_21 , p_20) == ((l_609 = (p_20 == ((!(p_20 || l_427)) && g_281))) != l_504)) >= p_21) <= l_471) > g_332) != l_610)) == g_569) != (-1)) && 0x0406FBD9) > l_504)), g_153)), 0U)), p_20)) ^ g_197) > p_20)) >= p_20)))) ^ 0x257BD63F)), g_132))) || 2U)) , g_275))), g_569)) || 0x08D2831A) <= g_585)) && l_507);
                        l_637 = (safe_mod_func_int32_t_s_s((p_21 = g_288), (safe_sub_func_int8_t_s_s(g_281, (l_474 && (p_20 != (safe_rshift_func_int16_t_s_s(((safe_div_func_uint16_t_u_u(((p_22 , (0x10DF && (g_153 = ((safe_lshift_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((safe_div_func_uint32_t_u_u((!(safe_sub_func_uint8_t_u_u((g_332 = (safe_rshift_func_int8_t_s_s(8, 2))), (l_610 = (safe_add_func_int16_t_s_s((p_22 == ((((safe_mod_func_int32_t_s_s(g_476, g_569)) <= (-5)) >= (-1)) != g_569)), g_131)))))), p_20)), p_19)) , g_153), 0x5227)) && 1U), l_609)) & 0x74794DED)))) < g_476), 0xFD9E)) , p_19), 1))))))));
                        g_152 = (safe_div_func_int32_t_s_s((p_21 = (l_611 , ((safe_mod_func_uint8_t_u_u((((safe_sub_func_uint16_t_u_u(p_20, (p_22 != (~(l_610 = ((safe_mod_func_uint32_t_u_u((g_583 > ((((!(safe_div_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((~(safe_add_func_int32_t_s_s(0x2B074A68, ((g_132 & (safe_lshift_func_uint16_t_u_s(((((safe_mod_func_int8_t_s_s((0x98 ^ (((0U < (l_505 >= p_19)) & 6U) != 254U)), l_610)) & l_427) < l_659) , 4U), 7))) & 4294967295U)))), 0)), p_19))) == 1U) || l_610) != l_611)), p_20)) > 0U)))))) , 4294967295U) , g_332), l_584)) , p_21))), 4294967295U));
                        return g_188;
                    }
                    for (l_427 = 0; (l_427 != (-30)); l_427 = safe_sub_func_int8_t_s_s(l_427, 2))
                    {
                        uint32_t l_663 = 0x0DD1E963;
                        g_132 = (safe_unary_minus_func_int32_t_s((l_663 != ((safe_mod_func_int8_t_s_s((((safe_mod_func_int16_t_s_s(g_224, 7)) , (safe_mod_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(((g_153 = (g_153 < (p_19 != (safe_unary_minus_func_int8_t_s(((safe_unary_minus_func_uint16_t_u((safe_unary_minus_func_int32_t_s((safe_mod_func_int32_t_s_s(g_476, ((((safe_add_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(((((safe_lshift_func_int16_t_s_u(((safe_add_func_uint32_t_u_u(p_21, (((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((g_569 = ((((((l_475 & (((safe_mul_func_uint16_t_u_u(((safe_div_func_int32_t_s_s((((~(((p_22 == p_22) | p_20) >= 0U)) != (-1)) <= (-10)), l_609)) , p_21), 1U)) < l_663) ^ l_538)) & p_22) && g_332) , l_537) || g_8) != 0x0D)), 8)), 0x28)) , p_22) , 1))) ^ l_507), 13)) , 0x55) & g_583) , p_21), 0xEDD1D08C)), 4294967291U)) , p_21) < p_20) & l_663))))))) ^ p_20)))))) | p_20), l_611)) , p_19), p_21))) < l_611), p_20)) & p_21))));
                        p_21 = l_609;
                    }
                }
                if (p_22)
                    continue;
            }
            else
            {
                for (g_197 = 0; (g_197 == (-24)); g_197 = safe_sub_func_int8_t_s_s(g_197, 4))
                {
                    g_275 = l_352;
                }
                l_474 = l_352;
            }
        }
    }
    l_538 = (((3 == (safe_div_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((g_585 & ((((safe_mod_func_uint16_t_u_u((g_288 || (l_584 = (safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s(0x81, (((g_8 , (p_21 > ((~(safe_sub_func_uint32_t_u_u(g_152, (+((l_472 == (l_352 = ((safe_mul_func_uint16_t_u_u(p_19, g_188)) & p_22))) && l_338))))) || l_427))) > l_537) >= (-2)))) ^ g_188), 10)), g_131)))), p_22)) == g_8) || 0xB1F02715) || l_414)), 4)), l_427))) , p_20) | 0xF9);
    return l_352;
}
static int32_t func_23(uint8_t p_24, uint32_t p_25, int16_t p_26, uint8_t p_27, int32_t p_28)
{
    uint32_t l_206 = 0xC6651808;
    int32_t l_222 = (-1);
    int32_t l_226 = 0xE944683A;
    uint16_t l_238 = 0xA9F5;
    int8_t l_301 = 0x85;
    int32_t l_321 = 0x8A4C053B;
    uint32_t l_330 = 0x09D77097;
    int32_t l_331 = 0xD9F50359;
    for (g_131 = (-11); (g_131 < 52); g_131++)
    {
        int16_t l_223 = 0;
        int32_t l_225 = 0xC862B96C;
        int8_t l_249 = (-8);
        g_152 = ((((safe_lshift_func_int8_t_s_s(((g_110 = g_131) == 0xEA), 7)) < (((((l_206 ^ (+((safe_mod_func_int16_t_s_s(((l_225 = (safe_lshift_func_int16_t_s_s(0x6F50, (g_224 = (safe_rshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((((safe_rshift_func_int8_t_s_s((-4), (((0U >= p_26) , ((l_222 = ((((safe_sub_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(p_26, p_25)), p_27)) && 0x902E) || g_93) >= 0x1073)) , l_223)) ^ l_206))) < l_223) , l_223) <= l_206), l_206)), l_223)))))) || l_206), p_28)) >= (-1)))) & l_226) != g_93) , g_188) | 1U)) , g_153) , l_206);
        l_226 = (g_131 , (safe_mul_func_uint16_t_u_u((g_110 > p_27), (+0U))));
        l_222 = ((((safe_rshift_func_int16_t_s_s(((g_197 == 0x6D) || (g_110 = (((((safe_mod_func_int16_t_s_s(((((safe_rshift_func_uint16_t_u_s(((((safe_mod_func_int32_t_s_s((((l_225 = (l_238 | (0x115A3005 ^ p_25))) ^ g_131) >= (g_93 && 251U)), ((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_u((safe_div_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((0xCE != g_152), l_249)), (-10))) | p_24), 0x6AD88BDD)), p_28)) && p_25), g_132)) && g_188))) >= l_238) | p_28) != l_249), p_27)) , g_132) , g_153) | 0xE741E8B3), p_26)) , p_28) || 4) && l_222) | g_132))), p_25)) ^ 1U) != g_197) , p_26);
        g_132 = (l_226 | ((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((l_222 = l_249), ((g_110 = ((safe_div_func_int32_t_s_s(((safe_div_func_int8_t_s_s(((safe_unary_minus_func_int16_t_s(l_225)) && (safe_div_func_int16_t_s_s(((l_223 < l_226) || ((((safe_sub_func_uint32_t_u_u((safe_div_func_uint8_t_u_u((((p_26 = (safe_rshift_func_uint8_t_u_s(((safe_sub_func_int32_t_s_s((((l_238 && ((((safe_lshift_func_uint8_t_u_s((((safe_add_func_int16_t_s_s((((safe_div_func_int8_t_s_s((g_275 = (l_249 < ((0xEDE11C7F || (l_226 > p_26)) | g_188))), l_223)) , p_25) != l_238), g_132)) == g_132) , p_26), 7)) && 1) , g_8) & g_152)) && l_238) != g_197), p_25)) == 9), 6))) & 0xC3E9) >= l_223), 254U)), p_28)) , p_28) | 0xF4A9C1BF) , p_24)), p_28))), g_224)) != 0), p_27)) & l_249)) < p_28))), 0xBD)) <= p_27));
    }
    for (g_110 = 0; (g_110 != 18); g_110++)
    {
        int32_t l_278 = 0x8862E0C1;
        const uint32_t l_297 = 4294967286U;
        int32_t l_300 = 0x6AE97821;
        l_278 = ((((((l_278 | (l_278 && ((safe_lshift_func_int16_t_s_u((g_281 | (safe_div_func_uint8_t_u_u(l_222, (-2)))), 1)) > ((((safe_rshift_func_int16_t_s_u((g_224 ^ ((safe_sub_func_int16_t_s_s(((g_288 = p_24) , (~(safe_div_func_uint16_t_u_u(l_222, (-1))))), g_8)) , 255U)), p_24)) <= 0xD1) , 0U) <= g_153)))) , l_278) && 4) ^ 0xB2E72F24) > p_27) >= 4294967288U);
        l_301 = (l_226 = ((safe_sub_func_uint8_t_u_u((l_222 & ((safe_add_func_int8_t_s_s((-9), (!l_297))) != p_24)), ((0x69 || ((((safe_mul_func_uint16_t_u_u(g_197, (l_300 , p_24))) , (g_110 <= g_131)) , 0x35) , 1)) < p_24))) | g_93));
    }
    l_321 = (l_226 = ((((safe_lshift_func_uint16_t_u_u(((0x1D > (~0x5EF05320)) && (safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((safe_div_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(((g_332 = (((l_331 = ((g_153 || (g_131 == (g_281 = ((safe_div_func_int32_t_s_s((safe_div_func_uint8_t_u_u(((l_301 > (l_321 || (safe_sub_func_uint8_t_u_u((0x33C6 >= (((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((-8) < (safe_rshift_func_uint16_t_u_u((g_197 < l_330), 4))), l_331)), p_24)) , 0x50) > g_110)), 0xDA)))) == l_238), 0x21)), p_25)) , g_275)))) <= l_226)) , 0x52E694BA) , p_28)) == g_275), l_206)), g_131)), 13)), p_27)) && g_8) >= l_330), g_132)), 0x31E6))), 10)) , 0xC577DD6A) == (-4)) >= p_27));
    for (l_330 = 19; (l_330 <= 33); l_330++)
    {
        l_321 = (safe_unary_minus_func_int16_t_s(0));
    }
    return p_24;
}
static uint8_t func_31(int8_t p_32, int32_t p_33, uint16_t p_34, uint32_t p_35)
{
    int16_t l_167 = 0x105C;
    int32_t l_174 = 0;
    int8_t l_189 = 0x4C;
    int32_t l_196 = 0x5E665516;
    int32_t l_200 = 0x40BF3EC7;
    p_33 = ((g_153 > l_167) != g_131);
    if (((((safe_add_func_int16_t_s_s(((safe_sub_func_int8_t_s_s(p_33, ((safe_mul_func_int16_t_s_s((l_174 < (g_153 , (safe_div_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((l_167 , (((safe_unary_minus_func_int16_t_s(g_152)) < l_174) == (g_188 = (safe_mul_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(0, 11)) <= (-4)), (((((0x0D4ED63E == 0) , 0x858CEDA5) != g_110) && 0x35) == 0x4A)))))) & l_174), 0x7E29)), l_167)), g_131)))), l_189)) | g_8))) != g_132), p_32)) <= 0x60) , 0x7A) <= p_34))
    {
        uint16_t l_198 = 0x6642;
        int32_t l_199 = 7;
        l_200 = (g_8 , (l_199 = ((g_197 = (safe_sub_func_int8_t_s_s(((p_32 != l_174) ^ (safe_rshift_func_uint16_t_u_s(p_34, (safe_lshift_func_uint16_t_u_s(0U, l_174))))), (l_196 = (-1))))) > l_198)));
        l_199 = (-8);
    }
    else
    {
        const uint32_t l_201 = 0x888CA29F;
        p_33 = l_201;
    }
    return g_153;
}
static uint32_t func_40(int32_t p_41)
{
    int32_t l_165 = 0xB44CA3D1;
    uint8_t l_166 = 1U;
    for (p_41 = 0; (p_41 >= (-27)); p_41 = safe_sub_func_uint32_t_u_u(p_41, 9))
    {
        int32_t l_45 = 0x6C4779D4;
        int32_t l_62 = 0x71B70561;
        l_165 = (((p_41 , l_45) < (safe_add_func_uint16_t_u_u(g_8, func_48(p_41, g_8, g_8, (l_62 = (safe_add_func_int8_t_s_s(func_56(g_8, (((((l_45 && 255U) <= 8U) , 0xB1) == p_41) & p_41), g_8, g_8), p_41))), p_41)))) , g_8);
        if (g_110)
            break;
        if (l_166)
            continue;
    }
    return l_165;
}
static int16_t func_48(uint32_t p_49, int16_t p_50, int32_t p_51, int32_t p_52, int32_t p_53)
{
    int8_t l_65 = 0x65;
    int32_t l_73 = 9;
    int32_t l_76 = 0x8784865E;
    int16_t l_108 = 0xEBB7;
    int32_t l_109 = 0x08A2B653;
    uint32_t l_133 = 0xEC2988D6;
    int8_t l_134 = 0xC7;
    uint32_t l_137 = 0x8F6EEC55;
    for (p_49 = (-26); (p_49 != 27); ++p_49)
    {
        uint8_t l_66 = 3U;
        int32_t l_94 = 0;
        p_53 = 0;
        l_66 = l_65;
        if ((((l_66 != (safe_div_func_int32_t_s_s((1U ^ (l_76 = (((l_65 , g_8) <= ((l_66 != (+(((p_49 != ((+(safe_lshift_func_int16_t_s_u((p_52 , (((p_53 = (((l_73 = p_49) || (safe_div_func_int32_t_s_s(0x4E0C42EF, l_66))) >= l_66)) == g_8) , p_51)), 5))) , p_51)) , l_66) <= g_8))) , g_8)) , 0xC37461BC))), p_51))) != 0xB0) <= l_65))
        {
            return p_52;
        }
        else
        {
            uint32_t l_83 = 4294967294U;
            const int32_t l_92 = 0;
            g_93 = (~(((safe_lshift_func_uint8_t_u_u((0x6723 < l_66), (((p_53 = ((+(safe_sub_func_uint16_t_u_u((((((((255U > (l_66 , (p_49 , (l_83 = p_50)))) < ((safe_mul_func_uint8_t_u_u((0x8A7C || ((safe_mul_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((g_8 , ((safe_mul_func_uint8_t_u_u(g_8, 1)) ^ g_8)), l_65)) >= l_66), l_66)) || l_92)), 0xB4)) || l_92)) , 0x7944D42B) , l_73) == p_49) || l_66) || p_52), p_52))) != 0)) > 0xC79E06D3) != g_8))) != 4294967295U) != p_49));
            l_94 = p_53;
        }
        l_76 = (safe_mul_func_int8_t_s_s((((l_76 >= p_50) ^ ((safe_rshift_func_int8_t_s_u((-1), 3)) ^ ((((safe_unary_minus_func_uint8_t_u((l_94 = 0U))) , (((p_53 , ((safe_mod_func_uint16_t_u_u(((0x89 >= ((0xB5BC == p_49) && (safe_div_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((((p_53 , p_51) == l_76) , l_66), 6)), l_66)) & g_93), g_93)))) | 65535U), l_76)) <= 0U)) != g_8) == l_94)) , p_49) && 0xD0F3))) < g_93), p_50));
    }
    g_110 = (l_109 = l_108);
    l_73 = p_50;
    if ((l_73 = (safe_lshift_func_uint16_t_u_s((safe_div_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(l_108, p_51)) <= ((l_109 < l_73) ^ ((((safe_mod_func_uint8_t_u_u((g_110 = ((safe_lshift_func_int16_t_s_s(((p_49 ^ (g_110 <= ((((safe_rshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s((-8), (safe_sub_func_uint32_t_u_u((((((((((((safe_rshift_func_int16_t_s_s(((l_76 = (((0U > ((g_132 = (safe_add_func_int8_t_s_s((g_131 = (1U || g_8)), 0U))) <= l_109)) > p_49) <= 0x17)) , l_109), l_133)) ^ g_110) <= g_93) < g_110) == l_108) > g_8) & l_133) != l_134) , 3U) ^ g_93) , l_73), l_109)))), l_134)) & l_108) && g_131) <= p_49))) && l_133), p_53)) ^ l_134)), g_8)) , l_65) , l_73) < 0x2CC2))), 0x0C07)), 11))))
    {
        uint32_t l_135 = 5U;
        uint32_t l_136 = 6U;
        int32_t l_140 = 1;
        l_135 = p_53;
        l_137 = (l_136 < l_136);
        l_140 = (safe_div_func_int8_t_s_s(((l_73 == g_8) , g_8), g_132));
        g_132 = (((((g_93 = (l_73 = 0x11546519)) | p_49) <= p_52) | (safe_rshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((~(safe_div_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u((g_152 = 0U), g_8)) , l_135) >= 0x78), (g_153 = g_8)))), (safe_rshift_func_int8_t_s_s((p_49 | p_51), 0)))), 0)), 8))) || l_108);
    }
    else
    {
        int32_t l_164 = 0x96B175D0;
        for (g_110 = 17; (g_110 >= 3); g_110 = safe_sub_func_int16_t_s_s(g_110, 5))
        {
            return p_53;
        }
        p_53 = ((g_8 , (safe_lshift_func_int8_t_s_u(((((g_153 <= ((safe_rshift_func_int8_t_s_s(0, 6)) < g_93)) >= ((safe_lshift_func_int16_t_s_u(0, 8)) , (l_65 , (l_73 = l_164)))) , p_49) < 6U), 7))) < 0xDD);
    }
    return p_49;
}
static int8_t func_56(const int32_t p_57, uint8_t p_58, uint8_t p_59, uint16_t p_60)
{
    uint32_t l_61 = 1U;
    l_61 = 0;
    return p_60;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_224, "g_224", print_hash_value);
    transparent_crc(g_275, "g_275", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    transparent_crc(g_288, "g_288", print_hash_value);
    transparent_crc(g_332, "g_332", print_hash_value);
    transparent_crc(g_476, "g_476", print_hash_value);
    transparent_crc(g_569, "g_569", print_hash_value);
    transparent_crc(g_583, "g_583", print_hash_value);
    transparent_crc(g_585, "g_585", print_hash_value);
    transparent_crc(g_771, "g_771", print_hash_value);
    transparent_crc(g_837, "g_837", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
