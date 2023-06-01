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
static int32_t g_2[9] = {(-7L),6L,(-7L),(-7L),6L,(-7L),(-7L),6L,(-7L)};
static int32_t g_5[3] = {1L,1L,1L};
static int32_t g_9 = 0x067E307BL;
static int32_t * const g_33 = (void*)0;
static int32_t * const *g_32 = &g_33;
static int32_t * const **g_31 = &g_32;
static uint64_t g_49 = 4UL;
static int32_t *g_61 = &g_5[0];
static int32_t **g_60 = &g_61;
static uint32_t g_66 = 0xE47BEBA6L;
static uint8_t g_85[1] = {0xAEL};
static int8_t g_101 = 0x77L;
static int8_t g_110 = 0x3DL;
static uint64_t g_135 = 0x483D774F3CB375AFLL;
static uint16_t g_151 = 65529UL;
static int16_t g_153[4] = {(-1L),(-1L),(-1L),(-1L)};
static uint32_t g_186 = 18446744073709551607UL;
static int32_t g_203 = 0xF96E852CL;
static int8_t g_206[2][3][10] = {{{0x8BL,0L,(-9L),0L,(-9L),0L,0x8BL,0L,(-9L),0L},{(-6L),0L,(-6L),0L,4L,0L,(-6L),0L,(-6L),0L},{0x8BL,0L,(-8L),0L,0x8BL,0x1EL,0x8BL,0L,(-8L),0L}},{{(-6L),0x1EL,1L,0L,1L,0x1EL,(-6L),0x1EL,1L,0L},{(-8L),0L,(-8L),0x1EL,(-9L),0x1EL,(-8L),0L,(-8L),0x1EL},{(-6L),0L,4L,0L,(-6L),0L,(-6L),0L,4L,0L}}};
static int8_t g_207 = 0x59L;
static int32_t *g_211 = &g_9;
static uint32_t g_233 = 1UL;
static int16_t g_285 = 5L;
static int64_t g_288 = 0x2BE48C0DEFCDF892LL;
static const int32_t **g_365 = (void*)0;
static const int32_t ***g_364[1] = {&g_365};
static uint64_t g_396 = 18446744073709551615UL;
static int32_t g_398 = 9L;
static int64_t g_405[2][8][5] = {{{0x0FE5EFB6F7C9921FLL,0xA2C6E8D11DA5C2CDLL,0x8739ECE6004F4858LL,0x8739ECE6004F4858LL,0xA2C6E8D11DA5C2CDLL},{0xBFBD8C90541F7247LL,(-1L),0L,0xA2C6E8D11DA5C2CDLL,1L},{(-1L),0L,0x3B409539DDD20A62LL,0xC25879B4C805FC86LL,0xE58D5345B4A9BF71LL},{1L,(-1L),0x8739ECE6004F4858LL,1L,8L},{(-1L),(-2L),0x0FE5EFB6F7C9921FLL,0xBFBD8C90541F7247LL,1L},{0xBFBD8C90541F7247LL,0xD102B0D34948EE17LL,0xD909BC677A76B645LL,0xC25879B4C805FC86LL,0xF3E973057089537BLL},{0x0FE5EFB6F7C9921FLL,8L,(-1L),0xA053FD55D3DFACCELL,0xF3E973057089537BLL},{0L,1L,1L,0L,1L}},{{0xE58D5345B4A9BF71LL,0L,0L,0xF3E973057089537BLL,8L},{0L,(-1L),1L,(-1L),0xE58D5345B4A9BF71LL},{0L,0xA053FD55D3DFACCELL,0x0FE5EFB6F7C9921FLL,0xF3E973057089537BLL,1L},{0xA04CBEC2B73690E3LL,0xA2C6E8D11DA5C2CDLL,0L,0L,0xA2C6E8D11DA5C2CDLL},{1L,(-1L),0L,0xA053FD55D3DFACCELL,(-1L)},{(-1L),0x8739ECE6004F4858LL,0L,0xC25879B4C805FC86LL,0L},{(-1L),(-1L),0L,0xBFBD8C90541F7247LL,8L},{(-1L),8L,0x0FE5EFB6F7C9921FLL,1L,0xBFBD8C90541F7247LL}}};
static uint16_t g_407 = 0x95FBL;
static uint32_t g_434 = 0x05DACDAEL;
static int32_t ** const *g_437 = &g_60;
static int32_t ** const **g_436 = &g_437;
static int32_t ** const ***g_435[10][1][7] = {{{(void*)0,(void*)0,&g_436,(void*)0,&g_436,(void*)0,(void*)0}},{{(void*)0,(void*)0,&g_436,(void*)0,&g_436,(void*)0,(void*)0}},{{(void*)0,(void*)0,&g_436,(void*)0,&g_436,(void*)0,(void*)0}},{{(void*)0,(void*)0,&g_436,(void*)0,&g_436,(void*)0,(void*)0}},{{(void*)0,(void*)0,&g_436,(void*)0,&g_436,(void*)0,(void*)0}},{{(void*)0,(void*)0,&g_436,(void*)0,&g_436,(void*)0,(void*)0}},{{(void*)0,(void*)0,&g_436,(void*)0,&g_436,(void*)0,(void*)0}},{{(void*)0,(void*)0,&g_436,(void*)0,&g_436,(void*)0,(void*)0}},{{(void*)0,(void*)0,&g_436,(void*)0,&g_436,(void*)0,(void*)0}},{{(void*)0,(void*)0,&g_436,(void*)0,&g_436,(void*)0,(void*)0}}};
static int64_t func_1(void);
static int32_t *** func_23(uint64_t p_24, int16_t p_25, int32_t * p_26);
static uint64_t func_29(int32_t * const ** p_30);
static int32_t func_34(int8_t p_35);
static int8_t func_36(int16_t p_37, const int32_t *** p_38, uint16_t p_39);
static const int32_t *** func_40(int32_t * const p_41, const uint16_t p_42, uint16_t p_43, int32_t ** p_44, const uint32_t p_45);
static uint16_t func_50(int8_t p_51, int16_t p_52);
static int32_t func_54(int64_t p_55, int32_t ** p_56, int16_t p_57);
static int32_t *** func_71(int32_t ** p_72, int8_t p_73);
static const int32_t * func_91(const uint32_t p_92, uint8_t p_93, int64_t p_94);
static int64_t func_1(void)
{
    int16_t l_389[5][3] = {{0x129FL,3L,0x129FL},{0x0D72L,(-4L),0x0D72L},{0x129FL,3L,0x129FL},{0xA0E1L,0x0D72L,0xA0E1L},{1L,0x129FL,1L}};
    int32_t l_408 = 0x91844BCCL;
    int32_t **l_453 = &g_211;
    int i, j;
    for (g_2[6] = 16; (g_2[6] >= (-2)); g_2[6] = safe_sub_func_int64_t_s_s(g_2[6], 9))
    {
        uint32_t l_18 = 6UL;
        int32_t *l_397 = &g_398;
        int64_t *l_403 = (void*)0;
        int64_t *l_404 = &g_405[1][7][4];
        uint16_t *l_406[9][9] = {{&g_407,&g_407,&g_407,&g_407,&g_407,&g_407,&g_407,(void*)0,&g_407},{&g_407,&g_407,(void*)0,&g_407,&g_407,(void*)0,&g_407,&g_407,&g_407},{&g_407,&g_407,&g_407,&g_407,&g_407,&g_407,&g_407,&g_407,&g_407},{&g_407,&g_407,&g_407,&g_407,(void*)0,&g_407,&g_407,(void*)0,&g_407},{&g_407,&g_407,&g_407,&g_407,&g_407,&g_407,&g_407,&g_407,&g_407},{&g_407,&g_407,&g_407,&g_407,&g_407,&g_407,(void*)0,&g_407,&g_407},{&g_407,&g_407,&g_407,&g_407,&g_407,&g_407,&g_407,&g_407,&g_407},{(void*)0,&g_407,&g_407,&g_407,(void*)0,&g_407,&g_407,&g_407,(void*)0},{&g_407,&g_407,&g_407,&g_407,(void*)0,&g_407,(void*)0,&g_407,&g_407}};
        int32_t l_409 = 0x02ADAA44L;
        uint64_t *l_444 = &g_396;
        int32_t ***l_452 = &g_60;
        int8_t *l_454 = &g_206[0][2][7];
        int8_t **l_455 = &l_454;
        int16_t l_456 = 0L;
        int i, j;
        for (g_5[0] = (-17); (g_5[0] < 1); ++g_5[0])
        {
            int32_t *l_8 = &g_9;
            int32_t *l_10 = (void*)0;
            int32_t *l_11 = &g_9;
            int32_t *l_12 = (void*)0;
            int32_t *l_13 = &g_9;
            int32_t *l_14 = &g_9;
            int32_t *l_15 = &g_9;
            int32_t *l_16 = &g_9;
            int32_t *l_17[7][6][5] = {{{(void*)0,&g_5[0],(void*)0,&g_9,&g_2[5]},{&g_5[2],&g_5[1],&g_2[0],&g_2[6],(void*)0},{&g_9,&g_2[5],(void*)0,&g_9,&g_2[0]},{&g_2[6],(void*)0,&g_9,&g_5[1],(void*)0},{&g_9,&g_2[6],&g_5[1],&g_9,(void*)0},{&g_9,&g_5[2],&g_9,&g_2[4],&g_2[0]}},{{&g_5[0],&g_5[1],&g_9,&g_5[0],&g_2[6]},{&g_2[6],&g_5[0],(void*)0,&g_5[0],&g_2[6]},{&g_9,&g_2[0],&g_9,(void*)0,(void*)0},{&g_5[0],(void*)0,&g_5[0],&g_2[2],&g_5[1]},{&g_2[6],&g_2[6],&g_9,&g_2[0],(void*)0},{&g_9,&g_2[2],&g_5[0],&g_5[0],&g_2[6]}},{{(void*)0,&g_2[6],(void*)0,(void*)0,&g_2[6]},{&g_9,&g_9,&g_5[2],&g_5[1],&g_2[0]},{(void*)0,&g_2[3],&g_9,&g_2[5],(void*)0},{&g_5[1],(void*)0,&g_2[6],&g_2[6],(void*)0},{&g_5[0],&g_2[6],&g_2[6],(void*)0,&g_2[0]},{&g_5[1],&g_2[0],(void*)0,&g_2[6],(void*)0}},{{&g_5[0],&g_5[0],&g_9,&g_2[6],&g_2[5]},{&g_5[1],&g_5[0],&g_2[6],&g_9,&g_5[0]},{&g_5[0],(void*)0,(void*)0,&g_2[6],&g_2[0]},{(void*)0,&g_2[6],&g_5[2],&g_2[6],&g_9},{&g_5[1],&g_2[6],&g_9,&g_5[2],&g_2[6]},{&g_5[1],&g_2[0],&g_2[6],&g_2[0],&g_2[6]}},{{&g_9,&g_9,&g_5[0],&g_2[2],&g_2[6]},{&g_5[2],&g_5[2],&g_9,&g_2[6],&g_5[1]},{&g_9,&g_2[6],(void*)0,(void*)0,&g_2[6]},{&g_5[1],&g_5[2],&g_9,&g_5[2],&g_2[6]},{&g_2[0],&g_9,&g_9,&g_9,(void*)0},{&g_9,&g_2[0],&g_5[2],(void*)0,&g_5[1]}},{{&g_2[6],&g_2[6],&g_5[0],(void*)0,&g_2[2]},{(void*)0,&g_2[6],&g_5[0],&g_9,&g_9},{&g_2[6],(void*)0,&g_2[6],(void*)0,&g_5[0]},{(void*)0,&g_5[1],&g_2[6],&g_5[0],&g_5[0]},{(void*)0,&g_2[6],&g_9,&g_5[0],&g_5[0]},{&g_5[0],&g_2[6],&g_2[6],&g_5[0],&g_5[0]}},{{&g_2[6],(void*)0,&g_2[6],&g_2[5],(void*)0},{&g_5[2],&g_5[0],&g_5[0],&g_5[2],&g_5[1]},{&g_5[0],&g_5[1],&g_5[0],&g_5[0],&g_5[0]},{&g_2[6],&g_5[0],&g_5[2],&g_2[6],&g_5[2]},{&g_2[0],&g_9,&g_9,&g_2[0],&g_5[1]},{&g_5[0],&g_2[6],&g_9,&g_5[0],(void*)0}}};
            int32_t **l_21 = (void*)0;
            int32_t **l_22 = &l_8;
            int i, j, k;
            l_18++;
            (*l_22) = &g_9;
        }
    }
    (**g_60) = 0L;
    return (**l_453);
}
static int32_t *** func_23(uint64_t p_24, int16_t p_25, int32_t * p_26)
{
    int64_t l_413 = 5L;
    uint64_t *l_414 = &g_135;
    uint16_t *l_415 = (void*)0;
    uint16_t *l_416 = (void*)0;
    uint16_t *l_417 = &g_151;
    int32_t l_423 = (-1L);
    int64_t *l_424 = &g_288;
    int32_t *l_425 = &g_5[1];
    int32_t *l_426 = &g_5[1];
    int32_t *l_427 = &g_9;
    int32_t *l_428 = &g_9;
    int32_t *l_429 = &g_5[1];
    int32_t *l_430[2][7];
    uint8_t l_431 = 255UL;
    int32_t ** const ***l_438 = &g_436;
    int32_t ***l_439 = &g_60;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
            l_430[i][j] = &g_9;
    }
    (*p_26) = (((*l_424) |= (0x1FFE65F4BD7D847DLL ^ (!(safe_mod_func_uint64_t_u_u((g_49 = l_413), (0x844565C005C10257LL || ((((*l_414) = l_413) && (g_405[1][7][4] ^= (((((((*l_417) = ((void*)0 == &g_405[1][2][3])) | ((safe_sub_func_int16_t_s_s((l_413 && (l_423 = ((safe_mod_func_uint32_t_u_u(p_24, ((!0xD0L) ^ l_413))) > 0x230249B7F168B23ALL))), g_233)) , 0x1152L)) , p_24) ^ l_413) <= 0xDB9DL) || (*p_26)))) || 0x14L))))))) , (*p_26));
    l_431--;
    g_434 ^= (**g_60);
    l_438 = g_435[0][0][0];
    ((void) sizeof ((l_438 == 0 || l_438 == &g_436) ? 1 : 0), __extension__ ({ if (l_438 == 0 || l_438 == &g_436) ; else __assert_fail ("l_438 == 0 || l_438 == &g_436", "/tmp/tmpyw6xcu3c.c", 149, __extension__ __PRETTY_FUNCTION__); }));
    return l_439;
}
static uint64_t func_29(int32_t * const ** p_30)
{
    int32_t * const l_46 = &g_5[0];
    int32_t l_53 = 0x56A6D983L;
    int32_t **l_367 = &g_211;
    (*g_211) = ((func_34(func_36(g_5[0], func_40(l_46, (safe_mod_func_uint16_t_u_u(0xF7D6L, g_49)), func_50((((l_53 = ((*l_46) <= (*l_46))) || (func_54((safe_rshift_func_int8_t_s_u(((*l_46) ^ 0xC41AL), 7)), g_60, (*l_46)) , 0x46F15C1AL)) || (-1L)), g_206[0][2][7]), &g_211, g_49), g_49)) || g_285) == (-1L));
    (*g_211) = 0xB75B1A38L;
    (*l_367) = ((*g_60) = (*g_60));
    ((void) sizeof (((g_211 >= &g_5[0] && g_211 <= &g_5[2])) ? 1 : 0), __extension__ ({ if ((g_211 >= &g_5[0] && g_211 <= &g_5[2])) ; else __assert_fail ("(g_211 >= &g_5[0] && g_211 <= &g_5[2])", "/tmp/tmpyw6xcu3c.c", 170, __extension__ __PRETTY_FUNCTION__); }));
    for (g_135 = 13; (g_135 < 16); g_135 = safe_add_func_int16_t_s_s(g_135, 4))
    {
        uint64_t *l_370 = &g_49;
        int32_t l_375[1][8][8] = {{{0x8A5B5074L,0xC3FEF23DL,0x8A5B5074L,0x8A5B5074L,0xC3FEF23DL,0x8A5B5074L,0x8A5B5074L,0xC3FEF23DL},{0xC3FEF23DL,0x8A5B5074L,0x8A5B5074L,0xC3FEF23DL,0x8A5B5074L,0x8A5B5074L,0xC3FEF23DL,0x8A5B5074L},{0xC3FEF23DL,0xC3FEF23DL,0x5BE45F63L,0xC3FEF23DL,0xC3FEF23DL,0x5BE45F63L,0xC3FEF23DL,0xC3FEF23DL},{0x8A5B5074L,0xC3FEF23DL,0x8A5B5074L,0x8A5B5074L,0xC3FEF23DL,0x8A5B5074L,0x8A5B5074L,0xC3FEF23DL},{0xC3FEF23DL,0x8A5B5074L,0x8A5B5074L,0xC3FEF23DL,0x8A5B5074L,0x8A5B5074L,0xC3FEF23DL,0x8A5B5074L},{0xC3FEF23DL,0xC3FEF23DL,0x5BE45F63L,0xC3FEF23DL,0xC3FEF23DL,0x5BE45F63L,0xC3FEF23DL,0xC3FEF23DL},{0x8A5B5074L,0xC3FEF23DL,0x8A5B5074L,0x8A5B5074L,0xC3FEF23DL,0x8A5B5074L,0x8A5B5074L,0xC3FEF23DL},{0xC3FEF23DL,0x8A5B5074L,0x8A5B5074L,0xC3FEF23DL,0x8A5B5074L,0x8A5B5074L,0xC3FEF23DL,0x8A5B5074L}}};
        int32_t *l_376 = &g_203;
        int32_t *l_377 = &g_203;
        int32_t *l_378 = (void*)0;
        int32_t *l_379[9][9][1] = {{{&l_375[0][4][5]},{&g_5[0]},{&g_5[2]},{&g_9},{(void*)0},{&g_203},{&g_203},{(void*)0},{(void*)0}},{{&g_203},{&g_2[6]},{&g_2[6]},{&g_2[6]},{&l_375[0][3][3]},{&l_375[0][7][6]},{(void*)0},{&l_375[0][6][2]},{(void*)0}},{{&l_375[0][7][6]},{&l_375[0][3][3]},{(void*)0},{&g_2[8]},{(void*)0},{(void*)0},{&g_9},{&l_53},{&l_53}},{{(void*)0},{&g_203},{&g_203},{&l_375[0][6][2]},{&l_375[0][7][2]},{&g_5[0]},{&g_9},{&g_5[1]},{&l_375[0][4][5]}},{{&g_5[1]},{&g_9},{&g_5[0]},{&l_375[0][7][2]},{&l_375[0][6][2]},{&g_203},{&g_203},{(void*)0},{&l_53}},{{&l_53},{&g_9},{(void*)0},{(void*)0},{&g_2[8]},{(void*)0},{(void*)0},{&g_2[6]},{&g_2[7]}},{{&g_5[0]},{&g_2[7]},{&g_2[6]},{(void*)0},{(void*)0},{&g_2[8]},{(void*)0},{(void*)0},{&g_9}},{{&l_53},{&l_53},{(void*)0},{&g_203},{&g_203},{&l_375[0][6][2]},{&l_375[0][7][2]},{&g_5[0]},{&g_9}},{{&g_5[1]},{&l_375[0][4][5]},{&g_5[1]},{&g_9},{&g_5[0]},{&l_375[0][7][2]},{&l_375[0][6][2]},{&g_203},{&g_203}}};
        uint32_t l_380 = 4294967295UL;
        int i, j, k;
        l_375[0][0][0] = ((--(*l_370)) < (safe_rshift_func_int8_t_s_u(l_375[0][4][5], l_375[0][7][1])));
        if (l_375[0][4][0])
            continue;
        ++l_380;
        (*l_376) = (*l_376);
    }
    return g_233;
}
static int32_t func_34(int8_t p_35)
{
    int32_t l_366 = (-3L);
    return l_366;
}
static int8_t func_36(int16_t p_37, const int32_t *** p_38, uint16_t p_39)
{
    return g_186;
}
static const int32_t *** func_40(int32_t * const p_41, const uint16_t p_42, uint16_t p_43, int32_t ** p_44, const uint32_t p_45)
{
    int32_t l_322 = 0xDAF3186BL;
    int32_t *l_323 = &g_203;
    int32_t l_324 = 1L;
    int32_t *l_325 = &g_203;
    int32_t *l_326 = &g_203;
    int32_t *l_327 = (void*)0;
    int32_t *l_328 = &g_9;
    int32_t *l_329 = &g_203;
    int32_t *l_330 = &g_9;
    int32_t *l_331 = &g_203;
    int32_t *l_332 = &g_203;
    int32_t *l_333 = &g_9;
    int32_t *l_334 = (void*)0;
    int32_t l_335 = 0x7B34B950L;
    int32_t *l_336 = (void*)0;
    int32_t *l_337 = &g_9;
    int32_t l_338 = 0x8B70DDD1L;
    int32_t *l_339 = &g_203;
    int32_t *l_340[2][3] = {{&l_335,&l_335,&l_335},{&l_335,&l_335,&l_335}};
    uint64_t l_341 = 0xAA88BC39DABB632DLL;
    int8_t *l_350 = &g_207;
    int8_t **l_349 = &l_350;
    int64_t *l_351 = &g_288;
    uint32_t **l_359 = (void*)0;
    uint32_t *l_361 = &g_233;
    uint32_t **l_360 = &l_361;
    uint16_t *l_362[8][8][4] = {{{(void*)0,(void*)0,&g_151,&g_151},{&g_151,&g_151,(void*)0,&g_151},{(void*)0,(void*)0,(void*)0,&g_151},{&g_151,(void*)0,&g_151,&g_151},{(void*)0,&g_151,(void*)0,(void*)0},{&g_151,&g_151,&g_151,&g_151},{&g_151,(void*)0,&g_151,&g_151},{&g_151,&g_151,(void*)0,(void*)0}},{{(void*)0,(void*)0,&g_151,&g_151},{&g_151,&g_151,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{&g_151,(void*)0,&g_151,(void*)0},{(void*)0,&g_151,&g_151,&g_151},{&g_151,(void*)0,&g_151,(void*)0},{&g_151,&g_151,(void*)0,&g_151},{(void*)0,(void*)0,(void*)0,&g_151}},{{(void*)0,&g_151,(void*)0,(void*)0},{&g_151,&g_151,&g_151,&g_151},{&g_151,(void*)0,&g_151,&g_151},{(void*)0,(void*)0,&g_151,&g_151},{&g_151,&g_151,(void*)0,&g_151},{(void*)0,(void*)0,(void*)0,&g_151},{&g_151,(void*)0,&g_151,&g_151},{(void*)0,&g_151,(void*)0,(void*)0}},{{&g_151,&g_151,&g_151,&g_151},{&g_151,(void*)0,&g_151,&g_151},{&g_151,&g_151,(void*)0,(void*)0},{(void*)0,(void*)0,&g_151,&g_151},{&g_151,&g_151,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{&g_151,(void*)0,&g_151,(void*)0},{&g_151,&g_151,&g_151,&g_151}},{{(void*)0,&g_151,(void*)0,&g_151},{&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,(void*)0},{&g_151,&g_151,&g_151,(void*)0},{&g_151,(void*)0,(void*)0,&g_151},{(void*)0,(void*)0,&g_151,(void*)0},{&g_151,(void*)0,(void*)0,&g_151},{(void*)0,&g_151,&g_151,&g_151}},{{(void*)0,(void*)0,(void*)0,(void*)0},{&g_151,(void*)0,&g_151,&g_151},{&g_151,(void*)0,&g_151,(void*)0},{&g_151,&g_151,(void*)0,(void*)0},{&g_151,&g_151,(void*)0,&g_151},{&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,(void*)0,(void*)0}},{{(void*)0,&g_151,&g_151,(void*)0},{(void*)0,&g_151,(void*)0,(void*)0},{&g_151,&g_151,&g_151,&g_151},{(void*)0,&g_151,(void*)0,&g_151},{&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,(void*)0},{&g_151,&g_151,&g_151,(void*)0},{&g_151,(void*)0,(void*)0,&g_151}},{{(void*)0,(void*)0,&g_151,(void*)0},{&g_151,(void*)0,(void*)0,&g_151},{(void*)0,&g_151,&g_151,&g_151},{(void*)0,(void*)0,(void*)0,(void*)0},{&g_151,(void*)0,&g_151,&g_151},{&g_151,(void*)0,&g_151,(void*)0},{&g_151,&g_151,(void*)0,(void*)0},{&g_151,&g_151,(void*)0,&g_151}}};
    uint64_t *l_363 = &g_135;
    int i, j, k;
    l_341--;
    (*l_339) = ((!((((*l_363) = (safe_mod_func_uint16_t_u_u(((((*l_331) ^ ((*l_351) &= (safe_add_func_int32_t_s_s(((void*)0 != l_349), (*l_337))))) | (p_45 , ((((!(safe_lshift_func_int8_t_s_s((-10L), ((safe_rshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((g_151 = (p_43 = (0x7488L == (((&p_45 != ((*l_360) = &g_233)) < g_203) , p_42)))), 0x67D1L)), g_206[0][2][7])) && (*p_41))))) , 0x03L) | (*l_333)) | 3UL))) , 0xBCFEL), g_5[1]))) || p_45) > (-2L))) ^ (-9L));
    return g_364[0];
}
static uint16_t func_50(int8_t p_51, int16_t p_52)
{
    uint64_t l_271 = 0xF5BE6E705DC7098ELL;
    int16_t *l_284 = &g_285;
    uint8_t l_286 = 255UL;
    int64_t *l_287[7][10] = {{&g_288,&g_288,&g_288,(void*)0,&g_288,&g_288,&g_288,&g_288,&g_288,(void*)0},{&g_288,(void*)0,&g_288,&g_288,&g_288,&g_288,&g_288,(void*)0,&g_288,&g_288},{&g_288,(void*)0,&g_288,(void*)0,&g_288,&g_288,&g_288,(void*)0,&g_288,(void*)0},{&g_288,&g_288,&g_288,(void*)0,&g_288,&g_288,&g_288,&g_288,&g_288,(void*)0},{&g_288,(void*)0,&g_288,&g_288,&g_288,&g_288,&g_288,(void*)0,&g_288,&g_288},{&g_288,(void*)0,&g_288,(void*)0,&g_288,&g_288,&g_288,(void*)0,&g_288,&g_288},{&g_288,&g_288,&g_288,&g_288,&g_288,&g_288,&g_288,&g_288,&g_288,&g_288}};
    uint8_t l_289 = 0x96L;
    uint64_t *l_290 = &l_271;
    int32_t l_291[3][1][9] = {{{0xB45DCA98L,(-1L),0xB45DCA98L,0xB45DCA98L,(-1L),0xB45DCA98L,0xB45DCA98L,(-1L),0xB45DCA98L}},{{0xF251CE81L,0xA936E5EAL,0xF251CE81L,0xF251CE81L,0xA936E5EAL,0xF251CE81L,0xF251CE81L,0xA936E5EAL,0xF251CE81L}},{{0xB45DCA98L,(-1L),0xB45DCA98L,0xB45DCA98L,(-1L),0xB45DCA98L,0xB45DCA98L,(-1L),0xB45DCA98L}}};
    uint16_t l_303 = 0xF88BL;
    uint32_t *l_317 = &g_186;
    int16_t *l_318 = &g_285;
    const uint32_t l_319[5] = {4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL};
    int64_t l_320 = 0x930EC5A89D96C7F0LL;
    int32_t l_321 = (-8L);
    int i, j, k;
    l_291[2][0][3] |= (safe_add_func_uint64_t_u_u(((*l_290) = (safe_sub_func_uint8_t_u_u(g_207, ((((g_49 | ((p_51 && (((l_271 ^ l_271) < (((safe_rshift_func_uint16_t_u_u(((g_288 = (safe_unary_minus_func_int16_t_s((3UL & (safe_lshift_func_int16_t_s_s((safe_div_func_uint64_t_u_u(((((safe_add_func_int32_t_s_s(((((*l_284) &= (safe_mod_func_int16_t_s_s(((((0x0FDAC42AL > (~g_153[0])) < l_271) & p_52) && 0x94E4AAB7L), 5L))) != p_52) ^ 0x10L), p_51)) , p_52) >= g_5[2]) ^ 255UL), l_286)), 2)))))) , l_289), 4)) >= l_286) || 0x309D902BL)) ^ (*g_211))) != p_52)) < g_66) >= l_271) ^ 0xDA3237E1L)))), p_51));
    l_291[1][0][0] = (p_52 ^ (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((~((((((((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u(l_271, 2)), 2)) | 3UL) , g_85[0]) < ((p_52 >= l_291[2][0][3]) >= g_9)) | (((p_51 >= (safe_mod_func_uint64_t_u_u(((g_151 ^= (p_52 != g_153[2])) || l_303), 18446744073709551615UL))) ^ 0x4292L) , g_233)) >= l_289) , 6L) > g_153[0])), 1)), p_51)));
    l_321 ^= (safe_mod_func_int8_t_s_s(((1UL >= p_51) ^ ((255UL && (g_85[0] | ((l_271 && (((((l_284 = ((safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(((l_271 < 0x3F132176L) , (g_135 , (safe_sub_func_int64_t_s_s((safe_add_func_int32_t_s_s(((*g_211) = ((safe_lshift_func_int8_t_s_s(((((*l_317) = ((~((p_51 | p_51) >= g_49)) & p_51)) , g_49) , g_85[0]), p_52)) , l_291[2][0][3])), l_271)), 0xDEF9147D93FD7C67LL)))), 4)), 1L)) , &g_153[0])) == l_318) & 0x37L) != l_319[1]) , p_51)) | l_320))) && 0x05B71CF6230A635BLL)), g_5[2]));
    ((void) sizeof ((l_284 == &g_285 || (l_284 >= &g_153[0] && l_284 <= &g_153[3])) ? 1 : 0), __extension__ ({ if (l_284 == &g_285 || (l_284 >= &g_153[0] && l_284 <= &g_153[3])) ; else __assert_fail ("l_284 == &g_285 || (l_284 >= &g_153[0] && l_284 <= &g_153[3])", "/tmp/tmpyw6xcu3c.c", 283, __extension__ __PRETTY_FUNCTION__); }));
    return g_66;
}
static int32_t func_54(int64_t p_55, int32_t ** p_56, int16_t p_57)
{
    uint32_t *l_64 = (void*)0;
    uint32_t *l_65 = &g_66;
    int32_t ***l_70 = &g_60;
    int32_t ****l_69 = &l_70;
    int32_t ***l_266[2][10][9] = {{{(void*)0,&g_60,&g_60,&g_60,(void*)0,&g_60,&g_60,&g_60,&g_60},{&g_60,&g_60,&g_60,(void*)0,(void*)0,&g_60,&g_60,&g_60,&g_60},{&g_60,&g_60,(void*)0,&g_60,&g_60,(void*)0,&g_60,&g_60,&g_60},{(void*)0,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60},{(void*)0,(void*)0,(void*)0,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60},{&g_60,&g_60,(void*)0,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60},{&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60},{&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,(void*)0},{&g_60,&g_60,&g_60,&g_60,&g_60,(void*)0,&g_60,&g_60,&g_60},{&g_60,&g_60,&g_60,(void*)0,(void*)0,&g_60,&g_60,&g_60,&g_60}},{{&g_60,&g_60,(void*)0,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60},{&g_60,&g_60,&g_60,&g_60,(void*)0,&g_60,&g_60,&g_60,(void*)0},{(void*)0,&g_60,&g_60,(void*)0,&g_60,&g_60,&g_60,(void*)0,&g_60},{(void*)0,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60},{(void*)0,&g_60,&g_60,&g_60,&g_60,(void*)0,&g_60,&g_60,(void*)0},{&g_60,&g_60,(void*)0,&g_60,(void*)0,&g_60,&g_60,&g_60,&g_60},{&g_60,&g_60,(void*)0,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60},{(void*)0,(void*)0,&g_60,&g_60,&g_60,(void*)0,&g_60,&g_60,&g_60},{&g_60,(void*)0,&g_60,(void*)0,&g_60,&g_60,&g_60,&g_60,(void*)0},{(void*)0,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60}}};
    int32_t ****l_265 = &l_266[0][8][8];
    int i, j, k;
    (*g_211) = (safe_sub_func_int32_t_s_s((((*l_69) = (((*l_65)--) , (void*)0)) == ((*l_265) = func_71(&g_61, p_55))), 5L));
    ((void) sizeof ((l_70 == 0) ? 1 : 0), __extension__ ({ if (l_70 == 0) ; else __assert_fail ("l_70 == 0", "/tmp/tmpyw6xcu3c.c", 304, __extension__ __PRETTY_FUNCTION__); }));
    return (**p_56);
}
static int32_t *** func_71(int32_t ** p_72, int8_t p_73)
{
    int64_t l_74[1][4][8] = {{{0xB2CBD72F548F9F0ALL,(-3L),0xB2CBD72F548F9F0ALL,(-3L),0xB2CBD72F548F9F0ALL,(-3L),0xB2CBD72F548F9F0ALL,(-3L)},{0xB2CBD72F548F9F0ALL,(-3L),0xB2CBD72F548F9F0ALL,(-3L),0xB2CBD72F548F9F0ALL,(-3L),0xB2CBD72F548F9F0ALL,(-3L)},{0xB2CBD72F548F9F0ALL,(-3L),0xB2CBD72F548F9F0ALL,(-3L),0xB2CBD72F548F9F0ALL,(-3L),0xB2CBD72F548F9F0ALL,(-3L)},{0xB2CBD72F548F9F0ALL,(-3L),0xB2CBD72F548F9F0ALL,(-3L),0xB2CBD72F548F9F0ALL,(-3L),0xB2CBD72F548F9F0ALL,(-3L)}}};
    int32_t *l_75 = &g_9;
    int32_t *l_76 = &g_9;
    int32_t *l_77 = &g_9;
    int32_t *l_78 = &g_9;
    int32_t l_79 = (-5L);
    int32_t *l_80 = &g_9;
    int32_t *l_81 = &l_79;
    int32_t *l_82 = &g_9;
    int32_t *l_83 = &l_79;
    int32_t *l_84[4];
    uint64_t l_95 = 0xF891D98557C7BD55LL;
    int8_t *l_100 = &g_101;
    uint32_t l_107[5][9][2] = {{{0x7548BA02L,0x62727C38L},{0UL,0x62727C38L},{0x7548BA02L,4294967288UL},{0x7548BA02L,0x62727C38L},{0UL,0x62727C38L},{0x7548BA02L,4294967288UL},{0x7548BA02L,0x62727C38L},{0UL,0x62727C38L},{0x7548BA02L,4294967288UL}},{{0x7548BA02L,0x62727C38L},{0UL,0x62727C38L},{0x7548BA02L,4294967288UL},{0x7548BA02L,0x62727C38L},{0UL,0x62727C38L},{0x7548BA02L,4294967288UL},{0x7548BA02L,0x62727C38L},{0UL,0x62727C38L},{0x7548BA02L,4294967288UL}},{{0x7548BA02L,0x62727C38L},{0UL,0x62727C38L},{0x7548BA02L,4294967288UL},{0x7548BA02L,0x62727C38L},{0UL,0x62727C38L},{0x7548BA02L,4294967288UL},{0x7548BA02L,0x62727C38L},{0UL,0x62727C38L},{0x7548BA02L,4294967288UL}},{{0x7548BA02L,0x62727C38L},{0UL,0x62727C38L},{0x7548BA02L,4294967288UL},{0x7548BA02L,0x62727C38L},{0UL,0x62727C38L},{0x7548BA02L,4294967288UL},{0x7548BA02L,0x62727C38L},{0UL,0x62727C38L},{0x7548BA02L,4294967288UL}},{{0x7548BA02L,0x62727C38L},{0UL,0x62727C38L},{0x7548BA02L,4294967288UL},{0x7548BA02L,0x62727C38L},{0UL,0x62727C38L},{0x7548BA02L,4294967288UL},{0x7548BA02L,0x62727C38L},{0UL,0x62727C38L},{0x7548BA02L,4294967288UL}}};
    int8_t *l_108 = (void*)0;
    int8_t *l_109 = &g_110;
    uint16_t l_111 = 0xC2B6L;
    int64_t l_112 = 0x1239EB3E32E7287DLL;
    const int32_t *l_255 = &g_5[0];
    const int32_t **l_254 = &l_255;
    uint32_t l_256[5][1][4] = {{{0UL,0UL,0UL,0UL}},{{0UL,0UL,0UL,0UL}},{{0UL,0UL,0UL,0UL}},{{0UL,0UL,0UL,0UL}},{{0UL,0UL,0UL,0UL}}};
    uint16_t *l_264 = (void*)0;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_84[i] = &g_9;
    g_85[0]++;
    for (l_79 = 0; (l_79 <= 9); l_79 = safe_add_func_uint64_t_u_u(l_79, 8))
    {
        int32_t ***l_90 = &g_60;
        return l_90;
    }
    (*l_254) = func_91((((p_73 & l_95) && (safe_rshift_func_uint8_t_u_s((~p_73), ((*l_100) = (~0x6EL))))) < (+(((((((l_112 ^= (l_111 = ((*l_81) = ((*l_75) = (safe_add_func_int64_t_s_s((((*l_109) &= (safe_sub_func_int8_t_s_s((*l_76), ((((0xCD9EL || (l_107[2][3][0] == 0x2BE65A1BL)) != 0xD9FD67D0L) == (*l_75)) <= 7L)))) , (*l_75)), 5UL)))))) & g_85[0]) && 0xAB12L) , 0x755E18DBL) , g_85[0]) ^ g_2[6]) >= p_73))), g_85[0], g_5[0]);
    (*l_83) = (((p_73 , (l_256[2][0][1] == ((((((void*)0 != &l_111) == ((safe_unary_minus_func_int16_t_s(p_73)) , (4L == (g_110 == ((safe_sub_func_uint8_t_u_u((safe_div_func_int8_t_s_s((((*g_211) ^= (safe_add_func_int32_t_s_s(0x92555290L, ((((*l_255) >= 1L) || 1L) , 1UL)))) && (*l_76)), 0xAEL)), p_73)) <= 0xE91B169CL))))) , &l_111) != l_264) , 0xC442DDCBL))) <= g_206[0][2][7]) >= g_206[0][2][7]);
    return &g_60;
}
static const int32_t * func_91(const uint32_t p_92, uint8_t p_93, int64_t p_94)
{
    int8_t *l_113 = &g_110;
    int8_t **l_114 = &l_113;
    int32_t ***l_125 = &g_60;
    int32_t ***l_127 = &g_60;
    int32_t ****l_126 = &l_127;
    uint64_t *l_134 = &g_135;
    int32_t *l_136 = &g_9;
    uint16_t l_139 = 65535UL;
    int32_t * const ***l_143 = &g_31;
    int32_t *****l_144 = &l_126;
    uint16_t *l_150 = &g_151;
    int16_t *l_152 = &g_153[0];
    int32_t l_154 = (-1L);
    int32_t l_200 = 0xF798932AL;
    int32_t l_202 = 1L;
    int32_t l_204 = (-2L);
    int32_t l_205 = 0x9513A8B7L;
    uint64_t l_218 = 0x9F34086FE4CD9D4DLL;
    uint32_t l_231 = 2UL;
    (*l_136) = (((*l_114) = l_113) != ((safe_div_func_int64_t_s_s(0x24F1449E4C9CD7D8LL, ((((safe_unary_minus_func_uint16_t_u((!((*l_134) = (safe_mod_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u((((g_2[1] , ((g_85[0] , l_125) != ((*l_126) = &g_60))) && (safe_mod_func_uint32_t_u_u(0xBF18921BL, (((safe_div_func_uint8_t_u_u((((****l_126) == (safe_sub_func_uint16_t_u_u(g_85[0], (****l_126)))) != g_5[0]), 0x0AL)) | p_94) ^ (*g_61))))) >= g_110), 1)), 4)) <= p_93), p_94)))))) , (*g_31)) != (*g_31)) & 8L))) , (void*)0));
    (*l_136) = (*g_61);
    l_154 &= (safe_mod_func_int8_t_s_s((((l_139 <= (0x0E7310FB7A05A861LL >= (((****l_126) ^ p_93) , ((((*l_152) = (safe_unary_minus_func_uint32_t_u((((((safe_sub_func_int8_t_s_s((((***l_125) , l_143) == ((*l_144) = &l_127)), (((safe_add_func_int8_t_s_s((((((safe_div_func_uint32_t_u_u(((safe_unary_minus_func_uint8_t_u(((((*l_150) = ((void*)0 != (*l_114))) < (***l_127)) != p_93))) || 0x7298L), (*g_61))) || (***l_127)) > 1UL) <= p_92) <= 0L), 0x71L)) > 0x78B5E36AL) | p_92))) > 0xA732L) , (void*)0) == &l_125) , g_85[0])))) , 0L) | 0L)))) == (*l_136)) < 0xC8498979L), p_94));
    for (l_154 = 0; (l_154 <= 3); l_154 += 1)
    {
        uint8_t l_156 = 0xB2L;
        int32_t l_187 = (-1L);
        int32_t *****l_217 = &l_126;
        for (p_94 = 0; (p_94 <= 3); p_94 += 1)
        {
            int32_t *** const *l_178 = &l_125;
            const int32_t l_234 = 0xE8282955L;
            int32_t *****l_247 = &l_126;
            int i;
        }
        (*l_136) = (*g_211);
    }
    return (**l_125);
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_85[i], "g_85[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_153[i], "g_153[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_203, "g_203", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_206[i][j][k], "g_206[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);
            }
        }
    }
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_285, "g_285", print_hash_value);
    transparent_crc(g_288, "g_288", print_hash_value);
    transparent_crc(g_396, "g_396", print_hash_value);
    transparent_crc(g_398, "g_398", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_405[i][j][k], "g_405[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);
            }
        }
    }
    transparent_crc(g_407, "g_407", print_hash_value);
    transparent_crc(g_434, "g_434", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
