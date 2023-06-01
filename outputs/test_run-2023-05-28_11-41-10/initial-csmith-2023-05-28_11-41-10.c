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
static uint32_t g_22 = 0x67457993;
static int32_t g_71 = 0x0E5C5CC9;
static int32_t *g_129 = &g_71;
static int32_t **g_128 = &g_129;
static uint32_t g_174[4][8] = {{0xEA3A65F8,4294967290U,4294967290U,0xEA3A65F8,1U,9U,1U,0xEA3A65F8},{4294967290U,1U,4294967290U,9U,4294967295U,4294967295U,9U,4294967290U},{1U,1U,4294967295U,9U,0x0D40F6A6,9U,4294967295U,1U},{1U,4294967290U,9U,4294967295U,4294967295U,9U,4294967290U,1U}};
static int32_t g_213 = 0xE5D540DA;
static uint16_t g_214[6] = {65527U,0x2E21,0x2E21,65527U,0x2E21,0x2E21};
static uint16_t g_265[1] = {0xD5EF};
static uint16_t g_288 = 0x11CA;
static uint32_t g_312 = 0x6D2BC901;
static uint16_t g_328 = 65534U;
static uint32_t g_331[8][10][3] = {{{4294967295U,0xFD3BF148,0xFA5FF65F},{4294967289U,4294967295U,4294967295U},{4294967295U,0x2C104672,0U},{0xCFCF3885,4294967295U,0U},{0x92DC4278,4294967295U,0x5D0FB07C},{4294967295U,0xF7C64EC2,0U},{0U,4294967295U,0x8F18FD03},{8U,4294967295U,0x921B171C},{0x2D4D6344,0x2C104672,0xC3DCDBF5},{0U,4294967289U,0x1111568D}},{{4294967295U,4294967290U,4294967286U},{0U,0xFF1E0223,4294967294U},{5U,1U,1U},{0xE1FE8385,9U,0x494CCD08},{4294967295U,4294967289U,0x5D0FB07C},{1U,4294967293U,4294967295U},{0xCFCF3885,0x1CDC0773,4294967295U},{0xBE30F185,0xB32E1C42,0x5D0FB07C},{0xC3DCDBF5,0xFD3BF148,0x494CCD08},{0U,4294967295U,1U}},{{4294967290U,4294967295U,4294967294U},{0x2D4D6344,0x18D7C328,4294967286U},{4294967295U,0x113F0E6E,0x1111568D},{0xC3DCDBF5,9U,0xC3DCDBF5},{0x92DC4278,0xFF1E0223,0x921B171C},{0U,4294967295U,0x8F18FD03},{0xE1FE8385,8U,0U},{0x58814E8A,0x113F0E6E,0x5D0FB07C},{0xE1FE8385,0x2C104672,0U},{0U,0x1CDC0773,0U}},{{0x92DC4278,0U,4294967289U},{0xC3DCDBF5,0x8F18FD03,0U},{4294967295U,0xB32E1C42,1U},{0x2D4D6344,4294967295U,0xB27480D8},{4294967290U,0x18D7C328,0x48461366},{0U,1U,0x1CDC0773},{0xC3DCDBF5,8U,4294967286U},{0xBE30F185,1U,0x921B171C},{0xCFCF3885,1U,9U},{1U,8U,0x80B6D513}},{{4294967295U,1U,4294967289U},{0xE1FE8385,0x18D7C328,4294967295U},{5U,4294967295U,0U},{0U,0xB32E1C42,0xE1FE8385},{4294967295U,0x8F18FD03,0x80B6D513},{0U,0U,0x8F18FD03},{0x2D4D6344,0x1CDC0773,4294967294U},{8U,0x2C104672,0x48461366},{0U,0x113F0E6E,4294967295U},{4294967295U,8U,0x48461366}},{{0x92DC4278,4294967295U,4294967294U},{0xCFCF3885,0xFF1E0223,0x8F18FD03},{4294967289U,9U,0x80B6D513},{4294967295U,0x113F0E6E,0xE1FE8385},{1U,0x18D7C328,0U},{0U,4294967295U,4294967295U},{0U,4294967295U,4294967289U},{4294967286U,0xFD3BF148,0x80B6D513},{0U,0xB32E1C42,9U},{4294967290U,0x1CDC0773,0x921B171C}},{{4294967290U,4294967293U,4294967286U},{0U,4294967289U,0x1CDC0773},{4294967286U,9U,0x48461366},{0U,1U,0xB27480D8},{0U,0xFF1E0223,1U},{1U,4294967290U,0U},{0U,4294967295U,4294967295U},{4294967295U,0xFA5FF65F,0xFD3BF148},{0x48461366,1U,1U},{0xFF1E0223,9U,0xC9D16F30}},{{0x1CDC0773,8U,0xCFCF3885},{1U,9U,0x2D4D6344},{0U,1U,0x1CE63495},{0x61E61F33,0xFA5FF65F,0x1111568D},{0x8F18FD03,4294967295U,0x113F0E6E},{0x1CDC0773,0xBE30F185,4294967295U},{0x19938994,1U,0x494CCD08},{0xC3DCDBF5,4294967293U,9U},{0x7342C774,0x92DC4278,0U},{4294967295U,4294967295U,0xC9D16F30}}};
static int32_t ***g_335 = &g_128;
static int32_t ****g_334 = &g_335;
static uint32_t g_401 = 0xECD72320;
static const int8_t g_436 = 0x99;
static int32_t g_501[5] = {(-5),(-5),(-5),(-5),(-5)};
static int8_t g_502 = 0xB3;
static int16_t g_503 = 0;
static uint16_t g_504 = 1U;
static uint32_t g_525 = 4294967295U;
static int32_t g_557 = 0x8BE1264C;
static int16_t g_582 = 0xF1BB;
static uint16_t g_654 = 3U;
static int32_t g_663 = 4;
static int8_t g_664 = 9;
static uint8_t g_665[8] = {1U,0xEB,0xEB,1U,0xEB,0xEB,1U,0xEB};
static int32_t g_741 = 0xDEF18002;
static int32_t g_761 = (-1);
static uint8_t g_779[7] = {0x5C,0x5C,0x5C,0x5C,0x5C,0x5C,0x5C};
static int32_t g_808 = 0xC81FD44C;
static int32_t g_943 = (-1);
static int8_t g_978[2] = {0,0};
static uint8_t func_1(void);
static int32_t func_8(uint16_t p_9, int8_t p_10);
static int16_t func_12(int16_t p_13, uint32_t p_14);
static int16_t func_15(uint8_t p_16);
static uint8_t func_17(int16_t p_18, int16_t p_19, uint8_t p_20);
static uint8_t func_23(int8_t p_24, uint32_t p_25);
static const int32_t func_26(uint32_t p_27, int8_t p_28, uint16_t p_29, uint32_t p_30);
static const int32_t func_35(uint16_t p_36, uint32_t p_37, int16_t p_38);
static uint8_t func_45(uint16_t p_46, int32_t p_47, int8_t p_48, int32_t p_49, int16_t p_50);
static int32_t * func_51(int32_t * p_52);
static uint8_t func_1(void)
{
    uint32_t l_11 = 0x281D21F1;
    uint32_t l_21[10][5] = {{0U,0U,0x145714FF,0U,0U},{0xE76373A4,0U,0xE76373A4,0xE76373A4,0U},{0U,0xE76373A4,0xE76373A4,0U,0xE76373A4},{0U,0U,0x145714FF,0U,0U},{0xE76373A4,0U,0xE76373A4,0xE76373A4,0U},{0U,0xE76373A4,0xE76373A4,0U,0xE76373A4},{0U,0U,0x145714FF,0U,0U},{0xE76373A4,0U,0xE76373A4,0xE76373A4,0U},{0U,0xE76373A4,0xE76373A4,0U,0xE76373A4},{0U,0U,0x145714FF,0U,0U}};
    uint32_t l_767 = 0x07C83BC1;
    const int8_t l_778 = 0xB6;
    int32_t l_807 = 0x24D77F87;
    int32_t *l_827 = &l_807;
    uint8_t l_931 = 0xB0;
    uint8_t l_991[3];
    int i, j;
    for (i = 0; i < 3; i++)
        l_991[i] = 0U;
    if ((safe_add_func_int8_t_s_s((-9), ((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u((((0xEE != (func_8(l_11, (((((func_12(func_15(func_17(l_21[7][2], g_22, func_23(g_22, (func_26(g_22, (0U & (((((65530U >= 0x3590) , g_22) <= l_21[9][1]) | 0x0E) && g_22)), g_22, g_22) || (*g_129))))), g_331[2][9][2]) | g_331[4][5][0]) | l_11) | g_436) <= 0x246E5B16) < l_21[7][2])) || (*g_129))) == g_436) , l_11), g_213)), 7)) | l_11))))
    {
        int16_t l_780 = 0x4E5E;
        int32_t l_805 = (-1);
        uint16_t l_809 = 3U;
        uint32_t l_883 = 1U;
        int8_t l_889 = 0xE4;
        int8_t l_933 = 0xD0;
        int32_t l_958 = 1;
        if ((safe_sub_func_uint32_t_u_u((((((l_767 | (0x68 & 0x05)) && (safe_lshift_func_int16_t_s_u(((safe_lshift_func_int16_t_s_u((safe_div_func_int32_t_s_s(((safe_div_func_uint16_t_u_u(((g_436 & (g_312 != (((safe_div_func_uint8_t_u_u((g_525 || ((l_778 ^ ((((void*)0 != (*g_335)) , g_779[1]) ^ 1U)) , 0xBB)), g_265[0])) ^ 0U) < (-1)))) ^ g_779[1]), l_780)) == l_767), (*g_129))), 12)) , g_401), l_780))) <= l_778) < 7U) == 4294967295U), l_780)))
        {
            uint8_t l_784 = 6U;
            int32_t *l_806[1];
            const int32_t ** const *l_830 = (void*)0;
            int32_t *****l_850 = &g_334;
            int16_t l_862 = 0x5A03;
            int i;
            for (i = 0; i < 1; i++)
                l_806[i] = (void*)0;
            l_805 ^= (((+(0xA4A4 <= (safe_add_func_int32_t_s_s((((*g_129) <= l_784) >= (((+(safe_mod_func_uint16_t_u_u(g_665[0], g_525))) ^ (safe_rshift_func_uint16_t_u_u(g_174[1][5], 5))) || (-7))), (safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(((((0x58 <= (safe_lshift_func_int8_t_s_u(((((((safe_div_func_int32_t_s_s(((safe_div_func_int32_t_s_s(((((safe_unary_minus_func_uint8_t_u(((l_11 < g_779[1]) | g_582))) | l_21[7][2]) != g_312) != g_174[1][3]), 0x49B2063C)) , l_778), 0x4413669A)) & l_21[7][2]) , (*g_128)) != (*g_128)) <= 0x67) < g_501[2]), 6))) && (**g_128)) != g_436) > g_761), l_780)), (**g_128))), 1)), l_780)))))) ^ l_778) != 0);
            l_809++;
            for (l_809 = 25; (l_809 <= 31); l_809 = safe_add_func_uint8_t_u_u(l_809, 1))
            {
                int8_t l_826[6][9] = {{0x8F,(-4),0x8F,0x76,0xF0,0x76,0x8F,(-4),0x8F},{0,6,0,0,6,0,0,6,0},{0x8F,(-4),0x8F,0x76,0xF0,0x76,0x8F,(-4),0x8F},{0,6,0,0,6,0,0,6,0},{0x8F,(-4),0x8F,0x76,0xF0,0x76,0x8F,(-4),0x8F},{0,6,0,0,6,0,0,6,0}};
                int i, j;
                (**g_128) ^= (safe_mod_func_int16_t_s_s((((-6) <= ((65535U | (safe_lshift_func_uint16_t_u_s(((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((247U || g_663), ((((**g_334) != (**g_334)) || (safe_div_func_uint32_t_u_u(((g_503 == (-8)) >= l_826[2][6]), l_767))) >= g_265[0]))), l_21[5][3])) , 0x1814), 12))) == 0x1D)) <= 0xB4C01A84), 0xC6CE));
                l_827 = (***g_334);
            }
            for (l_809 = 0; (l_809 != 48); l_809 = safe_add_func_int32_t_s_s(l_809, 3))
            {
                uint16_t l_861 = 65534U;
                (**g_128) = (l_830 != (*g_334));
                for (g_288 = (-14); (g_288 != 22); ++g_288)
                {
                    int8_t l_849 = 1;
                    if ((0xCD ^ ((safe_lshift_func_uint16_t_u_u(g_265[0], 10)) > (safe_add_func_int16_t_s_s((((((1 & 4294967295U) ^ (safe_add_func_int8_t_s_s(((*g_128) == (*g_128)), (safe_rshift_func_uint16_t_u_u((((safe_mod_func_int32_t_s_s((((((safe_sub_func_uint16_t_u_u(((safe_div_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((((-1) & l_849) <= ((void*)0 == (**g_335))), 3)), l_849)) != 1), g_22)) , 0x679D) && 0U) | (*l_827)) , l_805), 7U)) < g_436) & (****g_334)), g_582))))) <= l_849) > (***g_335)) ^ 0xFC), l_805)))))
                    {
                        l_850 = &g_334;
                    }
                    else
                    {
                        (**g_335) = func_51(func_51((***g_334)));
                        (**g_335) = func_51(func_51((***g_334)));
                        if ((***g_335))
                            break;
                    }
                    if ((*g_129))
                    {
                        int16_t l_863 = 7;
                        g_741 ^= ((safe_mod_func_uint32_t_u_u(((safe_add_func_int16_t_s_s(g_582, (safe_mod_func_int8_t_s_s(g_501[1], ((safe_lshift_func_uint16_t_u_s((((safe_mod_func_int32_t_s_s(l_780, 0x3DA468F6)) , ((((((l_809 & l_861) ^ ((g_436 , ((l_862 != (((((((*l_827) < (***g_335)) , (-1)) , (*l_827)) >= 0x84) & (***g_335)) || (**g_128))) , 0x1E)) , (**g_128))) >= g_174[3][3]) || l_849) == 0xE83A) , (*****l_850))) == g_664), l_861)) , 1U))))) , l_863), g_665[4])) >= g_557);
                        (***g_335) = ((safe_mod_func_uint8_t_u_u((0xEACA6D17 & (safe_unary_minus_func_uint32_t_u(((safe_lshift_func_uint16_t_u_u((g_331[0][9][1] && (safe_add_func_uint16_t_u_u(g_582, (safe_div_func_int32_t_s_s((((safe_mod_func_int16_t_s_s(g_213, 0x1F7E)) , ((safe_div_func_uint16_t_u_u((((safe_sub_func_uint8_t_u_u((*l_827), 0)) || (safe_add_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(((l_861 || l_861) , 0U), 0U)) , l_883), (-1)))) == 0x6764F146), g_503)) > (**g_128))) & 0x336A3DB8), l_809))))), 1)) & g_214[2])))), g_761)) != 0x255CDB4B);
                    }
                    else
                    {
                        uint16_t l_888 = 0xBDD8;
                        (*****l_850) = ((((l_780 , (((((l_883 || ((safe_add_func_int16_t_s_s(0x7A77, ((g_331[1][1][2] || ((safe_rshift_func_uint8_t_u_s((l_888 | ((6 || (*l_827)) <= 0x0D)), ((((g_501[1] , g_779[1]) <= g_22) ^ g_582) , l_889))) || g_331[0][9][1])) & (***g_335)))) != 0xC5AB)) , 0x01A04487) != g_331[2][7][2]) <= g_288) == g_331[0][9][1])) , l_888) ^ 0x7AD0) == l_809);
                        (**g_128) = (safe_rshift_func_uint16_t_u_u((&g_335 == (l_861 , &g_335)), (g_436 , (((**g_128) , (+l_888)) | ((****g_334) , ((((safe_mod_func_int32_t_s_s((0x472F524A != 1U), g_665[2])) && g_502) , (***g_335)) , 0xA2FA4544))))));
                    }
                    for (g_213 = 3; (g_213 >= 0); g_213 -= 1)
                    {
                        (****g_334) = ((*****l_850) & 0x1BB76B5D);
                    }
                    (***g_335) = ((safe_rshift_func_int8_t_s_s(g_331[0][9][1], 0)) , (l_861 == ((safe_div_func_int16_t_s_s((((safe_add_func_uint32_t_u_u(((**g_334) != (**g_334)), (g_214[2] == (((safe_lshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s((((0xCD8A || ((safe_div_func_uint16_t_u_u(g_501[4], (safe_rshift_func_uint16_t_u_u((+((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u((((void*)0 == &l_805) ^ (*l_827)), l_861)), 2)) | (-1))), 4)))) == 0x06D70F24)) , g_504) || g_525), g_663)), 5)) == 1U) == (*g_129))))) <= g_664) , (*l_827)), 0x3A45)) <= 7U)));
                }
            }
        }
        else
        {
            int16_t l_928 = 0xAF1B;
            for (g_761 = (-20); (g_761 < (-14)); g_761 = safe_add_func_uint8_t_u_u(g_761, 6))
            {
                int8_t l_932[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_932[i] = 0xA3;
                (*g_129) ^= (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_s((((safe_mod_func_uint16_t_u_u(65528U, ((safe_div_func_int16_t_s_s((((((**g_335) != &l_805) != (+(((0xA4 == ((+((l_928 != (safe_lshift_func_int8_t_s_u((65535U <= 0x9033), l_931))) , (l_928 ^ l_928))) || g_663)) , g_214[3]) & g_525))) | l_928) | l_932[1]), l_932[1])) , l_933))) , (*l_827)) == 0x6E9C), g_501[1])) | g_779[1]), (*l_827)));
            }
        }
        for (g_663 = 0; (g_663 != (-23)); g_663 = safe_sub_func_uint8_t_u_u(g_663, 1))
        {
            int8_t l_936 = 0xE3;
            int32_t ***l_941 = &g_128;
            if ((****g_334))
                break;
            if (l_936)
            {
                int32_t ***l_942[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_942[i] = &g_128;
                (*l_827) ^= (&g_334 != (void*)0);
                (*g_128) = func_51(&l_807);
                if (l_936)
                    break;
                g_943 &= (safe_add_func_uint16_t_u_u((((((safe_lshift_func_uint8_t_u_s(l_809, ((void*)0 != &g_334))) , l_941) == l_942[0]) & 0xED) >= (((((-1) != ((*g_335) == &l_827)) > g_525) ^ (*l_827)) , 0xAD)), 2U));
            }
            else
            {
                (***g_335) ^= (-2);
            }
            l_958 |= ((safe_lshift_func_int16_t_s_u((safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_u(((g_501[1] != (l_805 & g_213)) || ((((safe_lshift_func_uint8_t_u_s(((*g_128) == ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s((((-2) & ((0xDCC7BF68 & (***l_941)) , g_504)) , g_665[0]), g_761)), 6)) , &l_805)), g_331[5][0][1])) ^ 0xC622EE0F) & l_883) >= (-5))), g_213)) >= (*l_827)) == 0x5F), 0U)), 0x540C5B54)), 3)) > (***l_941));
        }
        for (g_664 = 6; (g_664 > 8); g_664 = safe_add_func_uint8_t_u_u(g_664, 5))
        {
            int32_t *****l_976 = &g_334;
            int32_t *l_977[6][10] = {{&g_557,&l_805,&l_958,&l_958,&l_805,&g_557,&l_805,&l_958,&l_958,&l_805},{&g_557,&l_805,&l_958,&l_958,&l_805,&g_557,&l_805,&l_958,&l_958,&l_805},{&g_557,&l_805,&l_805,&l_805,&g_71,&l_805,&g_71,&l_805,&l_805,&g_71},{&l_805,&g_71,&l_805,&l_805,&g_71,&l_805,&g_71,&l_805,&l_805,&g_71},{&l_805,&g_71,&l_805,&l_805,&g_71,&l_805,&g_71,&l_805,&l_805,&g_71},{&l_805,&g_71,&l_805,&l_805,&g_71,&l_805,&g_71,&l_805,&l_805,&g_71}};
            int i, j;
            g_978[0] |= ((safe_rshift_func_uint8_t_u_s((+0xFC), 7)) ^ (safe_sub_func_int16_t_s_s(l_809, ((*l_827) < (((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((*l_827), 0)), ((((safe_sub_func_int16_t_s_s(g_741, (g_331[0][9][1] , (safe_add_func_int32_t_s_s(((*l_827) > (((****g_334) , (l_976 == &g_334)) | (-3))), (*****l_976)))))) && (*l_827)) , g_525) , l_958))) && 0xD688367F) == g_501[1])))));
        }
    }
    else
    {
        int16_t l_985 = 0x5A73;
        for (g_582 = 0; (g_582 <= (-15)); g_582--)
        {
            const uint8_t l_986 = 5U;
            int32_t * const l_987 = (void*)0;
            int32_t ****l_988[6];
            int i;
            for (i = 0; i < 6; i++)
                l_988[i] = &g_335;
            (*l_827) ^= (safe_lshift_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((((l_985 <= (((l_986 | ((255U | ((((l_987 != (***g_334)) || ((g_557 , &g_335) != l_988[4])) < (safe_mod_func_uint8_t_u_u(((g_331[1][7][0] & (*g_129)) && l_985), g_22))) ^ l_991[0])) == 0x4A)) | g_654) , g_22)) , (*g_129)) != (***g_335)), 0x55)) | g_214[2]), 13));
        }
        (**g_335) = func_51(&l_807);
    }
    return g_761;
}
static int32_t func_8(uint16_t p_9, int8_t p_10)
{
    int32_t * const l_744[5] = {&g_557,&g_557,&g_557,&g_557,&g_557};
    int32_t ***l_747[2][5][3] = {{{&g_128,(void*)0,&g_128},{&g_128,(void*)0,(void*)0},{&g_128,(void*)0,(void*)0},{&g_128,(void*)0,&g_128},{&g_128,(void*)0,(void*)0}},{{&g_128,(void*)0,(void*)0},{&g_128,(void*)0,&g_128},{&g_128,(void*)0,(void*)0},{&g_128,(void*)0,(void*)0},{&g_128,(void*)0,&g_128}}};
    uint16_t l_762 = 0U;
    int i, j, k;
    (**g_128) = (((-6) | (((safe_sub_func_uint16_t_u_u(((void*)0 == l_744[3]), (safe_lshift_func_uint16_t_u_s(0x65FC, (g_328 | (((l_747[0][3][0] != l_747[0][3][0]) , (~((safe_div_func_uint32_t_u_u(p_10, (safe_mod_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((0x4078 < 0U), p_9)), 1)) | g_525) | 7U), 5)), p_10)), 0x11DE4403)))) ^ 0))) , g_582)))))) != p_10) & g_331[6][1][1])) & 0x6E);
    ++l_762;
    return (***g_335);
}
static int16_t func_12(int16_t p_13, uint32_t p_14)
{
    int32_t l_668 = 1;
    int32_t ***l_680 = &g_128;
    int32_t *****l_684 = &g_334;
    uint8_t l_732 = 0x86;
    uint32_t l_739[1][5] = {{0x2E3B12F5,0x2E3B12F5,0x2E3B12F5,0x2E3B12F5,0x2E3B12F5}};
    int32_t *l_740[6][6][6] = {{{&g_71,&g_741,&g_71,&g_557,(void*)0,&g_71},{&g_71,&g_557,&g_557,(void*)0,&g_71,&g_557},{(void*)0,(void*)0,&g_557,(void*)0,&g_557,&g_557},{&g_741,&g_71,&g_557,&g_71,&g_557,&g_557},{&g_557,&g_71,&g_557,(void*)0,&g_71,&g_71},{(void*)0,&g_71,&g_71,&g_71,(void*)0,&g_557}},{{&g_557,&g_71,&g_71,&g_71,&g_741,&g_557},{(void*)0,(void*)0,&g_557,&g_557,&g_71,&g_557},{(void*)0,&g_71,&g_557,&g_71,&g_741,&g_557},{&g_71,&g_741,&g_557,&g_71,&g_557,&g_557},{&g_557,&g_741,&g_71,&g_741,&g_71,&g_557},{(void*)0,&g_71,&g_71,&g_741,&g_741,&g_71}},{{(void*)0,(void*)0,&g_557,&g_557,(void*)0,&g_557},{&g_71,(void*)0,&g_557,&g_741,(void*)0,&g_557},{(void*)0,&g_71,&g_557,(void*)0,(void*)0,&g_557},{&g_71,(void*)0,&g_557,(void*)0,&g_71,&g_71},{(void*)0,&g_71,&g_71,&g_557,&g_71,&g_557},{&g_741,&g_71,&g_71,&g_71,&g_557,&g_557}},{{&g_557,&g_71,&g_557,&g_71,(void*)0,&g_557},{(void*)0,&g_741,(void*)0,&g_557,&g_557,&g_557},{&g_741,&g_557,&g_741,&g_71,&g_71,&g_71},{&g_741,(void*)0,(void*)0,&g_71,(void*)0,&g_71},{&g_741,&g_557,&g_741,&g_557,&g_557,&g_741},{&g_741,(void*)0,(void*)0,&g_741,&g_557,&g_71}},{{(void*)0,&g_71,&g_71,&g_71,&g_71,(void*)0},{&g_557,&g_71,&g_71,&g_741,(void*)0,&g_71},{&g_741,&g_741,(void*)0,&g_71,&g_71,&g_741},{&g_71,&g_71,&g_741,&g_557,&g_741,&g_71},{&g_71,&g_71,(void*)0,&g_71,&g_71,&g_71},{&g_71,(void*)0,&g_741,&g_71,&g_557,&g_557}},{{&g_71,&g_71,(void*)0,(void*)0,&g_557,&g_557},{&g_741,&g_557,&g_741,&g_741,&g_557,&g_71},{&g_557,&g_741,(void*)0,&g_71,&g_71,&g_71},{(void*)0,&g_557,&g_741,&g_557,&g_557,&g_741},{(void*)0,&g_741,(void*)0,&g_557,&g_557,&g_71},{&g_71,(void*)0,&g_71,&g_71,&g_557,(void*)0}}};
    int i, j, k;
    if (l_668)
    {
        for (g_582 = 0; (g_582 > 3); ++g_582)
        {
            uint8_t l_679 = 1U;
            (**g_128) = (0xBB <= ((((&g_335 != (void*)0) >= (p_13 != (((65530U < (safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s(p_14, (safe_mod_func_int16_t_s_s(g_665[0], (safe_rshift_func_int8_t_s_s((-5), 6)))))), (p_13 , g_582)))) < l_679) ^ g_401))) != p_14) < 4294967289U));
        }
        l_680 = (*g_334);
        (****g_334) = ((safe_lshift_func_int8_t_s_u(p_13, 4)) | 0x2477);
    }
    else
    {
        uint32_t l_683 = 4294967295U;
        int32_t l_685 = 0x7E9151E3;
        int32_t ** const l_708 = &g_129;
        l_685 &= ((p_13 , (p_13 > (0 > l_683))) || (((&g_334 != l_684) <= (***l_680)) | (((9U <= (***l_680)) >= l_683) , p_14)));
        (****l_684) = (****l_684);
        (****g_334) = (safe_rshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((safe_div_func_int32_t_s_s((((((***l_680) < g_503) , (****l_684)) != ((safe_lshift_func_uint16_t_u_s(g_214[1], 14)) , &l_685)) , ((((((safe_unary_minus_func_int16_t_s(0x2418)) , (safe_div_func_uint16_t_u_u((((safe_div_func_int16_t_s_s((safe_add_func_int32_t_s_s((***g_335), ((!1U) == (safe_div_func_uint32_t_u_u(g_265[0], 1U))))), l_685)) && 1U) == p_13), (***l_680)))) != g_312) | g_265[0]) || g_501[0]) , p_13)), (*g_129))), p_13)), g_557));
        (*****l_684) = (g_71 == (l_683 > ((((safe_mod_func_int16_t_s_s(g_265[0], (((safe_div_func_int32_t_s_s((((l_708 != (((((safe_add_func_uint16_t_u_u(p_14, (((*g_129) < (((safe_sub_func_int32_t_s_s(((-1) | ((((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((+(**l_708)) >= (safe_add_func_int16_t_s_s((((*****l_684) > 0xBEB0) | g_213), g_664))), p_13)), 4)) > g_331[0][9][1]) , p_13) <= g_436)), g_174[1][5])) || p_14) ^ p_14)) , p_14))) == (***l_680)) <= 4) , (***g_335)) , (void*)0)) , g_214[4]) ^ 0xEDE6), 0x20F0A763)) & 65535U) && 0xDB76))) == (**l_708)) > (-1)) <= (*****l_684))));
    }
    for (g_502 = 22; (g_502 > (-20)); g_502--)
    {
        if (p_14)
            break;
    }
    (*****l_684) = ((safe_lshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((0xCD >= (0 | p_14)) > (g_436 != ((((1U || 0U) , (**l_680)) == ((((*****l_684) ^ ((safe_lshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((((****l_684) == (**l_680)) != l_732), 7)), g_665[0])), (*****l_684))) & (***l_680))) && p_14) , (void*)0)) , 0x4C))), g_664)), 7)) < p_13);
    g_741 |= ((safe_sub_func_int32_t_s_s((p_13 != 0xDD), ((((safe_rshift_func_int16_t_s_s((((safe_div_func_uint8_t_u_u(((-1) > ((void*)0 != (**l_680))), (***l_680))) , g_582) || (g_328 > ((((l_739[0][0] == 0x35) , &g_335) == (void*)0) ^ g_664))), 13)) == 0xC7C141C0) || p_13) != 65535U))) > (-3));
    return g_265[0];
}
static int16_t func_15(uint8_t p_16)
{
    int16_t l_655 = 0x3E0E;
    int32_t *l_656 = &g_557;
    int32_t *l_657 = &g_71;
    int32_t *l_658 = &g_71;
    int32_t l_659 = 1;
    int32_t *l_660 = &g_557;
    int32_t l_661 = 0x5144DA55;
    int32_t *l_662[2];
    int i;
    for (i = 0; i < 2; i++)
        l_662[i] = &l_661;
    --g_665[0];
    return g_265[0];
}
static uint8_t func_17(int16_t p_18, int16_t p_19, uint8_t p_20)
{
    uint8_t l_572 = 0xC2;
    int32_t *l_605 = &g_557;
    int32_t l_633 = 0xE74B0700;
    uint32_t l_653 = 1U;
    for (g_557 = 0; (g_557 != 7); g_557 = safe_add_func_int32_t_s_s(g_557, 1))
    {
        return g_265[0];
    }
    if ((p_18 , p_19))
    {
        uint16_t l_562 = 0x8BBD;
        int32_t **l_576 = &g_129;
        for (g_557 = 0; (g_557 >= 10); g_557++)
        {
            return g_174[1][5];
        }
        l_562++;
        if (p_20)
        {
            uint32_t l_565 = 0x8EC02ED1;
            ++l_565;
            for (g_312 = 0; (g_312 != 49); g_312 = safe_add_func_int8_t_s_s(g_312, 1))
            {
                if ((safe_rshift_func_uint16_t_u_s(0xB429, 4)))
                {
                    int32_t l_581 = 1;
                    l_572++;
                    if ((0x1A81CB0F < ((~((void*)0 != l_576)) < (safe_div_func_uint8_t_u_u(g_525, p_18)))))
                    {
                        (**g_335) = (*g_128);
                        return p_20;
                    }
                    else
                    {
                        (**g_128) ^= ((safe_mod_func_int8_t_s_s((p_18 || (((p_20 , l_581) >= 0x66F7) || g_582)), (-1))) > 4294967295U);
                        (*g_129) ^= p_20;
                    }
                }
                else
                {
                    for (l_562 = (-8); (l_562 >= 3); ++l_562)
                    {
                        return p_20;
                    }
                    (*g_334) = (*g_334);
                }
            }
        }
        else
        {
            uint16_t l_589 = 65535U;
            int32_t ***l_590[5] = {&l_576,&l_576,&l_576,&l_576,&l_576};
            int32_t l_600 = (-1);
            uint32_t l_601 = 6U;
            int i;
            (***g_335) = (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s(0U, 4)), ((*g_128) == ((((((l_589 , (l_589 >= ((g_22 , l_590[4]) == ((safe_add_func_int8_t_s_s(((**g_334) != (void*)0), (!((safe_lshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s((**l_576), p_18)), g_582)) ^ l_600), g_504)) , 1)))) , (void*)0)))) >= l_601) , 0xB09A) & 0x9106) | (**l_576)) , (*l_576)))));
            if ((safe_add_func_int32_t_s_s(((1 < g_213) & g_501[1]), 0xF0AE782E)))
            {
                return p_19;
            }
            else
            {
                int32_t *l_604[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                (**g_335) = func_51(l_605);
                (***g_335) &= ((void*)0 == l_605);
            }
        }
        for (g_312 = 0; (g_312 != 50); g_312++)
        {
            return p_18;
        }
    }
    else
    {
        uint16_t l_631 = 7U;
        uint32_t l_632 = 0x6E846C92;
        int32_t *****l_634 = &g_334;
        for (p_18 = 0; (p_18 == (-15)); --p_18)
        {
            uint32_t l_610 = 4294967292U;
            l_610--;
            (*g_128) = (g_504 , l_605);
        }
        l_633 |= (((safe_add_func_int32_t_s_s((safe_div_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s(((((((((safe_div_func_uint32_t_u_u(((((0x6D == (safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((**g_128), ((((safe_rshift_func_int8_t_s_u(0xD8, (1 ^ g_504))) < p_20) <= l_631) , (((((((*l_605) <= 0x33A769D4) >= p_18) < p_18) == (***g_335)) != (*l_605)) && p_18)))) > p_19), (*l_605))), 0x86F40106))) <= l_631) , (*g_129)) != (****g_334)), g_71)) , 5) < 0x8CC0) , 6U) <= l_631) < g_288) | g_582) ^ l_631), g_312)), (*l_605))) & p_20), g_214[5])), l_632)) > 1) < p_18);
        (***g_335) = (&g_334 == l_634);
        g_654 &= (safe_div_func_int8_t_s_s((safe_add_func_uint8_t_u_u((((safe_mod_func_uint16_t_u_u((0x46EC1913 | 0x73328459), (p_18 | ((*l_605) > ((((safe_div_func_uint32_t_u_u(0xA161056D, (safe_lshift_func_uint8_t_u_s((p_20 >= (safe_div_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u(p_18, ((safe_div_func_uint16_t_u_u((((safe_mod_func_uint16_t_u_u(((&l_633 != &l_633) == g_557), l_653)) >= 1) , p_19), (*****l_634))) | (*g_129)))) > 1U), (**g_128)))), p_19)))) & (*g_129)) && 0x4C76B76D) & (*l_605)))))) < 0xAC) || (-1)), p_20)), p_19));
    }
    return (*l_605);
}
static uint8_t func_23(int8_t p_24, uint32_t p_25)
{
    uint16_t l_549 = 1U;
    int32_t *l_554 = &g_71;
    int32_t *l_555 = (void*)0;
    int32_t *l_556 = &g_557;
    (**g_128) |= 1;
    (*l_556) &= ((safe_sub_func_uint32_t_u_u(l_549, (safe_mod_func_uint8_t_u_u((((p_24 , (g_214[4] , (safe_sub_func_uint32_t_u_u(((((l_554 != l_554) , p_25) || ((-1) < (-1))) , ((****g_334) || (***g_335))), g_331[0][9][1])))) && p_24) , g_501[1]), g_71)))) > (*l_554));
    return g_331[0][9][1];
}
static const int32_t func_26(uint32_t p_27, int8_t p_28, uint16_t p_29, uint32_t p_30)
{
    int32_t l_99[7][9][4] = {{{(-1),2,(-1),1},{1,0xA8E8ED7A,0x3A7432CF,0x09B68504},{(-1),0x34DBBD83,0x0802EBDD,1},{0xC7DF6318,(-8),0x15133AA3,1},{0xC7DF6318,0x0802EBDD,0x0802EBDD,0xC7DF6318},{(-1),2,0x3A7432CF,0x36D3DFDF},{1,(-8),(-1),0x09B68504},{(-1),1,0x0802EBDD,0x09B68504},{0xF43755EC,(-8),0xAC0CBF82,0x36D3DFDF}},{{0xC7DF6318,2,(-6),0xC7DF6318},{(-1),0x0802EBDD,0x3A7432CF,1},{0x36D3DFDF,(-8),0x3A7432CF,1},{(-1),0x34DBBD83,(-6),0x09B68504},{0xC7DF6318,0xA8E8ED7A,0xAC0CBF82,1},{0xF43755EC,2,0x0802EBDD,0xF43755EC},{(-1),2,(-1),1},{1,0xA8E8ED7A,0x3A7432CF,0x09B68504},{(-1),0x34DBBD83,0x0802EBDD,1}},{{0xC7DF6318,1,0,0xF43755EC},{1,0x15133AA3,0x15133AA3,1},{0,0xAC0CBF82,3,0x9336AE27},{0xF43755EC,1,(-8),0x66612900},{0x36D3DFDF,(-6),0x15133AA3,0x66612900},{0x232C3778,1,(-1),0x9336AE27},{1,0xAC0CBF82,0xA1ECA9F7,1},{0x36D3DFDF,0x15133AA3,3,0xF43755EC},{0x9336AE27,1,3,0x5B88FC90}},{{0x36D3DFDF,0x0802EBDD,0xA1ECA9F7,0x66612900},{1,0x371577CD,(-1),0xF43755EC},{0x232C3778,0xAC0CBF82,0x15133AA3,0x232C3778},{0x36D3DFDF,0xAC0CBF82,(-8),0xF43755EC},{0xF43755EC,0x371577CD,3,0x66612900},{0,0x0802EBDD,0x15133AA3,0x5B88FC90},{1,1,0,0xF43755EC},{1,0x15133AA3,0x15133AA3,1},{0,0xAC0CBF82,3,0x9336AE27}},{{0xF43755EC,1,(-8),0x66612900},{0x36D3DFDF,(-6),0x15133AA3,0x66612900},{0x232C3778,1,(-1),0x9336AE27},{1,0xAC0CBF82,0xA1ECA9F7,1},{0x36D3DFDF,0x15133AA3,3,0xF43755EC},{0x9336AE27,1,3,0x5B88FC90},{0x36D3DFDF,0x0802EBDD,0xA1ECA9F7,0x66612900},{1,0x371577CD,(-1),0xF43755EC},{0x232C3778,0xAC0CBF82,0x15133AA3,0x232C3778}},{{0x36D3DFDF,0xAC0CBF82,(-8),0xF43755EC},{0xF43755EC,0x371577CD,3,0x66612900},{0,0x0802EBDD,0x15133AA3,0x5B88FC90},{1,1,0,0xF43755EC},{1,0x15133AA3,0x15133AA3,1},{0,0xAC0CBF82,3,0x9336AE27},{0xF43755EC,1,(-8),0x66612900},{0x36D3DFDF,(-6),0x15133AA3,0x66612900},{0x232C3778,1,(-1),0x9336AE27}},{{1,0xAC0CBF82,0xA1ECA9F7,1},{0x36D3DFDF,0x15133AA3,3,0xF43755EC},{0x9336AE27,1,3,0x5B88FC90},{0x36D3DFDF,0x0802EBDD,0xA1ECA9F7,0x66612900},{1,0x371577CD,(-1),0xF43755EC},{0x232C3778,0xAC0CBF82,0x15133AA3,0x232C3778},{0x36D3DFDF,0xAC0CBF82,(-8),0xF43755EC},{0xF43755EC,0x371577CD,3,0x66612900},{0,0x0802EBDD,0x15133AA3,0x5B88FC90}}};
    int32_t l_102 = (-1);
    int32_t *l_109 = &l_99[2][2][1];
    int32_t **l_108 = &l_109;
    uint32_t l_188 = 4294967290U;
    uint16_t l_322 = 0xE2D6;
    int32_t *****l_433[10] = {&g_334,&g_334,&g_334,&g_334,&g_334,&g_334,&g_334,&g_334,&g_334,&g_334};
    int32_t l_453 = 0;
    uint32_t l_456 = 0U;
    uint16_t l_457[2][2] = {{0x866E,0x866E},{0x866E,0x866E}};
    uint32_t l_522 = 0x98D81E27;
    int i, j, k;
    return (****g_334);
}
static const int32_t func_35(uint16_t p_36, uint32_t p_37, int16_t p_38)
{
    return p_38;
}
static uint8_t func_45(uint16_t p_46, int32_t p_47, int8_t p_48, int32_t p_49, int16_t p_50)
{
    uint8_t l_65 = 0U;
    int32_t *l_70 = &g_71;
    const uint32_t l_81 = 0x6B1F15F1;
    int32_t **l_98 = &l_70;
    (*l_98) = func_51(((((safe_mod_func_uint8_t_u_u(p_48, ((safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(((((((((safe_sub_func_uint8_t_u_u(l_65, 0x1D)) < (l_65 < ((safe_add_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s(((l_70 != l_70) | ((!(safe_mod_func_int16_t_s_s((safe_div_func_int32_t_s_s((g_22 && (p_46 || (safe_mod_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_u(g_71, (*l_70))) , l_70) != &g_71), 0x98)))), l_81)), p_50))) == g_71)), g_71)) && 3), p_48)) <= p_47))) , (-9)) || 0U) , &g_71) != &g_71) , (*l_70)) == (-7)), (*l_70))), 0xC3FCEEEC)) , 2))) > p_46) , g_22) , &g_71));
    return p_46;
}
static int32_t * func_51(int32_t * p_52)
{
    int8_t l_82 = 0x5C;
    int16_t l_92 = 9;
    (*p_52) = ((l_82 , (safe_div_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u((l_82 | (((&g_71 != &g_71) , ((((safe_div_func_int16_t_s_s((((!(-9)) != (safe_rshift_func_uint16_t_u_s((((l_92 & (safe_sub_func_uint32_t_u_u(((((safe_unary_minus_func_uint32_t_u(((safe_rshift_func_int16_t_s_u((&g_71 != p_52), 4)) == (g_71 , l_82)))) || (-9)) || 0x2F938724) > 253U), (*p_52)))) != 0x07178D33) ^ 0x23), 10))) || l_82), (-1))) <= g_22) , &g_71) != &g_71)) || g_22)), g_71)) == g_71), g_71))) || l_92);
    return &g_71;
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_174[i][j], "g_174[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);
        }
    }
    transparent_crc(g_213, "g_213", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_214[i], "g_214[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_265[i], "g_265[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_288, "g_288", print_hash_value);
    transparent_crc(g_312, "g_312", print_hash_value);
    transparent_crc(g_328, "g_328", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_331[i][j][k], "g_331[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);
            }
        }
    }
    transparent_crc(g_401, "g_401", print_hash_value);
    transparent_crc(g_436, "g_436", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_501[i], "g_501[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_502, "g_502", print_hash_value);
    transparent_crc(g_503, "g_503", print_hash_value);
    transparent_crc(g_504, "g_504", print_hash_value);
    transparent_crc(g_525, "g_525", print_hash_value);
    transparent_crc(g_557, "g_557", print_hash_value);
    transparent_crc(g_582, "g_582", print_hash_value);
    transparent_crc(g_654, "g_654", print_hash_value);
    transparent_crc(g_663, "g_663", print_hash_value);
    transparent_crc(g_664, "g_664", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_665[i], "g_665[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_741, "g_741", print_hash_value);
    transparent_crc(g_761, "g_761", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_779[i], "g_779[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_808, "g_808", print_hash_value);
    transparent_crc(g_943, "g_943", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_978[i], "g_978[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
