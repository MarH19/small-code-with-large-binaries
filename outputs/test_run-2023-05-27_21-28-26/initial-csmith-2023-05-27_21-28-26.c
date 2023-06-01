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
static uint16_t g_16 = 65532U;
static int32_t g_17 = 0x6D0374C7;
static uint16_t * const g_21 = (void*)0;
static int32_t g_23 = 6;
static uint8_t g_32 = 0x0E;
static int16_t g_69 = 0x922C;
static int32_t g_84 = 0xE69C17F7;
static uint8_t g_136 = 250U;
static int8_t g_141 = 0;
static uint8_t *g_145 = &g_136;
static uint8_t **g_144 = &g_145;
static uint8_t ***g_143 = &g_144;
static uint8_t ***g_149 = &g_144;
static int32_t g_201 = 0;
static uint8_t g_205 = 0x9F;
static uint32_t g_222 = 2U;
static int8_t g_233 = 0xB3;
static uint32_t g_257 = 3U;
static int16_t g_307 = 0x1E10;
static int32_t g_321 = 0;
static uint32_t g_334 = 0xAEC03ACE;
static int32_t *g_338 = &g_23;
static int32_t **g_337 = &g_338;
static uint16_t g_359 = 0x640A;
static uint32_t g_414 = 0x37E68031;
static const uint16_t *g_422 = (void*)0;
static const uint16_t ** const g_421 = &g_422;
static const uint16_t ** const *g_420 = &g_421;
static uint16_t g_464 = 0x78B8;
static int32_t g_506 = 2;
static int16_t g_507 = 0xA81A;
static uint32_t g_519 = 0U;
static uint16_t g_523 = 0x01D6;
static uint32_t g_605 = 0U;
static uint32_t g_664 = 4294967291U;
static uint8_t g_668 = 0x85;
static int32_t g_832 = 0;
static uint32_t g_855 = 0xA73329E7;
static int32_t g_886 = 0x17D0DB72;
static uint16_t g_962 = 0x366F;
static int32_t ***g_972 = &g_337;
static int32_t ****g_971 = &g_972;
static uint16_t g_1010 = 1U;
static int32_t g_1121 = 0x5163A10B;
static int16_t g_1123 = (-3);
static int32_t g_1148 = (-1);
static uint32_t g_1187 = 0x3E67121B;
static const int16_t ** const *g_1207 = (void*)0;
static const int16_t ** const **g_1206 = &g_1207;
static const int16_t ** const ** const *g_1205 = &g_1206;
static int8_t g_1289 = 0;
static int16_t g_1295 = 0x2241;
static uint8_t g_1321 = 0xFC;
static uint32_t *g_1331 = (void*)0;
static uint32_t **g_1330 = &g_1331;
static uint32_t *g_1363 = (void*)0;
static uint8_t g_1521 = 0U;
static int16_t g_1527 = 1;
static const int32_t *g_1545 = (void*)0;
static int32_t g_1559 = (-1);
static const int8_t *g_1606 = &g_233;
static const int8_t **g_1605 = &g_1606;
static int16_t * const g_1651 = &g_69;
static int16_t * const *g_1650 = &g_1651;
static int16_t g_1654 = 0;
static const int16_t *g_1682 = &g_1123;
static const int16_t * const *g_1681 = &g_1682;
static uint32_t g_1718 = 0x4075C5F5;
static uint8_t g_1815 = 0x89;
static int8_t g_1828 = 0x93;
static int32_t g_1862 = 0x042EDB77;
static uint32_t g_1870 = 4294967295U;
static int16_t g_1894 = 0x1817;
static uint8_t g_1928 = 0x8A;
static uint8_t g_1936 = 0U;
static uint16_t *g_1957 = (void*)0;
static uint32_t g_2032 = 0x91402598;
static uint8_t g_2060 = 0x0F;
static const int8_t g_2120 = 1;
static int32_t g_2157 = 0;
static uint16_t **g_2230 = &g_1957;
static uint16_t ***g_2229 = &g_2230;
static uint16_t ****g_2228 = &g_2229;
static uint32_t func_1(void);
static int32_t func_2(int32_t p_3, const int32_t p_4, int16_t p_5, int32_t p_6, int32_t p_7);
static const int32_t func_9(uint16_t p_10, const uint32_t p_11, int32_t p_12, uint32_t p_13);
static uint8_t func_18(uint16_t * const p_19, int32_t p_20);
static int32_t * func_41(int32_t p_42, uint8_t p_43, int32_t * p_44, uint16_t * p_45, uint16_t * p_46);
static uint8_t func_49(int32_t p_50, uint8_t p_51);
static int32_t func_52(uint16_t * p_53);
static uint16_t * func_54(int8_t p_55, uint32_t p_56, int32_t * p_57);
static uint32_t func_59(int32_t * p_60, int16_t p_61, int32_t * p_62, uint8_t p_63);
static int32_t * func_64(uint8_t p_65);
static uint32_t func_1(void)
{
    uint16_t l_8 = 0U;
    uint16_t *l_14 = (void*)0;
    uint16_t *l_15 = &g_16;
    int32_t l_39 = 0x26C71534;
    uint16_t l_40 = 0xDA2A;
    int32_t *l_1940 = &g_1862;
    const uint32_t l_1979 = 0x7D5C17BE;
    const int32_t l_2021 = (-5);
    int8_t *l_2105 = &g_1289;
    int8_t **l_2104 = &l_2105;
    int32_t l_2109 = 1;
    int32_t l_2147 = 0xBC9C02F7;
    int32_t * const *l_2245 = &g_338;
    int32_t * const **l_2244 = &l_2245;
    int32_t * const ***l_2243 = &l_2244;
    int32_t l_2246 = 0x19F3252B;
    uint32_t **l_2258 = &g_1363;
    int32_t l_2293 = 0;
    uint16_t l_2304 = 0U;
    int32_t l_2328 = 0x86D858C8;
    int32_t *l_2329 = (void*)0;
    uint8_t l_2342 = 0x62;
    return l_2342;
}
static int32_t func_2(int32_t p_3, const int32_t p_4, int16_t p_5, int32_t p_6, int32_t p_7)
{
    int32_t l_1704 = 0;
    const int32_t l_1730 = 0x1939B895;
    const int16_t ** const l_1741 = &g_1682;
    const int16_t ** const *l_1740 = &l_1741;
    int32_t **l_1789 = (void*)0;
    uint16_t l_1791 = 0x5BA3;
    int32_t ***l_1886 = &l_1789;
    uint16_t l_1929 = 0x367C;
    uint16_t l_1939 = 0xC13B;
    if (l_1704)
    {
        uint16_t *l_1705 = (void*)0;
        int32_t l_1719 = 0x4515A079;
        int8_t *l_1723 = &g_233;
        int16_t *l_1731 = (void*)0;
        int16_t *l_1732 = &g_1654;
        int32_t l_1755 = 0x4F0F74AD;
        int32_t **l_1790 = &g_338;
        (***g_972) = (l_1705 == ((**g_420) = l_1705));
        for (g_257 = (-17); (g_257 >= 58); g_257 = safe_add_func_uint8_t_u_u(g_257, 8))
        {
            (***g_971) = &l_1704;
        }
        if ((safe_lshift_func_int16_t_s_s(((*l_1732) = ((safe_lshift_func_int8_t_s_s(((p_3 > ((****g_971) ^= (safe_unary_minus_func_uint8_t_u((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((!g_1718), 10)), ((*g_1651) = l_1719))))))) != ((safe_rshift_func_uint16_t_u_s((!((*l_1723) = (((*g_1205) != (*g_1205)) ^ (0x34 & l_1719)))), (safe_mul_func_int8_t_s_s((p_6 <= (safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s((-1), l_1730)), 2))), (*g_145))))) == 255U)), l_1730)) < l_1719)), 1)))
        {
            uint16_t *l_1750 = &g_359;
            uint16_t l_1771 = 0xDCD3;
            uint8_t *l_1788 = &g_1321;
            int32_t *l_1792 = &g_84;
            for (p_7 = 17; (p_7 < 22); p_7 = safe_add_func_uint8_t_u_u(p_7, 6))
            {
                int32_t l_1739 = (-7);
                int32_t *l_1742 = &g_84;
                uint16_t *l_1749 = &g_962;
                uint32_t l_1772 = 0xCE444D7C;
                (*l_1742) &= (((**g_337) ^= (((*g_1651) ^= ((((safe_mul_func_int16_t_s_s(((0xB4157F29 >= (p_5 | (safe_lshift_func_int8_t_s_u(p_7, ((***g_149) ^= l_1739))))) ^ p_7), (l_1740 == (void*)0))) ^ (l_1719 & (*g_1606))) || 7) < l_1739)) | (-1))) && p_5);
                (****g_971) = ((*l_1742) &= (safe_add_func_int8_t_s_s(l_1719, ((l_1723 != (**g_143)) > ((safe_lshift_func_int8_t_s_u(0xAD, p_6)) | (safe_div_func_int16_t_s_s(((l_1755 ^= ((*l_1732) = (((**g_420) == (l_1750 = l_1749)) & ((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((((**g_1650) &= p_7) && p_7), p_3)), p_6)) > l_1704)))) >= l_1719), (**g_1681))))))));
                if (l_1719)
                    continue;
                (*g_338) = (safe_div_func_int16_t_s_s(0xAB45, (safe_div_func_int16_t_s_s((((((***g_149) || (((void*)0 != l_1723) != ((p_6 >= ((~(safe_div_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(((****g_971) != l_1771), l_1772)), (safe_sub_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((**g_337) | 0x098E78F2), (*l_1742))), 0xCB99)))), (*l_1742)))) < (*g_145))) <= p_4))) > 0x0E) & l_1719) <= (*g_1606)), (**g_1650)))));
            }
            (*l_1792) |= ((0xE5348C8D & ((**g_337) = p_4)) || (0U || ((***g_149) = ((safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((**g_144), l_1771)), (~(safe_div_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u(p_6, 6)) != (((*l_1788) = (safe_rshift_func_int16_t_s_u(0x91CD, 7))) == (((**g_971) = l_1789) == l_1790))), l_1791))))) >= (**g_144)))));
        }
        else
        {
            uint16_t **l_1796 = &l_1705;
            uint16_t ***l_1795 = &l_1796;
            uint16_t ***l_1797 = (void*)0;
            uint16_t **l_1799 = &l_1705;
            uint16_t ***l_1798 = &l_1799;
            int32_t *l_1802 = &g_23;
            int32_t *l_1803 = &g_84;
            int32_t l_1804 = 1;
            int32_t *l_1805 = &g_23;
            int32_t *l_1806 = &g_23;
            int32_t *l_1807 = &g_1121;
            int32_t *l_1808 = (void*)0;
            int32_t *l_1809 = &g_23;
            int32_t *l_1810 = (void*)0;
            int32_t *l_1811 = &l_1719;
            int32_t *l_1812 = (void*)0;
            int32_t *l_1813 = &l_1755;
            int32_t *l_1814 = &g_23;
            (*l_1802) ^= (safe_mul_func_int16_t_s_s(((((*l_1798) = ((*l_1795) = &l_1705)) == (*g_420)) || p_5), (0x84 >= (((safe_sub_func_int8_t_s_s(0xF1, (**l_1790))) ^ ((0x6501A0B0 && 0x1E28C66C) != 1)) < p_5))));
            g_1815++;
            (*g_337) = func_64(((*l_1811) |= ((0x86 != (safe_div_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((-1))), (--(***g_143))))) || 0xB0)));
        }
        (**l_1790) &= 0;
    }
    else
    {
        int8_t l_1823 = (-1);
        int32_t *l_1824 = (void*)0;
        int32_t *l_1825 = &g_1121;
        int32_t l_1826 = (-1);
        int32_t *l_1827 = &g_1121;
        int32_t *l_1829 = &g_1121;
        int32_t *l_1830 = &l_1704;
        int32_t *l_1831 = &l_1826;
        int32_t *l_1832 = &g_1121;
        int32_t *l_1833 = &g_84;
        int32_t *l_1834 = &l_1704;
        int32_t *l_1835 = &g_84;
        int32_t *l_1836 = &l_1826;
        int32_t *l_1837 = &g_84;
        int32_t *l_1838 = &g_1121;
        int32_t *l_1839 = &g_84;
        int32_t *l_1840 = (void*)0;
        int32_t *l_1841 = &l_1704;
        int32_t *l_1842 = &l_1704;
        int32_t *l_1843 = &g_84;
        int32_t *l_1844 = &g_84;
        int32_t *l_1845 = &l_1826;
        int32_t *l_1846 = (void*)0;
        int32_t *l_1847 = (void*)0;
        int32_t *l_1848 = (void*)0;
        int32_t *l_1849 = &g_1121;
        int32_t *l_1850 = (void*)0;
        int32_t *l_1851 = &g_1121;
        int32_t l_1852 = 1;
        int32_t *l_1853 = &l_1704;
        int32_t *l_1854 = &l_1826;
        int32_t *l_1855 = (void*)0;
        int32_t *l_1856 = &g_1121;
        int32_t *l_1857 = &g_1121;
        int32_t *l_1858 = &l_1826;
        int32_t l_1859 = (-1);
        int32_t *l_1860 = &l_1852;
        int32_t *l_1861 = &l_1704;
        int32_t *l_1863 = &g_23;
        int32_t *l_1864 = (void*)0;
        int32_t *l_1865 = &l_1859;
        int32_t *l_1866 = &l_1826;
        int32_t *l_1867 = &l_1704;
        int32_t *l_1868 = &l_1704;
        int32_t *l_1869 = &g_1862;
        int32_t ***l_1883 = (void*)0;
        int32_t ****l_1884 = (void*)0;
        int32_t ****l_1885 = &l_1883;
        int16_t *l_1906 = (void*)0;
        int16_t **l_1905 = &l_1906;
        int16_t **l_1907 = &l_1906;
        g_1870++;
        (*l_1845) ^= (safe_lshift_func_int8_t_s_u(p_5, (((safe_mul_func_int8_t_s_s(((safe_div_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((*l_1843), (**g_1681))), (-1))) && (safe_div_func_uint8_t_u_u((((*g_971) == (l_1886 = ((*l_1885) = l_1883))) || 0xFA), (safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s((safe_rshift_func_uint8_t_u_u((0x6E1D < (safe_add_func_int32_t_s_s((((0xE25325D0 ^ p_5) || (*g_145)) ^ g_1894), 0x7C4DBFE3))), (*g_145))))), 4))))), 0x91)) != g_1870) && 6U)));
        if ((****g_971))
        {
            const uint16_t **l_1897 = &g_422;
            int8_t *l_1908 = &g_1289;
            const int32_t l_1909 = (-1);
            (*g_337) = (void*)0;
            (*g_337) = (***g_971);
            (*l_1835) ^= (safe_mod_func_uint32_t_u_u((((void*)0 != l_1897) | (safe_sub_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(((safe_add_func_int16_t_s_s((~(1 <= ((l_1905 == l_1907) == 0xA8F85CE0))), ((((*l_1908) |= p_4) >= ((p_4 == l_1909) <= 0xB1DD)) || 0x38BC69F5))) != p_7), 0xC6FC)), p_3))), 0x31A26C63));
        }
        else
        {
            uint32_t l_1910 = 4294967295U;
            const int16_t * const ***l_1927 = (void*)0;
            int32_t l_1930 = (-1);
            int32_t l_1931 = 0x04450F81;
            int32_t *l_1932 = &g_23;
            int32_t *l_1933 = (void*)0;
            int32_t *l_1934 = &l_1859;
            int32_t *l_1935 = &l_1931;
            l_1910++;
            l_1929 &= ((safe_mul_func_uint16_t_u_u(((~((*l_1868) |= (*g_338))) > ((0x025F4A42 >= (safe_add_func_int16_t_s_s((safe_div_func_int8_t_s_s((!(safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(p_5, 2)), 0x77177484))), (safe_div_func_uint32_t_u_u((((*l_1844) >= ((l_1927 == (void*)0) != l_1910)) | (((*g_145) = (((g_1928 ^ (*l_1839)) && p_7) && 1)) && 0x06)), (*l_1837))))), (-1)))) >= (*l_1856))), p_3)) >= p_6);
            --g_1936;
        }
    }
    return l_1939;
}
static const int32_t func_9(uint16_t p_10, const uint32_t p_11, int32_t p_12, uint32_t p_13)
{
    uint8_t l_58 = 0U;
    int8_t l_66 = 0x25;
    int16_t *l_67 = (void*)0;
    int16_t *l_68 = &g_69;
    int32_t *l_70 = &g_23;
    uint8_t *l_71 = &g_32;
    int32_t *l_1607 = &g_1121;
    (*g_337) = func_41((((safe_add_func_uint8_t_u_u(func_49((func_52(func_54(l_58, func_59(func_64(g_16), ((*l_68) = l_66), (l_70 = func_64((&p_10 != (void*)0))), ((*l_71)--)), (*g_337))) != l_58), l_66), l_58)) >= 0x1F96) || 0x24BF), p_13, l_1607, &g_523, &g_523);
    return (*l_1607);
}
static uint8_t func_18(uint16_t * const p_19, int32_t p_20)
{
    int32_t *l_22 = &g_23;
    int32_t *l_24 = (void*)0;
    int32_t *l_25 = &g_23;
    int32_t *l_26 = &g_23;
    int32_t *l_27 = &g_23;
    int32_t *l_28 = &g_23;
    int32_t l_29 = 0x372BA29F;
    int32_t *l_30 = &l_29;
    int32_t *l_31 = &l_29;
    uint16_t l_36 = 5U;
lbl_35:
    --g_32;
    (*l_26) = g_17;
    if (g_32)
        goto lbl_35;
    return l_36;
}
static int32_t * func_41(int32_t p_42, uint8_t p_43, int32_t * p_44, uint16_t * p_45, uint16_t * p_46)
{
    uint32_t l_1608 = 0xC2E81AB7;
    const int16_t ****l_1615 = (void*)0;
    const int16_t *****l_1614 = &l_1615;
    uint32_t *l_1622 = &g_222;
    uint32_t l_1623 = 5U;
    int16_t *** const l_1641 = (void*)0;
    int16_t *** const *l_1640 = &l_1641;
    int32_t **l_1647 = (void*)0;
    int32_t l_1648 = (-2);
    int16_t * const l_1653 = &g_1654;
    int16_t * const *l_1652 = &l_1653;
    int32_t l_1655 = 0xE55DE06C;
    int32_t l_1677 = 0x683DAFBF;
    l_1608 ^= 0x5AD8C0ED;
    if ((0xB4A54FAF > (((~p_43) || (safe_add_func_uint8_t_u_u(((((l_1623 = (safe_mod_func_int32_t_s_s(((*p_44) |= ((l_1614 = l_1614) != &l_1615)), (safe_add_func_uint8_t_u_u(((-4) && (((safe_mul_func_int16_t_s_s(((*p_46) < p_42), (0 >= ((safe_div_func_uint32_t_u_u(((*l_1622) = p_42), l_1608)) ^ l_1608)))) < l_1608) <= p_42)), p_43))))) ^ (-3)) && (*p_44)) || p_43), l_1608))) >= 0x3C91)))
    {
        int16_t *l_1639 = &g_1295;
        int16_t **l_1638 = &l_1639;
        int16_t ***l_1637 = &l_1638;
        int16_t ****l_1636 = &l_1637;
        int16_t *** const **l_1642 = &l_1640;
        int32_t l_1643 = 3;
        int8_t *l_1649 = &g_141;
        g_23 &= (safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(0xC615, 4)), ((safe_sub_func_int16_t_s_s((safe_div_func_int32_t_s_s((safe_sub_func_int8_t_s_s(((safe_div_func_int16_t_s_s(((**l_1638) = (((l_1636 != ((*l_1642) = l_1640)) || l_1643) ^ (safe_mod_func_int8_t_s_s((!((l_1647 == (**g_971)) & ((((*p_44) &= (((**g_144) = l_1648) < ((*l_1649) &= (*g_1606)))) | (((l_1652 = g_1650) == (**l_1636)) || p_42)) && p_43))), p_43)))), 0xB1A4)) < (*p_45)), 0x38)), l_1643)), p_42)) <= l_1655)));
    }
    else
    {
        uint16_t *l_1661 = &g_523;
        uint16_t **l_1660 = &l_1661;
        uint16_t ***l_1659 = &l_1660;
        uint16_t ****l_1658 = &l_1659;
        int32_t l_1670 = 0xC968731D;
        uint16_t l_1678 = 1U;
        int16_t *l_1680 = &g_507;
        int16_t **l_1679 = &l_1680;
        int32_t *l_1703 = &g_84;
        l_1678 = ((safe_div_func_uint8_t_u_u(((p_42 | ((void*)0 == l_1658)) < (*p_44)), (safe_mod_func_int16_t_s_s(p_42, ((safe_mul_func_int16_t_s_s((safe_div_func_int32_t_s_s(((((safe_add_func_uint32_t_u_u(l_1670, (safe_mod_func_int16_t_s_s(((p_42 < p_43) == (safe_mul_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(251U, (**g_144))), 5))), 65534U)))) >= 4294967295U) == (*p_44)) & p_43), l_1670)), (*p_45))) & (*p_46)))))) <= l_1677);
        (*l_1703) ^= ((l_1679 == (g_1681 = g_1681)) < (((*p_45) >= (**g_1650)) < (((safe_div_func_uint8_t_u_u((((*p_44) &= (safe_unary_minus_func_uint16_t_u(0xAD8F))) & (safe_lshift_func_uint8_t_u_u((((**l_1679) = (safe_mul_func_uint16_t_u_u(((((*g_971) = (*g_971)) != (void*)0) >= l_1670), (safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_div_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((**g_144) = (!p_43)), (*g_1606))), 0x0322)), (*p_45))) < p_43) < l_1678), 0xE2)), (*g_1606))), 0x9F))))) | (*p_46)), p_42))), p_42)) || (*g_1606)) <= (*g_1606))));
    }
    return p_44;
}
static uint8_t func_49(int32_t p_50, uint8_t p_51)
{
    uint32_t l_1340 = 0xEE0FD75B;
    uint16_t l_1357 = 0U;
    int16_t *l_1377 = &g_507;
    int16_t * const *l_1376 = &l_1377;
    int16_t * const **l_1375 = &l_1376;
    int16_t * const ***l_1374 = &l_1375;
    int32_t l_1398 = 0xD999E4C7;
    int8_t l_1526 = (-1);
    uint16_t *** const l_1598 = (void*)0;
    uint16_t *** const *l_1597 = &l_1598;
    int32_t *l_1602 = &l_1398;
    const int8_t *l_1604 = &l_1526;
    const int8_t **l_1603 = &l_1604;
    if (p_50)
    {
        int8_t *l_1335 = (void*)0;
        int8_t *l_1336 = &g_141;
        int8_t *l_1337 = &g_1289;
        int32_t l_1341 = (-9);
        int32_t l_1406 = 0;
        int8_t l_1449 = 0x0E;
        int32_t l_1502 = (-1);
        int32_t l_1520 = 0xE732C784;
        uint16_t ***l_1567 = (void*)0;
        uint16_t ****l_1566 = &l_1567;
        int16_t *** const l_1576 = (void*)0;
        if ((((0xDFDC2CC8 || 4) && (((safe_add_func_int8_t_s_s(((*l_1337) &= ((*l_1336) = g_1187)), p_50)) | ((((safe_mul_func_int32_t_s_s((((l_1340 > p_51) != l_1340) & 253U), (g_359 > 0x0F))) && l_1340) != l_1341) != (**g_144))) && p_51)) | l_1340))
        {
            uint8_t l_1353 = 0xE2;
            int16_t *l_1356 = &g_1123;
            uint32_t *l_1361 = &g_222;
            uint8_t **l_1371 = &g_145;
            int32_t l_1389 = 7;
            int32_t l_1390 = 0;
            uint32_t l_1397 = 0xEBA664F7;
            uint32_t l_1413 = 0x93E3C792;
            int32_t *l_1581 = (void*)0;
            int32_t *l_1582 = &l_1341;
lbl_1563:
            if ((g_1289 & (safe_sub_func_int8_t_s_s((~(safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((safe_sub_func_uint32_t_u_u(p_50, (p_50 != ((+p_51) != (l_1353 <= ((((l_1340 ^ (0x2B520E33 != ((void*)0 == l_1356))) > l_1353) & l_1340) | 0x36)))))))), 0xD6)), g_1289))), l_1357))))
            {
                uint32_t **l_1362 = (void*)0;
                int16_t ** const *l_1373 = (void*)0;
                int16_t ** const **l_1372 = &l_1373;
                int32_t l_1381 = 0;
                uint32_t l_1416 = 7U;
                int32_t *l_1450 = &l_1406;
                int32_t *l_1452 = &l_1381;
                int32_t *l_1453 = &l_1390;
                int32_t *l_1454 = &l_1341;
                int32_t *l_1455 = &g_23;
                int32_t *l_1456 = &l_1390;
                int32_t *l_1457 = &g_84;
                int32_t *l_1458 = &g_84;
                int32_t *l_1459 = (void*)0;
                int32_t *l_1460 = &l_1389;
                int32_t *l_1461 = &g_1121;
                int32_t *l_1462 = &l_1390;
                int32_t *l_1463 = &l_1390;
                int32_t *l_1464 = &g_23;
                int32_t *l_1465 = &l_1341;
                int32_t *l_1466 = &l_1381;
                int32_t *l_1467 = &g_84;
                int32_t *l_1468 = &l_1398;
                int32_t *l_1469 = &l_1381;
                int32_t *l_1470 = &l_1381;
                int32_t *l_1471 = &l_1390;
                int32_t *l_1472 = &g_1121;
                int32_t *l_1473 = &g_23;
                int32_t *l_1474 = &l_1389;
                int32_t *l_1475 = &l_1398;
                int32_t *l_1476 = &l_1406;
                int32_t *l_1477 = &l_1390;
                int32_t *l_1478 = &l_1406;
                int32_t *l_1479 = &l_1381;
                int32_t *l_1480 = &l_1390;
                int32_t *l_1481 = &g_84;
                int32_t *l_1482 = &l_1381;
                int32_t *l_1483 = &g_1121;
                int32_t *l_1484 = &l_1381;
                int32_t *l_1485 = &l_1389;
                int32_t *l_1486 = &g_23;
                int32_t *l_1487 = (void*)0;
                int32_t *l_1488 = &g_84;
                int32_t *l_1489 = &g_84;
                int32_t *l_1490 = &l_1389;
                int32_t *l_1491 = &l_1381;
                int32_t *l_1492 = &l_1341;
                int32_t *l_1493 = &l_1381;
                int32_t *l_1494 = &l_1381;
                int32_t *l_1495 = &l_1390;
                int32_t *l_1496 = &l_1398;
                int32_t *l_1497 = &l_1381;
                int32_t *l_1498 = &g_1121;
                int32_t *l_1499 = &l_1381;
                int32_t *l_1500 = &l_1389;
                int32_t *l_1501 = &g_23;
                int32_t *l_1503 = &l_1389;
                int32_t *l_1504 = &l_1398;
                int32_t *l_1505 = &g_1121;
                int32_t *l_1506 = (void*)0;
                int32_t *l_1507 = (void*)0;
                int32_t *l_1508 = &l_1406;
                int32_t *l_1509 = (void*)0;
                int32_t *l_1510 = (void*)0;
                int32_t *l_1511 = (void*)0;
                int32_t *l_1512 = &l_1406;
                int32_t l_1513 = 0x03EF6882;
                int32_t l_1514 = 0xABE4BC39;
                int32_t *l_1515 = &l_1390;
                int32_t *l_1516 = &g_1121;
                int32_t *l_1517 = &l_1389;
                int32_t *l_1518 = &l_1514;
                int32_t *l_1519 = &l_1514;
lbl_1451:
                if ((+(safe_add_func_int32_t_s_s((((*g_1330) = func_64((*g_145))) == (g_1363 = l_1361)), l_1353))))
                {
                    int8_t l_1368 = 0x6B;
                    int32_t *l_1378 = &l_1341;
                    uint8_t *l_1391 = (void*)0;
                    uint8_t *l_1392 = &g_1321;
                    (*l_1378) |= (safe_mul_func_int16_t_s_s((l_1368 >= (l_1340 != (safe_mul_func_uint16_t_u_u(1U, (((((void*)0 == l_1371) > p_50) != (l_1372 != l_1374)) <= p_51))))), p_50));
                    l_1398 |= ((safe_mul_func_uint16_t_u_u(((*g_145) | ((l_1340 >= (p_51 = l_1381)) < (safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((p_50 && ((-1) ^ (!((safe_mod_func_int8_t_s_s(p_50, l_1357)) & (g_141 = g_523))))), ((++(*l_1392)) != (safe_lshift_func_int8_t_s_u((((*l_1377) = ((***g_143) != (**g_144))) && p_50), l_1397))))), 0xD7AC)))), 0x7F48)) >= 3);
                    (*l_1378) &= (((***g_149) = (+(+0xA7))) && ((~(safe_sub_func_int8_t_s_s(g_359, g_257))) <= l_1397));
                    l_1390 &= (1U <= p_50);
                }
                else
                {
                    int32_t *l_1404 = &g_84;
                    int32_t *l_1405 = &g_23;
                    int32_t *l_1407 = (void*)0;
                    int32_t *l_1408 = &l_1406;
                    int32_t *l_1409 = (void*)0;
                    int32_t *l_1410 = &l_1406;
                    int32_t *l_1411 = &l_1406;
                    int32_t *l_1412 = &l_1341;
                    (*l_1404) = p_50;
lbl_1422:
                    l_1413--;
                    if (l_1416)
                    {
                        uint16_t *l_1418 = &g_359;
                        uint16_t ** const l_1417 = &l_1418;
                        uint16_t ***l_1419 = (void*)0;
                        uint16_t **l_1421 = &l_1418;
                        uint16_t ***l_1420 = &l_1421;
                        (*l_1420) = l_1417;
                        (*l_1404) = l_1413;
                        if (l_1357)
                            goto lbl_1422;
                        p_50 |= 0x2F56605E;
                    }
                    else
                    {
                        int32_t *l_1423 = (void*)0;
                        int32_t **l_1424 = &l_1408;
                        uint32_t ** const l_1428 = &g_1331;
                        uint16_t *l_1446 = (void*)0;
                        uint16_t *l_1447 = &l_1357;
                        const uint16_t l_1448 = 0xE6E9;
                        (*l_1424) = ((**g_972) = l_1423);
                        if (l_1398)
                            goto lbl_1425;
                        if (p_51)
                            goto lbl_1425;
lbl_1425:
                        (*l_1404) &= 3;
                        (*l_1412) = ((*l_1411) &= p_51);
                        l_1449 ^= ((safe_mul_func_uint8_t_u_u(((void*)0 != l_1428), (l_1390 = 0xA4))) && ((safe_mul_func_int16_t_s_s(((!(((l_1406 ^ 0x9E80) & ((*l_1377) = ((safe_div_func_uint32_t_u_u(((((safe_div_func_uint32_t_u_u((*g_1331), ((safe_div_func_uint32_t_u_u((**g_1330), (p_50 = (g_307 & (safe_div_func_int8_t_s_s((safe_sub_func_int8_t_s_s((safe_div_func_int16_t_s_s((((*l_1447) |= (((*l_1361)--) ^ l_1416)) | p_50), g_257)), (***g_149))), l_1416)))))) | 65535U))) || p_50) ^ 0x29) | l_1413), l_1448)) || (*l_1412)))) | l_1389)) || (*g_1331)), l_1340)) == g_321));
                    }
                }
                (*l_1450) &= 0xBE24593B;
                if (l_1357)
                    goto lbl_1451;
                if (l_1389)
                    goto lbl_1563;
                g_1521++;
            }
            else
            {
                uint8_t l_1554 = 0x21;
                int32_t l_1557 = 0x84AA08C3;
                int32_t ****l_1560 = &g_972;
                if (l_1449)
                {
                    int32_t l_1530 = (-1);
                    int32_t *l_1531 = &g_84;
                    for (g_1123 = 4; (g_1123 != (-14)); g_1123 = safe_sub_func_int16_t_s_s(g_1123, 1))
                    {
                        p_50 ^= 0x99F3E0EF;
                        return l_1526;
                    }
                    l_1390 = ((*l_1531) = (g_1527 != (p_51 = (safe_lshift_func_int8_t_s_u((p_51 == l_1530), 4)))));
                    return (***g_143);
                }
                else
                {
                    int32_t l_1546 = 0x46D844EC;
                    uint16_t *l_1555 = (void*)0;
                    uint16_t *l_1556 = &g_962;
                    uint16_t *l_1558 = &g_16;
                    int32_t *****l_1561 = &g_971;
                    int32_t *l_1562 = &l_1520;
                    p_50 = (safe_add_func_uint32_t_u_u((safe_div_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((!(l_1341 = (0x3F < 6))), (safe_mul_func_int8_t_s_s(((*l_1337) &= ((*l_1336) |= (((*l_1558) ^= (((g_1545 = &p_50) != &p_50) && ((l_1557 &= ((*l_1556) |= ((l_1546 < p_51) != (((*l_1361) = (safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((~(safe_rshift_func_int16_t_s_s(((*l_1377) = (l_1554 != p_50)), 6))) > p_51), l_1340)), l_1546))) == p_51)))) || p_51))) > l_1353))), l_1502)))) <= p_50), p_50)) || p_50), p_50)), l_1554)), g_1559));
                    (*l_1562) = ((((*l_1561) = l_1560) != &g_972) <= ((p_50 < g_1187) ^ 0x3E5D));
                }
            }
            (*l_1582) ^= (safe_rshift_func_int16_t_s_s(((void*)0 != l_1566), (((safe_sub_func_int8_t_s_s(l_1520, ((*l_1336) = (g_233 = (((safe_add_func_int16_t_s_s((&l_1361 != &g_1331), (+l_1526))) ^ ((((safe_sub_func_int32_t_s_s(((((safe_unary_minus_func_int32_t_s(((void*)0 == l_1576))) < (((safe_mod_func_uint16_t_u_u((((~(+(p_51 | 0x76))) > l_1340) > 0x7AF5D996), l_1502)) == p_51) == l_1449)) < l_1520) == 0x04), p_50)) & p_50) >= p_50) ^ p_50)) | 1))))) || (-1)) && (*g_145))));
        }
        else
        {
            int16_t **l_1588 = &l_1377;
            int16_t ***l_1587 = &l_1588;
            const int16_t *l_1594 = &g_507;
            const int16_t **l_1593 = &l_1594;
            for (g_464 = (-24); (g_464 == 22); g_464 = safe_add_func_uint16_t_u_u(g_464, 5))
            {
                int16_t ***l_1589 = &l_1588;
                int32_t *l_1592 = &l_1520;
                const int16_t ***l_1595 = (void*)0;
                const int16_t ***l_1596 = (void*)0;
                (*l_1592) ^= (safe_rshift_func_uint16_t_u_s((l_1576 == (l_1589 = l_1587)), (l_1341 < (safe_div_func_int8_t_s_s((-5), 1U)))));
                if (l_1340)
                    continue;
                l_1593 = l_1593;
            }
        }
    }
    else
    {
        return p_50;
    }
    l_1597 = (void*)0;
    (*l_1602) = ((l_1357 || (safe_rshift_func_uint8_t_u_u(l_1398, 7))) | (safe_unary_minus_func_uint8_t_u((&l_1374 != &l_1374))));
    g_1605 = l_1603;
    return (*g_145);
}
static int32_t func_52(uint16_t * p_53)
{
    const int32_t l_1196 = (-4);
    int16_t *l_1199 = (void*)0;
    int16_t *l_1200 = &g_507;
    int16_t **l_1211 = &l_1200;
    int16_t ***l_1210 = &l_1211;
    int16_t ****l_1209 = &l_1210;
    int16_t *****l_1208 = &l_1209;
    int32_t l_1218 = 0x3AD00EBC;
    int32_t l_1242 = (-1);
    int32_t l_1244 = 1;
    int32_t l_1259 = (-7);
    int32_t l_1261 = (-1);
    int32_t l_1305 = 0xE048F130;
    int32_t l_1315 = 0xAE1EC526;
    int32_t l_1320 = 0x1184ACFF;
    if ((safe_lshift_func_int16_t_s_s((((safe_div_func_uint16_t_u_u(l_1196, (safe_mul_func_int16_t_s_s(((*l_1200) |= 0xB25A), (l_1196 & ((safe_rshift_func_uint8_t_u_u((safe_div_func_int16_t_s_s((g_1205 != l_1208), (safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(l_1196, 3)), 5)))), (safe_mod_func_uint32_t_u_u(l_1196, 0x034F3DC3)))) == l_1196)))))) > l_1196) >= (**g_337)), 14)))
    {
        const int32_t l_1220 = (-1);
        int32_t *l_1221 = &g_23;
        int32_t *l_1222 = &l_1218;
        int32_t *l_1223 = (void*)0;
        int32_t l_1224 = (-5);
        int32_t *l_1225 = &g_84;
        int32_t *l_1226 = &l_1218;
        int32_t *l_1227 = &g_84;
        int32_t *l_1228 = &g_23;
        int32_t *l_1229 = &g_1121;
        int32_t *l_1230 = &l_1218;
        int32_t *l_1231 = &l_1224;
        int32_t *l_1232 = &l_1218;
        int32_t l_1233 = (-1);
        int32_t *l_1234 = &g_84;
        int32_t *l_1235 = (void*)0;
        int32_t *l_1236 = &g_1121;
        int32_t *l_1237 = &g_23;
        int32_t *l_1238 = (void*)0;
        int32_t *l_1239 = &l_1233;
        int32_t *l_1240 = &g_84;
        int32_t *l_1241 = (void*)0;
        int32_t *l_1243 = &l_1218;
        int32_t *l_1245 = &l_1233;
        int32_t *l_1246 = &l_1233;
        int32_t *l_1247 = &g_23;
        int32_t *l_1248 = &l_1224;
        int32_t *l_1249 = &l_1242;
        int32_t *l_1250 = &l_1244;
        int32_t *l_1251 = (void*)0;
        int32_t *l_1252 = &l_1233;
        int32_t *l_1253 = &l_1218;
        int32_t *l_1254 = (void*)0;
        int32_t *l_1255 = &l_1233;
        int32_t *l_1256 = &g_1121;
        int32_t *l_1257 = &l_1244;
        int32_t l_1258 = 0x2B7866E1;
        int32_t *l_1260 = (void*)0;
        int32_t l_1262 = 0xF355B233;
        int32_t *l_1263 = &g_1121;
        int32_t *l_1264 = &l_1262;
        int32_t *l_1265 = &l_1242;
        int32_t *l_1266 = &l_1262;
        int32_t *l_1267 = &g_1121;
        int32_t *l_1268 = (void*)0;
        int32_t *l_1269 = &l_1224;
        int32_t *l_1270 = (void*)0;
        int32_t *l_1271 = &l_1261;
        int32_t *l_1272 = &l_1261;
        int32_t *l_1273 = &g_84;
        int32_t *l_1274 = &l_1233;
        int32_t *l_1275 = &l_1262;
        int32_t l_1276 = 0x6EF9D026;
        int32_t *l_1277 = &g_84;
        int32_t *l_1278 = &l_1218;
        int32_t *l_1279 = &l_1258;
        int32_t *l_1280 = &g_1121;
        int32_t *l_1281 = &l_1242;
        int32_t *l_1282 = &l_1244;
        int32_t *l_1283 = &l_1261;
        int32_t *l_1284 = &l_1218;
        int32_t *l_1285 = &l_1258;
        int32_t *l_1286 = &l_1242;
        int32_t *l_1287 = &l_1261;
        int32_t *l_1288 = &l_1276;
        int32_t *l_1290 = &l_1261;
        int32_t l_1291 = 0x4B688689;
        int32_t *l_1292 = &l_1258;
        int32_t *l_1293 = &g_23;
        int32_t *l_1294 = &l_1233;
        int32_t *l_1296 = &l_1242;
        int32_t *l_1297 = &l_1218;
        int32_t *l_1298 = (void*)0;
        int32_t *l_1299 = &l_1244;
        int32_t *l_1300 = (void*)0;
        int32_t *l_1301 = (void*)0;
        int32_t *l_1302 = (void*)0;
        int32_t *l_1303 = &g_1121;
        int32_t *l_1304 = &l_1291;
        int32_t *l_1306 = &g_84;
        int32_t *l_1307 = &l_1291;
        int32_t *l_1308 = &g_23;
        int32_t *l_1309 = &l_1258;
        int32_t *l_1310 = (void*)0;
        int32_t *l_1311 = &l_1233;
        int32_t l_1312 = 0xC1A7F587;
        int32_t *l_1313 = &l_1291;
        int32_t *l_1314 = &l_1244;
        int32_t *l_1316 = &g_84;
        int32_t *l_1317 = (void*)0;
        int32_t *l_1318 = (void*)0;
        int32_t l_1319 = 2;
        (*g_338) ^= ((l_1218 = 0xBC04) != ((((**l_1211) = ((void*)0 == (****l_1208))) | 65534U) | (0U >= ((1 & (~g_1187)) ^ l_1220))));
        g_1321++;
        (*l_1225) = (((*l_1263) == 0U) & (safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((****g_971), (safe_mod_func_uint16_t_u_u(1U, ((*****l_1208) = l_1196))))), l_1305)));
        (*g_337) = (***g_971);
    }
    else
    {
        uint32_t ***l_1332 = &g_1330;
        (**g_337) ^= (-1);
        (***g_971) = &l_1315;
        (*l_1332) = g_1330;
    }
    return l_1244;
}
static uint16_t * func_54(int8_t p_55, uint32_t p_56, int32_t * p_57)
{
    int32_t *l_1098 = &g_84;
    int32_t *l_1099 = &g_23;
    int32_t l_1100 = (-8);
    int32_t *l_1101 = &g_84;
    int32_t *l_1102 = &g_84;
    int32_t *l_1103 = &g_23;
    int32_t *l_1104 = (void*)0;
    int32_t *l_1105 = &l_1100;
    int32_t *l_1106 = &g_84;
    int32_t *l_1107 = &g_23;
    int32_t l_1108 = 0x98F66AD6;
    int32_t *l_1109 = &l_1100;
    int32_t l_1110 = (-7);
    int32_t *l_1111 = &l_1110;
    int32_t *l_1112 = &g_84;
    int32_t *l_1113 = &g_23;
    int32_t *l_1114 = &l_1108;
    int32_t *l_1115 = &l_1100;
    int32_t *l_1116 = &l_1108;
    int32_t *l_1117 = &l_1100;
    int32_t l_1118 = 0xA25D0EAB;
    int32_t l_1119 = 0;
    int32_t *l_1120 = (void*)0;
    int32_t *l_1122 = (void*)0;
    int32_t *l_1124 = &l_1110;
    int32_t *l_1125 = &g_1121;
    int32_t *l_1126 = &g_1121;
    int32_t *l_1127 = &l_1118;
    int32_t *l_1128 = (void*)0;
    int32_t *l_1129 = &l_1118;
    int32_t *l_1130 = &g_1121;
    int32_t *l_1131 = &g_84;
    int32_t *l_1132 = (void*)0;
    int32_t *l_1133 = &l_1108;
    int32_t *l_1134 = &g_23;
    int32_t *l_1135 = &l_1118;
    int32_t l_1136 = 0x10006118;
    int32_t *l_1137 = &l_1136;
    int32_t *l_1138 = (void*)0;
    int32_t *l_1139 = &g_23;
    int32_t *l_1140 = &l_1108;
    int32_t *l_1141 = &g_23;
    int32_t l_1142 = 0xF2DA4138;
    int32_t *l_1143 = &l_1119;
    int32_t *l_1144 = &l_1119;
    int32_t *l_1145 = &l_1142;
    int32_t *l_1146 = &l_1100;
    int32_t *l_1147 = &g_84;
    int32_t *l_1149 = &l_1118;
    int32_t l_1150 = 0x5BC1340E;
    int32_t *l_1151 = &l_1150;
    int32_t *l_1152 = (void*)0;
    int32_t *l_1153 = &l_1100;
    int32_t *l_1154 = (void*)0;
    int32_t *l_1155 = (void*)0;
    int32_t *l_1156 = &g_1121;
    int32_t *l_1157 = (void*)0;
    int32_t l_1158 = 0x733BC389;
    int32_t *l_1159 = &l_1158;
    int32_t *l_1160 = &l_1150;
    int32_t *l_1161 = &l_1108;
    int32_t l_1162 = (-1);
    int32_t l_1163 = 0x65357CC5;
    int32_t *l_1164 = &l_1100;
    int32_t *l_1165 = (void*)0;
    int32_t *l_1166 = &l_1158;
    int32_t *l_1167 = (void*)0;
    int32_t *l_1168 = &g_1121;
    int32_t *l_1169 = &l_1142;
    int32_t *l_1170 = &g_84;
    int32_t l_1171 = (-8);
    int32_t *l_1172 = &l_1136;
    int32_t *l_1173 = &l_1110;
    int32_t *l_1174 = (void*)0;
    int32_t *l_1175 = &l_1171;
    int32_t *l_1176 = (void*)0;
    int32_t *l_1177 = &l_1108;
    int32_t *l_1178 = (void*)0;
    int32_t *l_1179 = &g_1121;
    int32_t *l_1180 = &l_1100;
    int32_t *l_1181 = &l_1119;
    int32_t *l_1182 = &l_1118;
    int32_t *l_1183 = &l_1119;
    int32_t *l_1184 = &l_1162;
    int32_t *l_1185 = &l_1100;
    int32_t *l_1186 = &g_23;
    int8_t *l_1191 = (void*)0;
    int8_t **l_1190 = &l_1191;
    g_1187++;
    (***g_971) = p_57;
    (*g_337) = func_64(((void*)0 != l_1190));
    return &g_359;
}
static uint32_t func_59(int32_t * p_60, int16_t p_61, int32_t * p_62, uint8_t p_63)
{
    uint16_t l_76 = 0U;
    int32_t *l_80 = &g_23;
    int32_t **l_79 = &l_80;
    int32_t l_85 = (-1);
    uint32_t l_90 = 0xF3BC9FC2;
    uint16_t *l_97 = &l_76;
    uint8_t *l_102 = &g_32;
    uint8_t **l_101 = &l_102;
    int32_t l_308 = 0x296053B2;
    int32_t l_315 = (-9);
    int16_t l_351 = 8;
    uint8_t l_352 = 9U;
    uint16_t **l_878 = &l_97;
    uint16_t ***l_877 = &l_878;
    uint8_t l_888 = 1U;
    uint32_t l_1040 = 4294967295U;
    int16_t l_1042 = 0x4D18;
    int32_t *** const *l_1045 = (void*)0;
    int32_t *** const **l_1044 = &l_1045;
    int32_t *****l_1056 = (void*)0;
    int16_t *l_1062 = (void*)0;
    int16_t **l_1061 = &l_1062;
    int16_t ***l_1060 = &l_1061;
    int16_t ****l_1059 = &l_1060;
    int32_t l_1073 = 4;
    (*l_79) = func_64((((g_32 & (safe_mul_func_int8_t_s_s(l_76, l_76))) | l_76) > (safe_add_func_uint32_t_u_u(p_61, g_23))));
    for (g_23 = 0; (g_23 != (-9)); g_23 = safe_sub_func_uint32_t_u_u(g_23, 3))
    {
        int32_t *l_83 = &g_84;
        int32_t *l_86 = &g_84;
        int32_t *l_87 = &l_85;
        int32_t *l_88 = &l_85;
        int32_t *l_89 = &g_84;
        l_90--;
        (*l_86) = (safe_div_func_int32_t_s_s(0xEBDC590C, 0x5BB54A03));
    }
    return p_61;
}
static int32_t * func_64(uint8_t p_65)
{
    return &g_23;
}
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_222, "g_222", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_257, "g_257", print_hash_value);
    transparent_crc(g_307, "g_307", print_hash_value);
    transparent_crc(g_321, "g_321", print_hash_value);
    transparent_crc(g_334, "g_334", print_hash_value);
    transparent_crc(g_359, "g_359", print_hash_value);
    transparent_crc(g_414, "g_414", print_hash_value);
    transparent_crc(g_464, "g_464", print_hash_value);
    transparent_crc(g_506, "g_506", print_hash_value);
    transparent_crc(g_507, "g_507", print_hash_value);
    transparent_crc(g_519, "g_519", print_hash_value);
    transparent_crc(g_523, "g_523", print_hash_value);
    transparent_crc(g_605, "g_605", print_hash_value);
    transparent_crc(g_664, "g_664", print_hash_value);
    transparent_crc(g_668, "g_668", print_hash_value);
    transparent_crc(g_832, "g_832", print_hash_value);
    transparent_crc(g_855, "g_855", print_hash_value);
    transparent_crc(g_886, "g_886", print_hash_value);
    transparent_crc(g_962, "g_962", print_hash_value);
    transparent_crc(g_1010, "g_1010", print_hash_value);
    transparent_crc(g_1121, "g_1121", print_hash_value);
    transparent_crc(g_1123, "g_1123", print_hash_value);
    transparent_crc(g_1148, "g_1148", print_hash_value);
    transparent_crc(g_1187, "g_1187", print_hash_value);
    transparent_crc(g_1289, "g_1289", print_hash_value);
    transparent_crc(g_1295, "g_1295", print_hash_value);
    transparent_crc(g_1321, "g_1321", print_hash_value);
    transparent_crc(g_1521, "g_1521", print_hash_value);
    transparent_crc(g_1527, "g_1527", print_hash_value);
    transparent_crc(g_1559, "g_1559", print_hash_value);
    transparent_crc(g_1654, "g_1654", print_hash_value);
    transparent_crc(g_1718, "g_1718", print_hash_value);
    transparent_crc(g_1815, "g_1815", print_hash_value);
    transparent_crc(g_1828, "g_1828", print_hash_value);
    transparent_crc(g_1862, "g_1862", print_hash_value);
    transparent_crc(g_1870, "g_1870", print_hash_value);
    transparent_crc(g_1894, "g_1894", print_hash_value);
    transparent_crc(g_1928, "g_1928", print_hash_value);
    transparent_crc(g_1936, "g_1936", print_hash_value);
    transparent_crc(g_2032, "g_2032", print_hash_value);
    transparent_crc(g_2060, "g_2060", print_hash_value);
    transparent_crc(g_2120, "g_2120", print_hash_value);
    transparent_crc(g_2157, "g_2157", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
