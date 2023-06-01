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
static int32_t g_3 = (-7);
static int32_t g_4 = 0x45C8100C;
static int32_t g_5 = 0x3C67EE39;
static int32_t g_6 = 0xDD013D0B;
static int32_t g_7 = 2;
static int32_t g_9 = 8;
static int32_t *g_8 = &g_9;
static int16_t g_73[5] = {3,3,3,3,3};
static int16_t *g_74 = (void*)0;
static int16_t g_76 = 1;
static int8_t g_78 = 1;
static int32_t g_79 = 0x0CFCE320;
static int8_t *g_81[10][2] = {{&g_78,&g_78},{(void*)0,&g_78},{&g_78,(void*)0},{&g_78,&g_78},{&g_78,(void*)0},{&g_78,&g_78},{(void*)0,&g_78},{&g_78,&g_78},{&g_78,&g_78},{&g_78,&g_78}};
static int8_t ** const g_80 = &g_81[1][0];
static int8_t **g_82 = (void*)0;
static const int32_t g_93 = 0x642E063A;
static int16_t g_105 = 2;
static uint8_t g_204 = 0xC0;
static uint8_t g_208[7][9] = {{0x18,250U,1U,0x26,0x1B,0x91,0x1B,0x26,1U},{0U,0U,255U,1U,0x1B,1U,0xB1,0xF3,2U},{4U,0x57,0xF3,0xB1,0xF6,0x1B,0x57,1U,1U},{250U,4U,0xF3,0xF6,0xF3,4U,250U,0x91,1U},{250U,0x57,255U,4U,0x68,0x0C,0x1B,0x08,0U},{0x31,1U,0x0C,0x26,0x91,0x68,0x68,0x91,0x26},{0x97,0x31,0x97,1U,255U,0x68,0xF6,1U,0xF3}};
static uint32_t g_224 = 4294967295U;
static const int32_t *g_239[3] = {&g_5,&g_5,&g_5};
static const int32_t **g_238 = &g_239[2];
static uint32_t g_251 = 0xE312AFD5;
static uint16_t g_258[5] = {0U,0U,0U,0U,0U};
static int16_t g_265[4] = {0xF110,0xF110,0xF110,0xF110};
static uint32_t g_266 = 0U;
static int8_t g_295 = 0x18;
static uint32_t g_296 = 4294967293U;
static uint16_t g_345[10] = {0x3B09,0x3B09,1U,0x3B09,0x3B09,1U,0x3B09,0x3B09,1U,0x3B09};
static int8_t ***g_363 = &g_82;
static const int8_t g_397 = 1;
static const int16_t g_445 = (-1);
static int8_t * const ***g_516[3] = {(void*)0,(void*)0,(void*)0};
static int8_t g_527[10] = {(-1),(-1),(-1),(-1),(-1),(-1),(-1),(-1),(-1),(-1)};
static int8_t * const g_526 = &g_527[3];
static int8_t * const *g_525[4][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
static int8_t * const **g_524 = &g_525[0][1];
static int8_t * const ***g_523 = &g_524;
static int8_t g_584 = 0x78;
static int16_t g_585 = 6;
static int32_t *g_600[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
static int16_t ** const *g_610 = (void*)0;
static int16_t ** const **g_609 = &g_610;
static int8_t *g_658 = &g_527[4];
static uint16_t *g_781 = &g_258[2];
static uint16_t **g_780 = &g_781;
static uint32_t g_791 = 0x30A9C3AB;
static const int8_t g_845 = 1;
static uint32_t *g_891 = &g_251;
static uint32_t **g_890 = &g_891;
static uint8_t g_894 = 1U;
static uint32_t g_896 = 0x55278DEF;
static int32_t g_897 = 0xCCD0F77E;
static uint8_t g_947 = 0x59;
static int32_t g_961 = 0x3328F841;
static uint32_t g_1007[1][9][10] = {{{0x63497A48,0x207ADE2D,4294967292U,4294967292U,0x207ADE2D,0x63497A48,1U,0xDC13B441,0xA243F465,0xB3C137F2},{0xB3C137F2,1U,0x133BB1D3,0x93CCB31E,4294967289U,4294967294U,0x63497A48,4294967294U,4294967289U,0x93CCB31E},{0xB3C137F2,4294967294U,0xB3C137F2,0x9BC81840,0U,0x63497A48,0x93CCB31E,0x1A81B186,0x133BB1D3,0xDC13B441},{0x63497A48,0x93CCB31E,0x1A81B186,0x133BB1D3,0xDC13B441,0xDC13B441,0x133BB1D3,0x1A81B186,0x93CCB31E,0x63497A48},{0x207ADE2D,0xA798751D,0xB3C137F2,1U,0x133BB1D3,0x93CCB31E,4294967289U,4294967294U,0x63497A48,4294967294U},{0xA243F465,0xB3C137F2,0x133BB1D3,0xA798751D,0x133BB1D3,0xB3C137F2,0xA243F465,0xDC13B441,1U,0x63497A48},{0x133BB1D3,4294967289U,4294967292U,0x1A81B186,0xDC13B441,0U,1U,1U,0U,0xDC13B441},{1U,4294967289U,4294967289U,1U,0U,0x133BB1D3,0xA243F465,0x63497A48,2U,0x93CCB31E},{4294967292U,0xB3C137F2,2U,0xA243F465,4294967289U,0x1A81B186,4294967289U,0xA243F465,2U,0xB3C137F2}}};
static uint16_t g_1009 = 1U;
static uint8_t *g_1090 = &g_894;
static int32_t *g_1102 = &g_961;
static int32_t func_1(void);
static uint32_t func_10(int32_t * p_11, const int32_t * p_12, int32_t * p_13, int32_t * const p_14, uint32_t p_15);
static int32_t * const func_18(const uint32_t p_19, int16_t p_20, int32_t * p_21, uint32_t p_22, uint32_t p_23);
inline static int32_t * func_26(int16_t p_27, int16_t p_28, int32_t * p_29, int32_t ** p_30);
inline static int16_t func_33(int32_t p_34, uint8_t p_35, int32_t p_36, int32_t p_37);
static int32_t * const func_45(int32_t p_46, int32_t ** p_47, int32_t ** p_48, int32_t p_49);
static int32_t ** func_51(int32_t p_52, const int8_t p_53);
static int32_t func_54(int32_t ** p_55, uint32_t p_56);
inline static int32_t ** func_57(int32_t p_58);
inline static int32_t func_59(int32_t p_60);
static int32_t func_1(void)
{
    int16_t l_2[6][1][10] = {{{0xE2A8,1,(-10),0x4CDB,0,0xDED6,0x4555,(-5),0xDFE4,0xDFE4}},{{0,0,0x8E41,0x4555,0x4555,0x8E41,0xDED6,0x77AB,0,0xB3E9}},{{0xE2A8,0x77AB,0,0x5070,(-10),7,0x1265,0,(-4),0x4555}},{{0xBDA7,0x8E41,0,(-10),0,0,(-1),0x77AB,1,0x77AB}},{{0x47DC,(-8),0x8E41,0xB3E9,0x8E41,(-8),0x47DC,0xBDA7,0x5070,0xE2A8}},{{0xDA43,1,0xA527,0xE2A8,7,(-6),0,0xDED6,(-5),0xBDA7}}};
    int32_t *l_16 = &g_9;
    int32_t l_910[3][3] = {{(-3),(-3),(-3)},{0x7091E7B6,0x7091E7B6,0x7091E7B6},{(-3),(-3),(-3)}};
    uint32_t l_917 = 0xA833F4F9;
    int32_t ***l_1030[1];
    int16_t l_1035 = 1;
    int16_t l_1054 = 0x46FA;
    uint16_t **l_1056 = (void*)0;
    uint32_t l_1074[10][9][2] = {{{0U,1U},{0x9DBE34FF,4294967295U},{1U,4294967295U},{4U,4294967295U},{4294967288U,1U},{0x601124BB,8U},{0U,4U},{4294967293U,4294967295U},{4294967289U,4294967289U}},{{0x31663202,0x3057A298},{0U,0U},{0x8B4992FF,0x5FAC1BAF},{4294967291U,0U},{0x49E5C0FB,1U},{1U,8U},{0x41AAA537,1U},{4294967295U,0x8B4992FF},{0x84797908,1U}},{{0x89EAEE4E,0xA9CFA961},{0x08ADB001,0x4C786C28},{0x9F96A6C2,4294967286U},{4294967295U,0x49E5C0FB},{1U,0x9B568CB4},{4294967286U,0xFF6E61CF},{0U,0xF0423536},{1U,0x1EDE06BE},{0x06D7F2FB,0xB371FFBB}},{{4294967289U,0xAFC921B8},{0x2B989F32,4294967294U},{1U,1U},{0x8FB2E200,0x31663202},{4294967295U,0x601124BB},{4294967295U,1U},{0x5B70D6D8,0x5B70D6D8},{1U,0x2B989F32},{4U,4U}},{{0x0A68C87A,4294967292U},{0xA6EAE12D,0x0A68C87A},{1U,1U},{1U,0x0A68C87A},{0xA6EAE12D,4294967292U},{0x0A68C87A,4U},{4U,0x2B989F32},{1U,0x5B70D6D8},{0x5B70D6D8,1U}},{{4294967295U,0x601124BB},{4294967295U,0x31663202},{0x8FB2E200,1U},{1U,4294967294U},{0x2B989F32,0xAFC921B8},{4294967289U,0xB371FFBB},{0x06D7F2FB,0x1EDE06BE},{1U,0xF0423536},{0U,0xFF6E61CF}},{{4294967286U,0x9B568CB4},{1U,0x49E5C0FB},{4294967295U,4294967286U},{0x9F96A6C2,0x4C786C28},{0x08ADB001,0xA9CFA961},{0x89EAEE4E,1U},{0x84797908,0x8B4992FF},{4294967295U,1U},{0x41AAA537,8U}},{{1U,1U},{0x49E5C0FB,0U},{4294967291U,0x5FAC1BAF},{0x8B4992FF,1U},{0x5FAC1BAF,4294967295U},{4294967295U,8U},{0x57B32019,0x1FEE84C9},{0x08ADB001,4294967295U},{1U,0xAFC921B8}},{{4294967295U,4294967289U},{0x8B4992FF,0U},{1U,1U},{0x875F0855,4U},{0x140DD81F,1U},{0x31663202,0x08ADB001},{0U,4U},{0xA9CFA961,0x0A68C87A},{4294967295U,1U}},{{0xAFC921B8,0x1EDE06BE},{0xD4CA9CF6,0x9B568CB4},{4294967288U,0x9B568CB4},{0xD4CA9CF6,0x1EDE06BE},{0xAFC921B8,1U},{4294967295U,0x0A68C87A},{0xA9CFA961,4U},{0U,0x08ADB001},{0x31663202,1U}}};
    int32_t l_1079 = (-1);
    int8_t l_1084 = 0x11;
    int16_t l_1101 = (-9);
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1030[i] = (void*)0;
    for (g_3 = 0; (g_3 >= 0); g_3 -= 1)
    {
        int32_t l_44[2][8] = {{1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1}};
        const int32_t l_944 = (-8);
        int32_t l_945 = 0x40FE3C1A;
        int32_t l_948 = 0xEF1A60B2;
        int32_t l_1037 = 0x5817A531;
        int8_t *l_1059 = &g_527[3];
        int8_t l_1073 = 8;
        uint8_t *l_1087 = &g_208[1][1];
        uint8_t **l_1086 = &l_1087;
        uint32_t *l_1096 = (void*)0;
        uint32_t *l_1097 = &l_917;
        int16_t *l_1100 = &g_105;
        int i, j;
    }
    return g_296;
}
static uint32_t func_10(int32_t * p_11, const int32_t * p_12, int32_t * p_13, int32_t * const p_14, uint32_t p_15)
{
    int32_t l_880[2][3][4] = {{{0x21701322,(-3),0x48260263,0x48260263},{0x2FA3FE3B,0x2FA3FE3B,0x21701322,0x48260263},{0,(-3),0,0x21701322}},{{0,0x21701322,0x21701322,0},{0x2FA3FE3B,0x21701322,0x48260263,0x21701322},{0x21701322,(-3),0x48260263,0x48260263}}};
    int8_t **l_883[2];
    uint32_t *l_889[10][7] = {{&g_791,&g_791,&g_251,&g_251,&g_266,&g_266,&g_251},{&g_266,&g_266,&g_266,&g_791,&g_251,&g_791,&g_266},{&g_251,&g_791,&g_791,&g_791,&g_791,&g_791,&g_251},{&g_791,&g_251,&g_266,&g_251,&g_251,&g_791,&g_251},{&g_791,&g_251,&g_251,&g_791,&g_266,&g_266,&g_791},{&g_251,&g_266,&g_266,&g_266,&g_266,&g_266,&g_266},{&g_266,&g_251,&g_791,&g_251,&g_251,&g_791,&g_791},{&g_791,&g_251,&g_266,&g_251,&g_791,&g_251,&g_251},{&g_266,&g_266,&g_251,&g_251,&g_251,&g_251,&g_251},{&g_251,&g_251,&g_791,&g_266,&g_266,&g_791,&g_266}};
    uint32_t **l_888 = &l_889[4][1];
    int32_t l_892 = 0xDF379B21;
    int32_t l_893 = 7;
    int32_t l_895 = 1;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_883[i] = &g_81[1][0];
    l_895 = ((((p_15 <= (safe_sub_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((((p_15 , l_880[1][2][3]) | (safe_mod_func_int8_t_s_s((((-10) > 0U) , (l_893 = (l_892 = ((*g_526) = ((l_883[0] != (*g_363)) , (l_880[1][1][3] != (safe_rshift_func_uint16_t_u_u((((((safe_mod_func_uint16_t_u_u(((l_888 == g_890) , 65532U), 0x0DD0)) <= 0x73) , g_6) , 0x479B2C18) ^ g_791), (**g_780))))))))), 0xE4))) && (-1)), g_894)) > p_15), p_15))) , (void*)0) == &g_363) | p_15);
    return l_880[0][1][2];
}
static int32_t * const func_18(const uint32_t p_19, int16_t p_20, int32_t * p_21, uint32_t p_22, uint32_t p_23)
{
    uint16_t l_50 = 6U;
    int32_t **l_871 = &g_600[1];
    int32_t ***l_870 = &l_871;
    int32_t **l_874 = (void*)0;
    int32_t **l_875 = &g_600[0];
    (*l_875) = func_45((l_50 && 0xCA), ((*l_870) = func_51(func_54(func_57(func_59(l_50)), p_20), (+(0xE164 != l_50)))), &g_8, g_76);
    return &g_5;
}
inline static int32_t * func_26(int16_t p_27, int16_t p_28, int32_t * p_29, int32_t ** p_30)
{
    return &g_6;
}
inline static int16_t func_33(int32_t p_34, uint8_t p_35, int32_t p_36, int32_t p_37)
{
    int16_t l_41 = 0;
    return l_41;
}
static int32_t * const func_45(int32_t p_46, int32_t ** p_47, int32_t ** p_48, int32_t p_49)
{
    for (g_78 = (-17); (g_78 < 15); g_78++)
    {
        for (g_204 = 0; (g_204 <= 4); g_204 += 1)
        {
            int i;
            (**p_48) = g_258[g_204];
            return (*p_47);
        }
    }
    return &g_79;
}
static int32_t ** func_51(int32_t p_52, const int8_t p_53)
{
    uint32_t l_753 = 0xAD4809C7;
    uint8_t *l_757 = (void*)0;
    int32_t l_790[6][5] = {{(-1),(-1),(-1),(-1),(-1)},{0x4300DF22,0x4300DF22,0x4300DF22,0x4300DF22,0x4300DF22},{(-1),(-1),(-1),(-1),(-1)},{0x4300DF22,0x4300DF22,0x4300DF22,0x4300DF22,0x4300DF22},{(-1),(-1),(-1),(-1),(-1)},{0x4300DF22,0x4300DF22,0x4300DF22,0x4300DF22,0x4300DF22}};
    int32_t **l_793 = &g_600[1];
    uint32_t l_836 = 0U;
    int16_t **l_851 = &g_74;
    int32_t *l_864 = &g_4;
    int i, j;
    for (g_251 = 0; (g_251 <= 9); g_251 += 1)
    {
        uint16_t *l_748 = &g_258[2];
        const int8_t *l_770 = &g_527[3];
        const int8_t **l_769 = &l_770;
        const int8_t ***l_768 = &l_769;
        const uint16_t *l_778 = &g_258[3];
        const uint16_t **l_777 = &l_778;
        int32_t l_792 = 0x9AD2938E;
        const int8_t *l_844[8];
        int i;
        for (i = 0; i < 8; i++)
            l_844[i] = &g_845;
        for (g_224 = 2; (g_224 <= 9); g_224 += 1)
        {
            uint16_t *l_750[6][8][3] = {{{(void*)0,&g_345[0],(void*)0},{&g_345[0],&g_345[8],&g_258[2]},{&g_345[0],&g_258[4],&g_258[4]},{(void*)0,&g_345[8],&g_345[0]},{&g_345[0],&g_258[2],&g_258[4]},{&g_258[1],&g_345[8],&g_258[2]},{&g_345[0],&g_258[4],&g_258[4]},{(void*)0,&g_345[8],&g_345[0]}},{{&g_345[0],&g_258[2],&g_258[4]},{&g_258[1],&g_345[8],&g_258[2]},{&g_345[0],&g_258[4],&g_258[4]},{(void*)0,&g_345[8],&g_345[0]},{&g_345[0],&g_258[2],&g_258[4]},{&g_258[1],&g_345[8],&g_258[2]},{&g_345[0],&g_258[4],&g_258[4]},{(void*)0,&g_345[8],&g_345[0]}},{{&g_345[0],&g_258[2],&g_258[4]},{&g_258[1],&g_345[8],&g_258[2]},{&g_345[0],&g_258[4],&g_258[4]},{(void*)0,&g_345[8],&g_345[0]},{&g_345[0],&g_258[2],&g_258[4]},{&g_258[1],&g_345[8],&g_258[2]},{&g_345[0],&g_258[4],&g_258[4]},{(void*)0,&g_345[8],&g_345[0]}},{{&g_345[0],&g_258[2],&g_258[4]},{&g_258[1],&g_345[8],&g_258[2]},{&g_345[0],&g_258[4],&g_258[4]},{(void*)0,&g_345[8],&g_345[0]},{&g_345[0],&g_258[2],&g_258[4]},{&g_258[1],&g_345[8],&g_258[2]},{&g_345[0],&g_258[4],&g_258[4]},{(void*)0,&g_345[8],&g_345[0]}},{{&g_345[0],&g_258[2],&g_258[4]},{&g_258[1],&g_345[8],&g_258[2]},{&g_345[0],&g_258[4],&g_258[4]},{(void*)0,&g_345[8],&g_345[0]},{&g_345[0],&g_258[2],&g_258[4]},{&g_258[1],&g_345[8],&g_258[2]},{&g_345[0],&g_258[4],&g_258[4]},{(void*)0,&g_345[8],&g_345[0]}},{{&g_345[0],&g_258[2],&g_258[4]},{&g_258[1],&g_345[8],&g_258[2]},{&g_345[0],&g_258[4],&g_258[4]},{(void*)0,&g_345[8],&g_345[0]},{&g_345[0],&g_258[2],&g_258[4]},{&g_258[1],&g_345[8],&g_258[2]},{&g_345[0],&g_258[4],&g_258[4]},{(void*)0,&g_345[8],&g_345[0]}}};
            uint16_t **l_749 = &l_750[2][0][1];
            uint16_t *l_752[3];
            uint16_t **l_751 = &l_752[0];
            int32_t l_759 = 1;
            int32_t *l_760 = &g_79;
            const int8_t ** const l_848 = &l_770;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_752[i] = &g_258[3];
            (*g_238) = func_26((l_748 != ((*l_751) = ((*l_749) = (void*)0))), l_753, func_26((safe_mod_func_int16_t_s_s((~((l_757 != (void*)0) , ((p_53 || (((void*)0 == &g_296) & (~((*l_760) &= ((*g_8) = (((0x39 ^ g_295) ^ l_759) >= p_52)))))) && 0xEF))), p_52)), p_52, &g_3, &g_8), &g_600[1]);
            (*l_760) = l_753;
            if (l_759)
                goto lbl_868;
        }
    }
lbl_869:
    for (g_791 = (-17); (g_791 != 11); ++g_791)
    {
        int32_t *l_865 = &g_79;
        l_865 = l_864;
    }
lbl_868:
    (*g_8) &= (safe_lshift_func_int16_t_s_u((*l_864), 9));
    if (p_52)
        goto lbl_869;
    return &g_600[1];
}
static int32_t func_54(int32_t ** p_55, uint32_t p_56)
{
    int16_t l_746 = 1;
    return l_746;
}
inline static int32_t ** func_57(int32_t p_58)
{
    uint16_t *l_484[5] = {&g_258[2],&g_258[2],&g_258[2],&g_258[2],&g_258[2]};
    int32_t l_485 = 0x950D48E6;
    int32_t l_486 = 0x297BFD73;
    int32_t l_487 = 0x8BD8E4BD;
    int32_t l_488 = 0;
    int32_t l_489 = 7;
    int32_t l_490 = 0x2E92F049;
    int32_t l_491 = 0x1D3EAD75;
    int8_t ***l_510 = (void*)0;
    uint8_t *l_511 = &g_208[1][1];
    uint16_t l_550 = 0xF6F8;
    int32_t *l_591 = &l_487;
    uint32_t l_699 = 0x8954F009;
    int32_t l_709 = 0x2E36B844;
    int32_t l_710 = 0xFF6E8088;
    int32_t l_711 = 0xFA6EAC7C;
    int32_t l_712[5][9] = {{0x1713C13E,1,1,0x1713C13E,(-9),5,(-9),0x1713C13E,1},{(-9),(-9),0xEDBB0323,0xE5E33FEA,0x85E18353,5,0xE261065C,(-9),(-8)},{1,0x1713C13E,(-8),0xE5E33FEA,(-9),(-1),1,1,(-1)},{0xE5E33FEA,0x1713C13E,0xEDBB0323,0x1713C13E,0xE5E33FEA,0x5F439698,(-1),0xE5E33FEA,(-1)},{1,(-9),1,(-1),0xE261065C,0xEDBB0323,(-1),1,(-8)}};
    int16_t **l_743 = (void*)0;
    int16_t ***l_742 = &l_743;
    int16_t **** const l_741 = &l_742;
    uint32_t l_744 = 0xE1420297;
    const int8_t l_745[1][5] = {{1,1,1,1,1}};
    int i, j;
    (*g_8) = (safe_mod_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s((g_345[0]++), (safe_lshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s((safe_mul_func_int8_t_s_s(((0x57E579D2 != (safe_mul_func_uint8_t_u_u((g_4 != (safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((((*l_511) = (((&g_74 == &g_74) , ((l_485 < (l_490 , (p_58 , l_490))) , l_510)) == l_510)) ^ 0x12), 0)), g_76)), g_265[1])), 0x0B))), 6))) < 0x55), g_79)), p_58)), 13)))) < g_73[3]), l_490));
    for (g_78 = 29; (g_78 <= 12); g_78 = safe_sub_func_uint16_t_u_u(g_78, 1))
    {
        int8_t ** const *l_540 = (void*)0;
        int8_t ** const **l_539 = &l_540;
        int32_t l_542 = (-2);
        int32_t l_543[10];
        int16_t l_544 = 1;
        int32_t l_564 = 1;
        const int16_t *l_614[6][7] = {{&g_265[1],&g_73[2],&g_265[1],&g_73[2],&g_265[1],&g_73[2],&g_265[1]},{&g_105,&g_105,&g_105,&g_105,&g_105,&g_105,&g_105},{&g_265[1],&g_73[2],&g_265[1],&g_73[2],&g_265[1],&g_73[2],&g_265[1]},{&g_105,&g_105,&g_105,&g_105,&g_105,&g_105,&g_105},{&g_265[1],&g_73[2],&g_265[1],&g_73[2],&g_265[1],&g_73[2],&g_265[1]},{&g_105,&g_105,&g_105,&g_105,&g_105,&g_105,&g_105}};
        const int16_t **l_613 = &l_614[1][0];
        const int16_t ***l_612[9][1][4] = {{{&l_613,&l_613,&l_613,&l_613}},{{&l_613,&l_613,&l_613,&l_613}},{{&l_613,&l_613,&l_613,&l_613}},{{&l_613,&l_613,&l_613,&l_613}},{{&l_613,&l_613,&l_613,&l_613}},{{&l_613,&l_613,&l_613,&l_613}},{{&l_613,&l_613,&l_613,&l_613}},{{&l_613,&l_613,&l_613,&l_613}},{{&l_613,&l_613,&l_613,&l_613}}};
        const int16_t ****l_611[5][2][7] = {{{&l_612[5][0][3],&l_612[6][0][0],&l_612[5][0][3],&l_612[6][0][0],&l_612[5][0][3],&l_612[6][0][0],&l_612[5][0][3]},{&l_612[1][0][0],&l_612[1][0][0],&l_612[1][0][0],&l_612[1][0][0],&l_612[1][0][0],&l_612[1][0][0],&l_612[1][0][0]}},{{&l_612[1][0][0],&l_612[6][0][0],&l_612[1][0][0],&l_612[6][0][0],&l_612[1][0][0],&l_612[6][0][0],&l_612[1][0][0]},{&l_612[1][0][0],&l_612[1][0][0],&l_612[1][0][0],&l_612[1][0][0],&l_612[1][0][0],&l_612[1][0][0],&l_612[1][0][0]}},{{&l_612[5][0][3],&l_612[6][0][0],&l_612[5][0][3],&l_612[6][0][0],&l_612[5][0][3],&l_612[6][0][0],&l_612[5][0][3]},{&l_612[1][0][0],&l_612[1][0][0],&l_612[1][0][0],&l_612[1][0][0],&l_612[1][0][0],&l_612[1][0][0],&l_612[1][0][0]}},{{&l_612[1][0][0],&l_612[6][0][0],&l_612[1][0][0],&l_612[6][0][0],&l_612[1][0][0],&l_612[6][0][0],&l_612[1][0][0]},{&l_612[1][0][0],&l_612[1][0][0],&l_612[1][0][0],&l_612[1][0][0],&l_612[1][0][0],&l_612[1][0][0],&l_612[1][0][0]}},{{&l_612[5][0][3],&l_612[6][0][0],&l_612[5][0][3],&l_612[6][0][0],&l_612[5][0][3],&l_612[6][0][0],&l_612[5][0][3]},{&l_612[1][0][0],&l_612[1][0][0],&l_612[1][0][0],&l_612[1][0][0],&l_612[1][0][0],&l_612[1][0][0],&l_612[1][0][0]}}};
        int32_t *l_643 = (void*)0;
        int8_t l_688 = 0x9F;
        int i, j, k;
        for (i = 0; i < 10; i++)
            l_543[i] = (-7);
        for (g_266 = 0; (g_266 <= 6); g_266 += 1)
        {
            int32_t **l_534 = &g_8;
            for (l_487 = 0; (l_487 <= 6); l_487 += 1)
            {
                int8_t ****l_515[1][6];
                int8_t *****l_514 = &l_515[0][4];
                int8_t * const ****l_517 = &g_516[1];
                int8_t * const l_522 = (void*)0;
                int8_t * const *l_521 = &l_522;
                int8_t * const **l_520 = &l_521;
                int8_t * const ***l_519[2];
                int8_t * const ****l_518[4];
                int16_t *l_528 = &g_105;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 6; j++)
                        l_515[i][j] = &l_510;
                }
                for (i = 0; i < 2; i++)
                    l_519[i] = &l_520;
                for (i = 0; i < 4; i++)
                    l_518[i] = &l_519[1];
                (*g_238) = func_26(((*l_528) = ((((*l_514) = &g_363) != (g_523 = ((*l_517) = g_516[1]))) & g_208[l_487][(l_487 + 1)])), (~((safe_sub_func_uint8_t_u_u((g_208[g_266][g_266] >= 8), ((g_208[l_487][l_487] && (-10)) && g_208[l_487][(g_266 + 1)]))) >= (safe_mul_func_int16_t_s_s(g_3, g_9)))), &g_3, l_534);
            }
        }
        if (p_58)
            break;
    }
    for (l_486 = 0; (l_486 <= (-9)); l_486 = safe_sub_func_uint8_t_u_u(l_486, 8))
    {
        int32_t *l_702 = &g_6;
        int32_t *l_703 = &l_491;
        int32_t *l_704 = (void*)0;
        int32_t *l_705 = &l_491;
        int32_t *l_706 = &g_79;
        int32_t *l_707 = &l_489;
        int32_t *l_708[6][3][4] = {{{&l_486,&l_490,&l_487,(void*)0},{&l_489,&l_487,&g_79,(void*)0},{&l_489,&l_490,&l_489,&l_490}},{{&g_79,(void*)0,&l_488,&g_9},{&l_487,&g_79,&l_489,&g_5},{&l_487,(void*)0,&g_5,&l_487}},{{&l_487,&l_491,&l_489,&l_489},{&l_487,&l_487,&l_488,&l_485},{&g_79,&l_488,&l_489,(void*)0}},{{&l_489,&l_486,&g_79,(void*)0},{(void*)0,&g_9,&l_489,&g_9},{&g_9,(void*)0,&g_9,&l_491}},{{&g_79,&l_489,&g_79,&l_486},{&g_79,&g_79,&l_491,&l_489},{&g_9,&l_487,&l_491,&l_489}},{{&g_79,&g_79,&g_79,&g_79},{&g_79,&g_9,&g_9,&l_487},{&g_9,&l_487,&l_489,&l_487}}};
        uint8_t l_713[6][6] = {{1U,6U,1U,6U,1U,0x75},{1U,6U,1U,6U,1U,0x75},{1U,6U,1U,6U,1U,0x75},{1U,6U,1U,6U,1U,0x75},{1U,6U,1U,6U,1U,0x75},{1U,6U,1U,6U,1U,0x75}};
        int i, j, k;
        l_713[1][3]++;
        return &g_600[1];
    }
    (*g_8) = (safe_div_func_uint32_t_u_u(((safe_div_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((((*l_591) = ((safe_unary_minus_func_int8_t_s((g_585 , (safe_lshift_func_uint8_t_u_s(((((safe_lshift_func_int8_t_s_u((-10), (((safe_lshift_func_int16_t_s_u(((((safe_lshift_func_uint8_t_u_u((((*g_526) = p_58) , p_58), 7)) >= g_296) & ((safe_lshift_func_int16_t_s_u((p_58 >= (safe_lshift_func_uint16_t_u_u((0U <= (safe_sub_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_u(0x15, 4)) || (l_741 != &g_610)) , g_224), (*l_591))), 0x248B1752))), g_3))), (*l_591))) || 0xEFFDA940)) >= 0x8E42373C), 15)) , l_511) != l_511))) || l_744) , g_224) != g_585), l_745[0][1]))))) || 0x8D)) | p_58), 0xA72C)), 0x11B7E21D)) < p_58), (*g_8)));
    return &g_600[1];
}
inline static int32_t func_59(int32_t p_60)
{
    int32_t *l_69[3];
    int16_t *l_72 = &g_73[3];
    int16_t *l_75 = &g_76;
    int8_t *l_77 = &g_78;
    uint16_t l_106 = 0xD54E;
    int32_t *l_115 = &g_4;
    uint32_t l_179 = 0x79E8ABCB;
    const int8_t *l_186 = &g_78;
    const int8_t **l_185 = &l_186;
    const int8_t ***l_184 = &l_185;
    const int8_t ****l_183 = &l_184;
    int16_t **l_192 = &g_74;
    uint32_t l_209 = 9U;
    int i;
    for (i = 0; i < 3; i++)
        l_69[i] = &g_6;
    if ((g_79 ^= (((((*l_77) ^= (safe_div_func_uint32_t_u_u(p_60, ((safe_rshift_func_int16_t_s_s(0x02F4, ((((((l_69[0] == (void*)0) == ((safe_mul_func_int16_t_s_s(((*l_72) = g_4), (g_3 | ((l_75 = g_74) != l_72)))) == (*g_8))) <= 0xD5) ^ p_60) , p_60) <= g_4))) , p_60)))) ^ g_76) , p_60) <= 0)))
    {
        int32_t *l_89 = &g_7;
        int32_t l_99 = 0x8392DDE9;
        int32_t l_103 = 0x545B60A5;
        int32_t l_104 = 0x2D78A3DA;
        int32_t l_120 = 0xCABD61F3;
        int8_t ***l_145 = &g_82;
        const int32_t l_146 = (-1);
        int8_t *l_147 = (void*)0;
lbl_180:
        g_82 = g_80;
        for (p_60 = 4; (p_60 < 18); p_60 = safe_add_func_uint16_t_u_u(p_60, 1))
        {
            const int32_t **l_90 = (void*)0;
            const int32_t *l_92[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            const int32_t **l_91 = &l_92[5];
            int32_t l_102 = 0xF66F6C63;
            uint8_t l_122[4][10] = {{251U,0x84,0x9F,0x81,0x81,0x9F,0x84,251U,0x9F,251U},{0x81,1U,255U,0x81,255U,1U,0x81,255U,255U,0x81},{255U,251U,255U,255U,251U,255U,1U,251U,1U,255U},{0x84,251U,0x9F,251U,0x84,0x9F,0x81,0x81,0x9F,0x84}};
            int32_t l_125 = 1;
            int8_t **l_133 = &g_81[1][0];
            int8_t **l_141 = &g_81[9][1];
            int8_t ***l_140 = &l_141;
            uint16_t *l_172 = &l_106;
            int i, j;
            if ((safe_div_func_int16_t_s_s(((*l_72) = ((safe_mul_func_uint8_t_u_u(((((*g_8) = 0x018BFD1E) == (l_89 != ((*l_91) = (void*)0))) < ((((*l_77) &= (*l_89)) > (safe_mod_func_int8_t_s_s((*l_89), (~(((safe_add_func_uint16_t_u_u(l_99, ((p_60 && (safe_add_func_int8_t_s_s((g_7 ^ l_102), g_73[3]))) == 65535U))) >= g_93) && (*l_89)))))) != 0xA2DC)), p_60)) || (-7))), p_60)))
            {
                uint32_t l_119 = 0xEEF7B85B;
                int8_t * const **l_139 = (void*)0;
                int32_t *l_150 = &g_6;
                --l_106;
                for (l_99 = 5; (l_99 >= 0); l_99 -= 1)
                {
                    int32_t **l_116 = &l_115;
                    int32_t l_121 = 0x9EBDDF90;
                    int i;
                    (*g_8) |= (((safe_div_func_int8_t_s_s(p_60, (safe_add_func_uint32_t_u_u(0xC03A75F9, (((*l_77) = ((((safe_add_func_int16_t_s_s((((&l_92[l_99] != &g_8) && 1U) < (((((((*l_116) = l_115) != (void*)0) , ((safe_mul_func_uint8_t_u_u(g_93, (&g_9 == (*l_116)))) , 0x64)) | l_119) == l_119) || l_120)), g_93)) , p_60) > l_121) > 0xAE)) | (-1)))))) ^ l_122[1][3]) && p_60);
                }
                for (g_78 = 0; (g_78 < (-12)); g_78 = safe_sub_func_uint32_t_u_u(g_78, 7))
                {
                    int8_t ***l_132 = &g_82;
                    int8_t ***l_134 = &l_133;
                    int8_t ***l_135 = (void*)0;
                    int8_t **l_137 = &l_77;
                    int8_t ***l_136[9] = {(void*)0,&l_137,(void*)0,&l_137,(void*)0,&l_137,(void*)0,&l_137,(void*)0};
                    int8_t **l_138 = (void*)0;
                    int8_t ****l_144 = &l_140;
                    int16_t *l_148 = &g_73[3];
                    int16_t **l_149 = &g_74;
                    int i;
                    l_150 = func_26(l_125, (((*l_149) = ((safe_lshift_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((l_119 >= (-5)), ((((safe_lshift_func_int16_t_s_s(((((*g_8) || (((((((*l_132) = &g_81[3][0]) == (l_138 = ((*l_134) = l_133))) ^ (l_139 != l_140)) , ((safe_mod_func_int32_t_s_s(((((*l_72) = (((((l_145 = ((*l_144) = &g_82)) == (void*)0) , (void*)0) != &g_105) <= 0x8AA24F53)) || g_76) , 0xDF025555), p_60)) ^ (*g_8))) == l_146) & 0xD93A)) > (*g_8)) > (*g_8)), 12)) != p_60) , l_147) != (*l_141)))) ^ 1), 6)) , l_148)) == (void*)0), &g_79, &g_8);
                }
            }
            else
            {
                if ((*g_8))
                    break;
                (*g_8) = (*l_89);
                for (l_102 = 0; (l_102 <= 28); ++l_102)
                {
                    for (l_104 = 18; (l_104 == (-2)); l_104--)
                    {
                        return (*l_89);
                    }
                }
            }
            g_79 |= (((p_60 <= (((-1) != (*l_89)) , (1U ^ (safe_sub_func_uint8_t_u_u(g_5, 8))))) > (safe_lshift_func_int8_t_s_u(((p_60 , ((*g_8) = (safe_div_func_uint16_t_u_u(g_6, (*l_89))))) != g_76), 5))) < 0xD7);
            (*g_8) &= ((*l_89) == ((safe_unary_minus_func_int8_t_s((((((safe_div_func_int8_t_s_s((safe_sub_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((((*l_77) = (safe_lshift_func_uint16_t_u_s(0U, ((((*l_145) = &g_81[0][0]) != &l_147) < ((((*l_172) |= 0xD045) > g_9) , ((*l_89) != (((l_179 = (safe_add_func_int16_t_s_s(((*l_72) |= (safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((((p_60 & 1U) >= p_60) & g_105), p_60)), (*l_115)))), 6))) , (*l_89)) ^ p_60))))))) , 0xEF7775CB), 0xF70AFF55)), 0x99B2)), (-2))), p_60)) <= p_60) != (*l_89)) > p_60) , (-5)))) <= 0x1A));
            for (l_120 = 0; (l_120 <= 1); l_120 += 1)
            {
                int i;
                if (l_120)
                    goto lbl_180;
                for (l_102 = 2; (l_102 >= 0); l_102 -= 1)
                {
                    l_103 = (safe_mod_func_uint32_t_u_u((*l_115), ((*g_8) = (*l_89))));
                }
                if ((*g_8))
                    break;
            }
        }
        l_103 |= ((*g_8) ^= (l_183 == &l_145));
    }
    else
    {
        int32_t l_231 = (-5);
        uint32_t * const l_241 = &g_224;
        int32_t l_249 = 0x25EB5E7A;
        int32_t l_262 = 0x0492FC4D;
        int32_t l_263 = 0x76519DB9;
        int32_t l_264[4][6] = {{0x6D27C613,0x655A230B,0x655A230B,0x6D27C613,0x655A230B,0x655A230B},{0x6D27C613,0x655A230B,0x655A230B,0x6D27C613,0x655A230B,0x655A230B},{0x6D27C613,0x655A230B,0x655A230B,0x6D27C613,0x655A230B,0x655A230B},{0x6D27C613,0x655A230B,0x655A230B,0x6D27C613,0x655A230B,0x655A230B}};
        int8_t *l_292 = &g_78;
        int16_t **l_450 = &l_75;
        int32_t l_455 = (-5);
        const uint16_t l_466 = 1U;
        int i, j;
        for (l_106 = 29; (l_106 <= 4); l_106--)
        {
            const uint32_t l_201[9] = {0x0C375795,0x0C375795,0x0C375795,0x0C375795,0x0C375795,0x0C375795,0x0C375795,0x0C375795,0x0C375795};
            int32_t **l_242[2][9][2] = {{{&l_115,&l_69[0]},{&l_115,&l_115},{(void*)0,(void*)0},{&l_69[0],&l_69[0]},{(void*)0,(void*)0},{(void*)0,(void*)0},{&g_8,&g_8},{&g_8,(void*)0},{(void*)0,(void*)0}},{{(void*)0,&l_69[0]},{&l_69[0],(void*)0},{(void*)0,&l_115},{&l_115,&l_69[0]},{&l_115,(void*)0},{&g_8,(void*)0},{(void*)0,(void*)0},{&g_8,&l_69[0]},{&l_69[0],&l_115}}};
            uint16_t l_311 = 0x5A89;
            uint8_t l_313 = 0x7F;
            int i, j, k;
            if (((*g_8) = (safe_mul_func_uint16_t_u_u(((~((*l_72) = (&g_74 == (l_192 = &l_75)))) > (safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_add_func_int8_t_s_s(p_60, (g_9 != p_60))), l_201[4])), (0xF4 != (!g_105)))), (g_9 > p_60)))), 0U))))
            {
                uint8_t *l_203 = &g_204;
                uint8_t *l_207[1];
                uint32_t *l_223[1][4];
                int32_t l_240 = 1;
                int32_t *l_245 = &g_79;
                int32_t l_248 = 0xD261E815;
                int i, j;
                for (i = 0; i < 1; i++)
                    l_207[i] = &g_208[1][1];
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_223[i][j] = &g_224;
                }
                (*g_238) = func_26(((l_209 &= ((*l_203)++)) , ((safe_unary_minus_func_int32_t_s((safe_sub_func_int16_t_s_s(p_60, g_204)))) , (((((+(((~((g_208[5][0] = 0x8E) ^ ((safe_mul_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((((g_224--) , (p_60 || (safe_add_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((l_231 = 1U), 0x1EC3C314)) || (((((l_231 , (((((((*l_72) = ((((((((((*l_77) &= (((((safe_sub_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(p_60, (g_6 >= 0x53))), g_5)) >= l_231) , p_60) , g_238) == (void*)0)) >= l_240) && l_240) || p_60) >= g_73[1]) <= 0) ^ (**g_238)) , 0x57BE) < p_60)) , l_223[0][1]) == l_241) || 0x54) > 0x581B) , p_60)) <= l_201[4]) , l_201[2]) < 0xAC61) > 3U)), l_201[0])))) && 0xF86A), p_60)), 1)), 0x7C)), p_60)) != 0x4E9D))) <= 0x5F59) , 0x8E24BE17)) || g_93) < l_201[5]) && p_60) | p_60))), g_7, &g_4, l_242[0][5][0]);
                for (l_240 = 0; (l_240 == (-8)); --l_240)
                {
                    p_60 = p_60;
                    (*g_238) = (l_245 = &g_3);
                    for (g_78 = 12; (g_78 < 24); g_78++)
                    {
                        int16_t l_250 = 0x2FF5;
                        int32_t l_254[7][6] = {{0x77BE777D,0x77BE777D,0x985607DF,0xDA91A525,0,(-6)},{0x9895135F,0x985607DF,0x36FC4771,(-6),0x36FC4771,0x985607DF},{0xDA91A525,0x9895135F,0x36FC4771,0,0x77BE777D,(-6)},{(-6),0,0x985607DF,0x985607DF,0,(-6)},{0x985607DF,0,(-6),(-4),0x77BE777D,0x36FC4771},{0x36FC4771,0x9895135F,0xDA91A525,0x9895135F,0x36FC4771,0},{0x36FC4771,0x985607DF,0x9895135F,(-4),0,0}};
                        int32_t l_255[8][9] = {{1,8,8,1,(-1),(-5),0xD2B076EB,0x0D81AABC,(-1)},{0,0xC12E575A,0x32DA90C5,1,0xC12E575A,0x0D81AABC,7,8,0x467E5DD0},{1,(-5),0x0D81AABC,(-1),(-1),0x0D81AABC,0x3CB9E1FE,0xCB859700,0xC12E575A},{(-10),0x32DA90C5,0xCB859700,7,(-5),(-5),7,0xCB859700,0x32DA90C5},{(-1),0xCB859700,0x467E5DD0,(-5),8,(-1),0xD2B076EB,8,0xC12E575A},{(-1),0x6B9971AD,(-1),0xD2B076EB,0x00657D72,0x467E5DD0,0,0x0D81AABC,0x467E5DD0},{(-10),0xCB859700,(-1),1,0x467E5DD0,0xC12E575A,0,(-1),(-1)},{1,0x32DA90C5,0x467E5DD0,0xD2B076EB,0x467E5DD0,0x32DA90C5,1,0x00657D72,(-5)}};
                        int i, j;
                        p_60 |= ((*g_8) = 0xB6CD964B);
                        g_251++;
                        l_255[6][6] ^= (l_254[6][1] = (((**g_238) == (*g_8)) , p_60));
                    }
                    if (p_60)
                        break;
                }
                for (l_249 = 0; (l_249 <= 4); l_249 += 1)
                {
                    for (g_79 = 1; (g_79 >= 0); g_79 -= 1)
                    {
                        uint16_t *l_257 = &g_258[2];
                        int i;
                        (*g_8) = (g_73[(g_79 + 1)] < (+((*l_257)++)));
                        return (*g_8);
                    }
                    return p_60;
                }
            }
            else
            {
                int8_t l_261 = (-1);
                g_266--;
                return (*g_8);
            }
            if (p_60)
                continue;
            for (l_179 = 0; (l_179 <= 59); l_179++)
            {
                uint16_t *l_293 = &g_258[4];
                int32_t l_294[5] = {0x643B3FE9,0x643B3FE9,0x643B3FE9,0x643B3FE9,0x643B3FE9};
                int8_t **l_347 = (void*)0;
                uint32_t l_395 = 0xBDAC23D5;
                int32_t *l_400 = &l_263;
                int8_t l_446[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_446[i] = 5;
            }
        }
        for (g_296 = 0; (g_296 >= 18); g_296++)
        {
            (*g_238) = &l_262;
            (*g_8) |= 0x3CF5C49D;
        }
        (*g_8) = ((p_60 | ((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u((((safe_lshift_func_int16_t_s_s(p_60, (((*g_238) != (*g_238)) , (g_5 , (safe_sub_func_int8_t_s_s(l_466, ((((g_258[2] ^= (*l_115)) && ((*l_72) &= (l_466 > (g_265[2] & (**g_238))))) >= 0x2B) ^ l_249))))))) , p_60) > g_445), 2)), g_7)) != 1U)) , (-1));
        l_263 = ((-4) & (safe_div_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(2, 2)), (safe_mul_func_int8_t_s_s(((l_264[3][3] = 0x85) <= (~3U)), ((*l_77) = (-2)))))), (p_60 |= ((safe_lshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((*l_192) == (void*)0), 0xB284F151)), ((*g_8) ^ (-8)))) > g_9)))));
    }
    return (*g_8);
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_73[i], "g_73[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_208[i][j], "g_208[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);
        }
    }
    transparent_crc(g_224, "g_224", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_258[i], "g_258[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_265[i], "g_265[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_266, "g_266", print_hash_value);
    transparent_crc(g_295, "g_295", print_hash_value);
    transparent_crc(g_296, "g_296", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_345[i], "g_345[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_397, "g_397", print_hash_value);
    transparent_crc(g_445, "g_445", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_527[i], "g_527[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_584, "g_584", print_hash_value);
    transparent_crc(g_585, "g_585", print_hash_value);
    transparent_crc(g_791, "g_791", print_hash_value);
    transparent_crc(g_845, "g_845", print_hash_value);
    transparent_crc(g_894, "g_894", print_hash_value);
    transparent_crc(g_896, "g_896", print_hash_value);
    transparent_crc(g_897, "g_897", print_hash_value);
    transparent_crc(g_947, "g_947", print_hash_value);
    transparent_crc(g_961, "g_961", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_1007[i][j][k], "g_1007[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);
            }
        }
    }
    transparent_crc(g_1009, "g_1009", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
