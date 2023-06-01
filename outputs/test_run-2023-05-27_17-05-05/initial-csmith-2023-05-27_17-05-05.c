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
static int32_t g_5 = (-1L);
static int32_t * const g_4 = &g_5;
static int32_t *g_29 = &g_5;
static int32_t **g_28 = &g_29;
static uint64_t g_43 = 0xABF7C2F5A260DF39LL;
static uint64_t g_66 = 0xA772BE76DCB0C7B2LL;
static int32_t g_68 = 8L;
static int32_t g_92 = 0L;
static int64_t g_94 = 0x66485393F1BFD6FFLL;
static int64_t g_100 = 0L;
static int64_t *g_99 = &g_100;
static int32_t ***g_102 = (void*)0;
static uint16_t g_121 = 0xB92FL;
static uint8_t g_152 = 255UL;
static int16_t g_212 = 0x349CL;
static uint16_t g_253 = 65535UL;
static int16_t g_261 = 0L;
static uint32_t g_280 = 0x827AFF6EL;
static uint16_t g_286 = 65535UL;
static int16_t *g_295 = (void*)0;
static int8_t g_324 = 0xFAL;
static int8_t g_346 = 0xD9L;
static uint64_t *g_399 = &g_66;
static uint64_t **g_398 = &g_399;
static int16_t g_424 = 0L;
static uint8_t *g_445 = (void*)0;
static int16_t **g_450 = (void*)0;
static int16_t ***g_449 = &g_450;
static int16_t ****g_448 = &g_449;
static int64_t **g_560 = &g_99;
static int64_t ***g_559 = &g_560;
static int64_t ****g_558 = &g_559;
static uint32_t g_579 = 4294967288UL;
static uint32_t g_581 = 0xFB1C6D6EL;
static uint8_t g_584 = 0x78L;
static uint64_t g_626 = 1UL;
static uint32_t *g_678 = &g_581;
static const uint8_t *** const g_680 = (void*)0;
static const int32_t g_702 = 0x663EB93BL;
static int8_t * const g_737 = &g_346;
static int8_t * const *g_736 = &g_737;
static int8_t * const **g_735 = &g_736;
static uint32_t g_859 = 0xCD804A26L;
static uint8_t **g_865 = &g_445;
static uint8_t ***g_864 = &g_865;
static uint8_t ****g_863 = &g_864;
static uint8_t *****g_862 = &g_863;
static int32_t * const *g_977 = &g_4;
static int32_t * const **g_976 = &g_977;
static int16_t g_1032 = 0x4EFAL;
static uint16_t func_1(void);
static int32_t * func_2(int32_t * const p_3);
static int32_t * func_6(int32_t * p_7);
static int32_t * func_8(uint8_t p_9, uint64_t p_10, int32_t * p_11, int32_t * p_12, int32_t * p_13);
static uint8_t func_18(int32_t p_19, int32_t p_20, int8_t p_21, int16_t p_22);
static int32_t func_26(int32_t ** p_27);
static int64_t func_32(int8_t p_33, uint32_t p_34, int32_t p_35);
static uint64_t func_36(uint32_t p_37, uint16_t p_38, int32_t p_39, uint16_t p_40, int16_t p_41);
static uint16_t func_50(const uint64_t p_51, uint16_t p_52, uint64_t * p_53, int32_t * p_54, int32_t * p_55);
static int32_t * func_57(const int32_t * p_58, uint64_t p_59, int64_t p_60, uint16_t p_61, uint64_t * p_62);
static uint16_t func_1(void)
{
    int32_t *l_774 = &g_5;
    const int32_t l_778 = 0xC88738DCL;
    uint16_t *l_779 = &g_253;
    uint8_t *l_784 = &g_584;
    int8_t *l_785 = &g_324;
    int16_t ****l_825 = &g_449;
    const uint64_t l_833 = 0xDB38DEF3E67CF76BLL;
    int32_t l_894 = 0L;
    uint16_t *l_921 = &g_253;
    int8_t ***l_926 = (void*)0;
    uint32_t l_979 = 0xE87D0A12L;
    uint16_t l_1015 = 1UL;
    int8_t l_1070 = (-5L);
    int32_t l_1081 = (-5L);
    l_774 = func_2(g_4);
    if ((*g_4))
    {
        int32_t **l_775 = &l_774;
        (*l_775) = func_6(l_774);
    }
    else
    {
        (*l_774) = (l_774 != l_774);
    }
    if ((safe_add_func_int8_t_s_s(l_778, ((1UL ^ 1L) & (((void*)0 != l_779) < (safe_lshift_func_int8_t_s_s(((**g_736) = (-5L)), ((*l_785) = (safe_rshift_func_uint8_t_u_s(((*l_784) = g_100), l_778))))))))))
    {
        int32_t l_794 = 0x84A6A01EL;
        int64_t ****l_797 = &g_559;
        int64_t *****l_798 = &g_558;
        uint8_t **l_799 = (void*)0;
        int32_t l_802 = 7L;
        int16_t ****l_824 = &g_449;
        uint16_t l_837 = 0x0661L;
        int16_t ****l_840 = (void*)0;
        const uint32_t l_955 = 0x49153A55L;
        int32_t * const **l_975 = (void*)0;
        uint16_t l_984 = 0x51A7L;
        int8_t l_986 = 5L;
        uint32_t l_987 = 0x98A20BF4L;
        uint64_t l_1013 = 0xBED76F464622A03ELL;
        int32_t *l_1016 = (void*)0;
        int32_t *l_1059 = &l_894;
        (*g_4) = (safe_lshift_func_int8_t_s_s(((((safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((l_794 = (safe_add_func_uint64_t_u_u((**g_398), (*g_99)))), ((safe_sub_func_uint32_t_u_u((l_797 == ((*l_798) = &g_559)), (l_799 != l_799))) < 0UL))), 7)) == (safe_rshift_func_uint8_t_u_s(l_802, (safe_rshift_func_uint8_t_u_u(g_626, 0))))) && g_324) <= (*g_399)), l_778));
        if ((((*g_737) = (safe_mod_func_uint8_t_u_u(((*l_784) = 0xDEL), ((safe_add_func_uint32_t_u_u((*g_678), (0xECL > (((safe_mul_func_uint16_t_u_u(0x1CD5L, (safe_mod_func_int64_t_s_s(0L, l_794)))) ^ (safe_sub_func_uint64_t_u_u(((&g_286 != &g_121) || 0x85L), (*g_399)))) < l_794)))) && l_794)))) ^ 0UL))
        {
            uint8_t l_821 = 0x0EL;
            int16_t *****l_826 = &l_825;
            int32_t l_834 = 0x6BCB5985L;
            uint32_t l_835 = 0x03AFB107L;
            int32_t l_836 = 8L;
            int16_t *l_838 = (void*)0;
            int16_t *l_839 = &g_212;
            int32_t ***l_904 = &g_28;
            int8_t **l_953 = (void*)0;
            const uint16_t l_988 = 0x2E77L;
            l_802 = ((l_836 = ((*g_737) = (safe_add_func_int64_t_s_s(((safe_mod_func_int32_t_s_s((((*g_4) = ((safe_mod_func_uint32_t_u_u((246UL && (l_834 = ((l_821 | g_346) != (((safe_lshift_func_uint16_t_u_u(((l_824 = &g_449) == ((*l_826) = l_825)), (safe_sub_func_uint64_t_u_u((0xFAL ^ l_778), 0x9EEA9F96FA1E393BLL)))) ^ ((*l_785) = ((safe_add_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u(g_212, l_833)) < 0xEC9472EFL), (****g_558))) ^ l_794))) >= l_802)))), (*g_4))) && l_794)) | l_835), l_835)) >= l_794), l_821)))) >= 0xA5L);
lbl_962:
            if (((l_837 && ((*l_839) = g_253)) && (l_840 != l_824)))
            {
                int64_t l_841 = 0xA67200DE4D2F85AELL;
                uint32_t *l_842 = &g_579;
                int32_t *l_861 = &l_834;
                int8_t l_866 = (-1L);
                int8_t **l_928 = (void*)0;
                int8_t ***l_927 = &l_928;
                if (l_841)
                {
                    uint8_t l_845 = 0x59L;
                    int32_t *l_860 = &g_5;
                    uint8_t l_892 = 0UL;
                    if (((l_842 != l_774) == (((*g_737) = l_845) >= (0x5121510A0183CE96LL > (safe_mod_func_uint32_t_u_u((g_859 = (safe_sub_func_int64_t_s_s((((l_845 <= (safe_mod_func_uint8_t_u_u(0x7FL, (safe_sub_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(((*l_784) = ((0L && (g_152 = (0xE554L <= (~((**g_398) != (*g_399)))))) ^ l_837)), 0)) >= g_702), 1UL)), g_626))))) < l_845) >= l_841), l_834))), 0xFB3C2A42L))))))
                    {
                        l_861 = func_6(l_860);
                        (*l_860) = (*g_4);
                        g_862 = (void*)0;
                    }
                    else
                    {
                        int32_t **l_867 = &l_861;
                        int32_t l_893 = 0L;
                        (*g_4) = l_866;
                        (*l_867) = func_6(func_6(l_861));
                        (*g_4) = ((safe_lshift_func_int8_t_s_s(0x4FL, 3)) | (0xED63L && g_346));
                        l_894 = (+(safe_mod_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((***g_735) = (g_253 && (safe_mul_func_uint16_t_u_u((l_835 | (((*g_735) != (void*)0) >= (*g_737))), (safe_unary_minus_func_int64_t_s((safe_add_func_int8_t_s_s(((*l_785) = (safe_add_func_int64_t_s_s(0x88CB7945341E6EC3LL, ((9UL < ((0x0AEEL | (safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((g_424 = l_834), 0xD308L)), 7L))) & 0xF4L)) && l_892)))), (-9L))))))))), l_893)), g_66)), l_836)) == g_68), (*l_860))));
                    }
                }
                else
                {
                    int32_t **l_895 = &l_861;
                    int32_t ****l_902 = (void*)0;
                    int32_t ****l_903 = &g_102;
                    int16_t *l_905 = &g_424;
                    uint8_t l_914 = 0xEFL;
                    (*l_895) = &l_836;
                    (*g_4) = (safe_add_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((((void*)0 == l_779) <= (safe_rshift_func_int8_t_s_s((((l_904 = ((*l_903) = &g_28)) != &g_28) & ((void*)0 == l_905)), 6))), ((*l_784) = (safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s(((0UL > (((safe_mod_func_int8_t_s_s(l_834, (l_894 && 1L))) & 1L) == l_836)) >= 1L), 3)), 14))))), (-1L)));
                    (*l_861) = (safe_mul_func_int16_t_s_s((((*g_4) = ((*l_861) | g_100)) == (l_914 <= (safe_add_func_int64_t_s_s((65535UL <= g_702), ((*l_861) | 1L))))), 3UL));
                    for (g_584 = (-22); (g_584 <= 8); g_584 = safe_add_func_int32_t_s_s(g_584, 7))
                    {
                        int8_t l_929 = 0x10L;
                        int32_t *l_930 = &l_802;
                        (*g_4) = (safe_mod_func_uint8_t_u_u(((void*)0 != l_921), ((safe_mod_func_int64_t_s_s(((0x8BCFL && (((*g_678) < (*l_861)) ^ (safe_mul_func_int16_t_s_s((l_926 != (l_927 = l_926)), l_929)))) | l_929), l_794)) && (****g_558))));
                        (**l_895) = ((**g_736) && l_837);
                        l_774 = l_930;
                    }
                }
            }
            else
            {
                int32_t l_941 = 1L;
                int16_t ****l_950 = &g_449;
                int8_t l_954 = 0x29L;
                (*g_4) = (safe_add_func_int32_t_s_s((l_837 ^ (safe_mul_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((*l_779) = ((((safe_add_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u(((*l_839) = l_941), ((safe_add_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u(g_280, (safe_rshift_func_int8_t_s_s(l_941, (&g_449 != ((*l_826) = l_950)))))), (((safe_lshift_func_int8_t_s_u(((***g_735) = ((void*)0 != l_953)), l_941)) && (*g_737)) < (****g_558)))) > l_941), g_66)) == l_954))) & l_955), 4294967295UL)) > 65532UL) != 0x763638E8E947889BLL) ^ l_941)), l_941)), 0x37L))), 0UL));
            }
            for (g_43 = (-22); (g_43 != 41); g_43 = safe_add_func_uint32_t_u_u(g_43, 7))
            {
                int16_t l_958 = 1L;
                int32_t *l_966 = &l_802;
                if (l_958)
                {
                    int64_t l_959 = 6L;
                    l_802 = ((*g_4) = (((((**g_560) = (l_959 != (***g_735))) ^ 0UL) < (safe_sub_func_int64_t_s_s((0L | l_794), 0UL))) > ((l_833 | (((*g_399) = l_794) == (1L <= l_959))) & g_424)));
                    if (l_821)
                        goto lbl_962;
                }
                else
                {
                    int32_t *l_965 = (void*)0;
                    int32_t l_978 = 0x7BBFECA0L;
                    for (l_958 = 0; (l_958 > 4); l_958++)
                    {
                        l_966 = l_965;
                        l_965 = l_965;
                    }
                    l_979 = (safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(l_833, (*g_737))), ((-4L) <= (safe_lshift_func_uint8_t_u_s(((((((l_955 == (((g_5 >= g_94) < ((*g_865) == &l_821)) < ((((g_976 = l_975) == (void*)0) || 0x28167CB32E67DA71LL) != 1UL))) >= (***g_735)) | 0xB0A28A6732CACD3FLL) != l_978) | l_958) > 0x764BFB68L), (**g_736))))));
                    if ((**g_977))
                        continue;
                }
                (*g_4) = (*g_4);
                (**g_977) = (safe_mul_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(l_984, (g_121 = ((*g_4) ^ (~(l_987 = l_986)))))) == 65529UL), l_988));
            }
        }
        else
        {
            int16_t *l_1001 = (void*)0;
            int16_t *l_1002 = &g_424;
            int32_t l_1005 = 0x00AC51E5L;
            int32_t l_1010 = 0x680F592AL;
            uint32_t l_1014 = 0xAEF083F4L;
            int32_t ***l_1031 = &g_28;
            uint32_t l_1049 = 0x8B1BDCE5L;
            const int64_t *l_1056 = &g_100;
            const int64_t **l_1055 = &l_1056;
            const int64_t ***l_1054 = &l_1055;
            const int64_t ****l_1053 = &l_1054;
            int32_t **l_1060 = &l_1059;
            if (((safe_rshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(((*g_399) = (safe_mod_func_uint64_t_u_u((((safe_lshift_func_int16_t_s_s(((*l_1002) = (-8L)), 2)) < 2L) && 0xE706L), ((((***g_976) = (((((safe_add_func_int8_t_s_s((((*g_678) = ((*g_399) != (l_1005 = (**g_398)))) >= ((l_837 >= (safe_sub_func_int16_t_s_s((((((*g_737) = (((safe_mul_func_uint16_t_u_u(l_1010, ((((safe_add_func_uint8_t_u_u(l_1013, l_1014)) != l_1010) >= 0x9DD09AF2792BE9CFLL) != l_778))) >= g_346) <= g_626)) & 0x82L) != (*g_4)) || 0xDAD598D01A36A766LL), g_66))) <= l_1014)), 0x21L)) == 0x20L) == g_253) | 0xA9D49C7A5DD0976BLL) && l_1015)) == l_802) && (***g_559))))), 0x8E9D8DC0A0023DB1LL)), l_1010)), l_1014)), l_1013)) > l_984))
            {
                int32_t *l_1029 = &l_894;
                if (((**g_977) = 0x3BC4129EL))
                {
                    int32_t **l_1017 = (void*)0;
                    int32_t **l_1018 = (void*)0;
                    int32_t **l_1019 = &l_1016;
                    int32_t **l_1020 = &g_29;
                    (*l_1020) = ((*l_1019) = l_1016);
                }
                else
                {
                    for (g_286 = 0; (g_286 >= 43); g_286 = safe_add_func_int32_t_s_s(g_286, 4))
                    {
                        int32_t l_1023 = (-6L);
                        int32_t **l_1024 = &l_1016;
                        (*g_4) = 1L;
                        g_68 = ((*g_4) = (((void*)0 == (*g_864)) | (1L & l_1023)));
                        (*l_1024) = (*g_977);
                    }
                    for (l_979 = 0; (l_979 > 8); l_979++)
                    {
                        int32_t *l_1027 = &l_1005;
                        int32_t **l_1028 = (void*)0;
                        int32_t **l_1030 = &l_774;
                        g_29 = l_1027;
                        (*l_1030) = l_1029;
                        g_102 = l_1031;
                    }
                }
                (*g_4) = ((g_1032 | (*l_1029)) <= (0L & ((*g_678) = (*g_678))));
                return g_100;
            }
            else
            {
                uint32_t **l_1033 = &g_678;
                uint32_t *l_1034 = &l_979;
                uint32_t **l_1035 = &l_1034;
                int32_t l_1040 = 0x23CA399FL;
                int64_t *** const *l_1052 = &g_559;
                uint8_t l_1057 = 0x48L;
                int32_t **l_1058 = &g_29;
                (*g_4) = (((*l_1033) = &g_581) != ((*l_1035) = l_1034));
                l_1059 = ((*l_1058) = func_6(func_8((safe_mul_func_int8_t_s_s((safe_sub_func_int64_t_s_s(l_1040, (safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((((l_1040 < (safe_sub_func_int64_t_s_s((l_1049 < (****g_558)), ((safe_add_func_int64_t_s_s((((l_1052 != l_1053) ^ l_1040) == ((*g_735) != (void*)0)), (**g_560))) >= 1UL)))) >= 0x4F63C655L) > l_1057) >= 0x774F6C96L), g_579)), 2)), 0)))), 0x87L)), l_1057, &l_802, &l_1040, &l_894)));
            }
            (*l_1060) = (*g_977);
            (*l_1060) = &l_894;
        }
        (*g_4) = ((*l_1059) = ((*l_1059) || (((*l_785) = 1L) || (*g_737))));
        (**g_977) = (safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(g_94, g_253)), ((!(*l_1059)) || ((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(l_1070, ((**g_736) = (safe_mul_func_int8_t_s_s((**g_736), ((safe_rshift_func_int16_t_s_u(((safe_sub_func_uint32_t_u_u((*g_678), (l_1070 & (((*l_1059) <= ((((safe_rshift_func_int16_t_s_u((g_424 = (((safe_rshift_func_int16_t_s_u((0xB0A53188L || 0xD650BE66L), g_346)) & 0L) || 0x44L)), l_1081)) | 4L) & 0x5102C4B7L) <= (*g_678))) || (*l_1059))))) || (*l_1059)), g_859)) | 9UL)))))), l_1070)) || 0xF65FL))));
    }
    else
    {
        (**g_977) = (2L >= (*g_399));
    }
    return g_100;
}
static int32_t * func_2(int32_t * const p_3)
{
    int32_t *l_15 = &g_5;
    int32_t **l_14 = &l_15;
    int32_t l_23 = 0L;
    int32_t *l_773 = &g_5;
    (*l_14) = func_6(func_8(((((*l_14) = &g_5) != (void*)0) < (safe_rshift_func_int16_t_s_u((func_18(l_23, (*g_4), l_23, (safe_sub_func_uint8_t_u_u((&g_5 != (void*)0), l_23))) & l_23), 3))), l_23, &l_23, &l_23, g_678));
    (*p_3) = 0x85D5D54AL;
    return l_773;
}
static int32_t * func_6(int32_t * p_7)
{
    int16_t ****l_745 = &g_449;
    int16_t *****l_746 = &g_448;
    int32_t l_747 = 0x6D3AFBABL;
    int64_t **l_754 = &g_99;
    uint8_t ** const l_755 = &g_445;
    int32_t **l_756 = &g_29;
    int16_t *l_766 = &g_424;
    int32_t l_767 = (-1L);
    int32_t l_768 = (-1L);
    int32_t l_771 = 0x6EB5C0F2L;
    int16_t *l_772 = &g_261;
    (*l_746) = l_745;
    (*l_756) = func_8(l_747, ((g_584 = ((**g_398) && (safe_mul_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(l_747, (((l_747 | ((void*)0 != l_754)) == (((void*)0 != l_755) < l_747)) ^ 4L))), l_747)), (**g_736))))) < (**g_736)), p_7, &l_747, &l_747);
    (*g_4) = (!(safe_add_func_int32_t_s_s(l_747, ((l_771 = ((4UL < 0xA5228B54L) || ((l_747 <= (safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((l_767 = ((*l_766) = l_747)), 13)), (l_768 = l_747))), (((safe_add_func_uint64_t_u_u((**g_398), (((*l_772) = ((l_747 | (((p_7 != p_7) ^ 5L) != l_747)) ^ l_771)) <= 6UL))) != (**g_736)) | 4L)))) >= 0x2831L))) >= 0x935A7155L))));
    (*g_4) = (*g_4);
    return (*l_756);
}
static int32_t * func_8(uint8_t p_9, uint64_t p_10, int32_t * p_11, int32_t * p_12, int32_t * p_13)
{
    uint8_t *****l_739 = (void*)0;
    uint8_t **l_743 = &g_445;
    uint8_t ***l_742 = &l_743;
    uint8_t ****l_741 = &l_742;
    uint8_t *****l_740 = &l_741;
    int32_t *l_744 = (void*)0;
    (*l_740) = (void*)0;
    return l_744;
}
static uint8_t func_18(int32_t p_19, int32_t p_20, int8_t p_21, int16_t p_22)
{
    int32_t l_479 = 1L;
    uint64_t *l_499 = &g_43;
    int32_t * const *l_524 = &g_29;
    int32_t * const **l_523 = &l_524;
    int32_t *l_695 = (void*)0;
    int64_t l_711 = 3L;
    int16_t l_727 = 0x1835L;
    int8_t *l_734 = &g_324;
    int8_t **l_733 = &l_734;
    int8_t ***l_732 = &l_733;
    int64_t l_738 = 0xE61F8CEC9F266AB6LL;
    if (func_26(g_28))
    {
        int64_t l_494 = 0L;
        p_20 = p_20;
        if (l_479)
        {
            return p_22;
        }
        else
        {
            int32_t *l_484 = &g_68;
            uint64_t *l_509 = &g_66;
            for (g_286 = 0; (g_286 < 23); g_286 = safe_add_func_uint32_t_u_u(g_286, 6))
            {
                for (g_280 = 0; (g_280 == 18); ++g_280)
                {
                    l_484 = l_484;
                }
            }
            l_484 = &p_20;
            for (g_100 = 0; (g_100 == 8); g_100 = safe_add_func_int32_t_s_s(g_100, 6))
            {
                if ((p_21 || (safe_sub_func_uint64_t_u_u((l_479 | l_479), l_479))))
                {
                    uint32_t *l_489 = &g_280;
                    int64_t ***l_493 = (void*)0;
                    int64_t ****l_492 = &l_493;
                    const int32_t *l_498 = &g_5;
                    int32_t **l_500 = &l_484;
                    (*g_4) = (0x54L < (p_22 ^ ((*l_489) = 4294967294UL)));
                    for (g_286 = 0; (g_286 != 50); g_286 = safe_add_func_uint8_t_u_u(g_286, 5))
                    {
                        int16_t *l_497 = &g_261;
                        (*l_484) = ((l_494 = ((void*)0 != l_492)) != (251UL < (safe_mod_func_int16_t_s_s(0xD4FCL, ((*l_497) = (*l_484))))));
                        return g_94;
                    }
                    (*l_500) = &p_20;
                    for (g_152 = 0; (g_152 >= 7); ++g_152)
                    {
                        return p_20;
                    }
                }
                else
                {
                    for (g_94 = 0; (g_94 >= 24); ++g_94)
                    {
                        return p_19;
                    }
                    if (l_494)
                        continue;
                    for (g_253 = (-7); (g_253 > 31); ++g_253)
                    {
                        p_20 = p_20;
                        if (p_21)
                            continue;
                        if (p_21)
                            break;
                        if (p_22)
                            break;
                    }
                }
            }
            (*l_484) = (safe_sub_func_int8_t_s_s(l_494, ((0xFBL | (((void*)0 == l_509) | (-1L))) != 0x91DC7A7DE530967ELL)));
        }
    }
    else
    {
        int16_t l_510 = 0xCD87L;
        return l_510;
    }
    for (g_212 = (-22); (g_212 > 27); g_212 = safe_add_func_int8_t_s_s(g_212, 3))
    {
        int16_t *l_522 = &g_424;
        int32_t ***l_525 = &g_28;
        int32_t l_532 = 0x77335672L;
        int8_t *l_533 = &g_346;
        int64_t *l_591 = (void*)0;
        int32_t *l_603 = (void*)0;
        int32_t * const l_640 = &l_479;
        uint16_t *l_728 = &g_121;
        uint32_t l_731 = 4294967295UL;
    }
    return l_738;
}
static int32_t func_26(int32_t ** p_27)
{
    uint32_t l_47 = 0x930509B9L;
    const int32_t *l_63 = &g_5;
    uint64_t *l_65 = &g_66;
    int32_t *l_69 = &g_5;
    int16_t *****l_477 = &g_448;
    int16_t *****l_478 = &g_448;
    for (g_5 = 0; (g_5 <= (-24)); g_5 = safe_sub_func_uint8_t_u_u(g_5, 9))
    {
        uint64_t *l_42 = &g_43;
        uint16_t l_44 = 7UL;
        int32_t l_64 = (-3L);
        int32_t *l_70 = &g_5;
        int8_t *l_441 = &g_346;
        int32_t *l_473 = &g_68;
        (*l_473) = ((func_32(g_5, ((func_36(g_5, (((*l_42) = 0xA9D9E177C422D5FBLL) == (l_44 | (!((+(l_47 ^ (safe_lshift_func_int8_t_s_u(((*l_441) = (func_50(((!(l_47 ^ (((*g_28) = func_57(l_63, g_5, (l_44 <= 0UL), l_64, l_65)) != l_63))) && g_66), (*l_63), l_42, l_69, l_70) != (*l_69))), g_5)))) || 0xDFL)))), (*l_70), (*l_70), (*l_70)) < (*l_70)) ^ (*l_63)), (*g_4)) != 0xED652D0F0CD6CE9ELL) >= (*l_70));
        return (*g_4);
    }
    (*g_28) = (*p_27);
    (*g_28) = func_57(l_69, (*l_63), (*l_63), (((safe_lshift_func_int8_t_s_s((~((l_477 == (l_478 = l_477)) == (-9L))), (*l_69))) <= (0x7DF0E0FF55728C40LL != ((*l_69) <= (*l_69)))) < (*g_99)), l_65);
    return (*l_63);
}
static int64_t func_32(int8_t p_33, uint32_t p_34, int32_t p_35)
{
    uint32_t l_454 = 0x77C82EAEL;
    int16_t *l_455 = &g_261;
    int32_t ** const *l_467 = &g_28;
    int32_t ***l_468 = &g_28;
    int16_t ****l_469 = &g_449;
    uint32_t l_470 = 0xE19E99FDL;
    int32_t l_471 = 9L;
    int32_t l_472 = (-1L);
    l_472 = (safe_sub_func_uint32_t_u_u((((*l_455) = l_454) || (safe_add_func_uint64_t_u_u(((p_35 = (((safe_lshift_func_uint8_t_u_s((((p_34 || p_33) <= (-1L)) >= (safe_mod_func_int8_t_s_s((~((((*g_99) = (safe_mul_func_int16_t_s_s(((*l_455) = ((l_454 | (safe_lshift_func_uint16_t_u_s((l_467 != l_468), ((l_469 == l_469) ^ p_35)))) && l_470)), (-3L)))) > g_43) == l_471)), (*g_445)))), g_43)) || g_152) & (**g_398))) < g_94), 18446744073709551615UL))), p_34));
    return p_34;
}
static uint64_t func_36(uint32_t p_37, uint16_t p_38, int32_t p_39, uint16_t p_40, int16_t p_41)
{
    uint8_t *l_442 = &g_152;
    uint8_t **l_443 = (void*)0;
    uint8_t *l_444 = &g_152;
    int32_t ****l_447 = &g_102;
    int32_t *****l_446 = &l_447;
    int16_t *****l_451 = &g_448;
    p_39 = (((*g_399) = (l_442 == (g_445 = (l_444 = l_442)))) == ((*g_99) = (((*l_446) = &g_102) == (void*)0)));
    (*l_451) = g_448;
    return (*g_399);
}
static uint16_t func_50(const uint64_t p_51, uint16_t p_52, uint64_t * p_53, int32_t * p_54, int32_t * p_55)
{
    int32_t ** const l_71 = (void*)0;
    int32_t l_83 = 0x2075D7B1L;
    uint8_t *l_118 = (void*)0;
    uint8_t l_168 = 0x1BL;
    int64_t **l_198 = &g_99;
    int64_t ***l_197 = &l_198;
    int64_t *l_236 = &g_94;
    int32_t *l_256 = (void*)0;
    const int32_t *l_262 = &g_5;
    int16_t *l_293 = &g_261;
    uint64_t *l_397 = &g_66;
    uint64_t **l_396 = &l_397;
    uint32_t l_401 = 0xAE2D6AA5L;
    int16_t *l_421 = &g_212;
    int16_t *l_422 = (void*)0;
    int16_t *l_423 = &g_424;
    int32_t ***l_440 = &g_28;
    if (((*g_29) = ((*p_55) ^ (&g_4 != l_71))))
    {
        int32_t *l_73 = &g_5;
        int32_t **l_72 = &l_73;
        int8_t l_82 = 2L;
        int32_t l_129 = 0x90230FD1L;
        int64_t l_141 = 0x9186717EFFEB3B2BLL;
        int64_t **l_153 = &g_99;
        const int32_t *l_156 = &g_5;
lbl_88:
        (*l_72) = ((*g_28) = (void*)0);
        for (g_68 = 14; (g_68 < 8); --g_68)
        {
            uint8_t l_85 = 0UL;
            int32_t l_98 = 0x8E27FB60L;
            for (p_52 = 0; (p_52 != 8); p_52++)
            {
                int64_t *l_93 = &g_94;
                uint8_t *l_101 = &l_85;
                const int64_t *l_104 = (void*)0;
                const int64_t **l_103 = &l_104;
                uint16_t *l_119 = (void*)0;
                uint16_t *l_120 = &g_121;
                const uint16_t l_125 = 0xA1BFL;
                int32_t *l_126 = &l_83;
                for (g_66 = 0; (g_66 == 23); g_66 = safe_add_func_int64_t_s_s(g_66, 6))
                {
                    int8_t l_84 = 0x28L;
                    int32_t **l_86 = &l_73;
                    int32_t ***l_87 = &l_86;
                    l_84 = (safe_add_func_int32_t_s_s(0L, (l_83 = l_82)));
                    if (l_85)
                        continue;
                    l_83 = (&p_54 != ((*l_87) = l_86));
                    if (g_5)
                        goto lbl_88;
                }
                if ((!((((*l_93) = (safe_mod_func_int16_t_s_s((g_92 = p_52), g_68))) == (!(safe_add_func_uint16_t_u_u((((((((l_98 = ((*p_54) != 4294967295UL)) <= (((*l_101) = (g_99 != &g_100)) <= (g_66 || (g_102 == &g_28)))) < 0x8ADBL) < 0x8F974433L) < g_68) | p_51) > (*g_99)), g_66)))) <= (-6L))))
                {
                    const int64_t ***l_105 = &l_103;
                    const int64_t **l_107 = (void*)0;
                    const int64_t ***l_106 = &l_107;
                    (*l_106) = ((*l_105) = l_103);
                }
                else
                {
                    (*l_72) = p_54;
                }
                (*l_126) = (safe_mul_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u((((safe_add_func_int8_t_s_s(((safe_sub_func_int64_t_s_s((safe_add_func_int64_t_s_s((-2L), (g_92 & (l_118 == l_118)))), (g_5 > 5UL))) & ((*l_120) = p_52)), (safe_mul_func_int16_t_s_s(((!0UL) ^ l_98), 0xD785L)))) >= (-1L)) != l_125), 0)) != g_94), g_94));
            }
        }
        l_129 = (safe_lshift_func_uint16_t_u_s(65533UL, 8));
        if ((*p_54))
        {
            const int64_t *l_135 = (void*)0;
            const int64_t **l_136 = &l_135;
            (*l_72) = p_54;
            for (g_92 = 24; (g_92 <= (-2)); g_92--)
            {
                uint16_t *l_144 = (void*)0;
                uint16_t *l_145 = &g_121;
                int32_t *l_146 = &l_83;
                (*l_146) = (((*l_145) = g_94) == g_68);
            }
            for (l_129 = 0; (l_129 < 17); ++l_129)
            {
                int32_t *l_149 = &g_68;
                uint8_t *l_151 = &g_152;
                (*l_72) = ((*g_28) = l_149);
                (*g_29) = 0L;
                (*g_29) = ((+((*l_151) = (*l_73))) | 0xF431L);
            }
            l_153 = l_153;
        }
        else
        {
            int16_t l_183 = 0x6C13L;
            int64_t ***l_190 = &l_153;
            for (l_83 = 0; (l_83 >= 7); l_83 = safe_add_func_uint32_t_u_u(l_83, 9))
            {
                int32_t ****l_167 = &g_102;
                uint64_t *l_169 = (void*)0;
                uint16_t *l_170 = (void*)0;
                uint16_t *l_171 = &g_121;
                p_54 = (*g_28);
            }
            l_83 = (safe_sub_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(p_51, (safe_rshift_func_uint8_t_u_s(g_100, (!(((safe_add_func_uint8_t_u_u((l_183 >= ((safe_lshift_func_uint16_t_u_s(0xD3AFL, 3)) == (g_66 & (*g_4)))), (((safe_mul_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u(((&p_54 != &p_54) | (&l_153 == &l_153)), 255UL)) && 3UL), 9L)) <= l_83) ^ l_183))) <= 0xC7970BCDL) <= g_66)))))) >= 0x332C83D2L), g_66)), 0x4BL));
            (*l_190) = l_153;
        }
    }
    else
    {
        int32_t * const l_191 = &l_83;
        int32_t **l_192 = &g_29;
        int64_t **l_196 = &g_99;
        int64_t ***l_195 = &l_196;
        uint8_t l_199 = 0x08L;
        uint64_t *l_200 = &g_66;
        uint16_t *l_204 = &g_121;
        int32_t l_296 = 0xD07749A3L;
        const int16_t *l_403 = &g_212;
        const int16_t **l_402 = &l_403;
        (*l_192) = l_191;
    }
    if ((((safe_sub_func_int16_t_s_s(((*l_423) = ((*l_421) = ((*g_399) > (safe_lshift_func_int16_t_s_u(((*l_293) = ((safe_mod_func_int8_t_s_s(g_68, ((*g_399) || (g_286 != 0x5900L)))) != p_52)), (safe_lshift_func_int16_t_s_u((safe_add_func_int64_t_s_s((*g_99), (p_53 == &g_100))), g_286))))))), 0x92AEL)) ^ 65535UL) != p_51))
    {
        int32_t l_425 = 1L;
        int32_t *l_426 = (void*)0;
        g_68 = l_425;
    }
    else
    {
        int16_t l_437 = 0x90C8L;
        int32_t l_438 = (-8L);
        int32_t *l_439 = &l_83;
        (*l_439) = ((((safe_rshift_func_int16_t_s_u((((void*)0 != &g_29) & (safe_mul_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(g_346, (p_52 && (p_51 | (p_55 != &g_280))))), ((l_438 = ((safe_add_func_int64_t_s_s((((safe_lshift_func_int16_t_s_s((0x6D34L != 0xAF0FL), 12)) <= g_280) <= l_437), (*g_99))) || 65528UL)) && g_68)))), g_94)) == l_437) & p_51) && l_437);
        (*l_439) = (*p_55);
        (*l_439) = (*p_55);
    }
    (*l_440) = &p_54;
    return (*l_262);
}
static int32_t * func_57(const int32_t * p_58, uint64_t p_59, int64_t p_60, uint16_t p_61, uint64_t * p_62)
{
    int32_t *l_67 = &g_68;
    (*l_67) = (*g_29);
    return l_67;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_280, "g_280", print_hash_value);
    transparent_crc(g_286, "g_286", print_hash_value);
    transparent_crc(g_324, "g_324", print_hash_value);
    transparent_crc(g_346, "g_346", print_hash_value);
    transparent_crc(g_424, "g_424", print_hash_value);
    transparent_crc(g_579, "g_579", print_hash_value);
    transparent_crc(g_581, "g_581", print_hash_value);
    transparent_crc(g_584, "g_584", print_hash_value);
    transparent_crc(g_626, "g_626", print_hash_value);
    transparent_crc(g_702, "g_702", print_hash_value);
    transparent_crc(g_859, "g_859", print_hash_value);
    transparent_crc(g_1032, "g_1032", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
