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
#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t f0;
};
#pragma pack(pop)
static int8_t g_19 = 0xF1;
static int32_t g_24[10] = {4,4,4,4,4,4,4,4,4,4};
static int32_t *g_23 = &g_24[8];
static const int32_t g_27 = (-2);
static const int32_t *g_26 = &g_27;
static int16_t g_34[8] = {0xAA1C,0xAA1C,0xAA1C,0xAA1C,0xAA1C,0xAA1C,0xAA1C,0xAA1C};
static uint8_t g_36[5][7] = {{249U,0xB6,0xB6,249U,251U,254U,0x68},{254U,0xB6,255U,0x62,0xE0,251U,255U},{0x68,0x42,254U,0U,254U,0x42,0x68},{0xDF,0U,0x42,255U,254U,0x32,0xB6},{255U,246U,255U,0x68,0x78,0x78,0x68}};
static uint8_t g_52 = 1U;
static uint16_t g_66 = 0U;
static uint8_t g_67 = 0U;
static int32_t g_69 = 0x40913DB3;
static int16_t g_83 = 0x0487;
static int32_t g_95 = 0x54E6A768;
static uint32_t g_96 = 0x6F2FD6C9;
static int16_t **g_98 = (void*)0;
static int8_t g_137[5] = {1,1,1,1,1};
static uint8_t g_141[6][2][10] = {{{3U,3U,254U,0U,3U,255U,0U,0U,255U,3U},{3U,0x6B,0x6B,3U,0xA9,0x6B,0U,0xA9,0xA9,0U}},{{0xA9,3U,0x6B,0x6B,3U,0xA9,0x6B,0U,0xA9,0xA9},{3U,0U,254U,3U,3U,254U,0U,3U,255U,0U}},{{3U,0xA9,0x6B,0U,0xA9,0xA9,0U,0x6B,0xA9,3U},{0xA9,0U,0x6B,0xA9,3U,0x6B,0x6B,3U,0xA9,0x6B}},{{3U,3U,254U,0U,3U,255U,0U,0U,255U,3U},{3U,0x6B,0x6B,3U,0xA9,0x6B,0U,0xA9,0xA9,0U}},{{0xA9,3U,0x6B,0x6B,3U,0xA9,0x6B,0U,0xA9,0xA9},{3U,0U,254U,3U,3U,254U,0U,3U,255U,0U}},{{3U,0xA9,0x6B,0U,0xA9,0xA9,0U,0x6B,0xA9,3U},{0xA9,0U,0x6B,0xA9,3U,0x6B,0x6B,3U,0xA9,0x6B}}};
static struct S0 g_213 = {0xC9C70339};
static int32_t * const *g_222[4] = {&g_23,&g_23,&g_23,&g_23};
static int32_t * const **g_221 = &g_222[3];
static int16_t ** const *g_275 = &g_98;
static int16_t *g_357 = (void*)0;
static int16_t **g_356[2][3][5] = {{{&g_357,&g_357,&g_357,&g_357,&g_357},{&g_357,&g_357,&g_357,&g_357,&g_357},{&g_357,&g_357,&g_357,&g_357,&g_357}},{{&g_357,&g_357,&g_357,&g_357,&g_357},{&g_357,&g_357,&g_357,&g_357,&g_357},{&g_357,&g_357,&g_357,&g_357,&g_357}}};
static uint8_t *g_364[3][7] = {{&g_141[5][1][9],&g_141[5][1][9],&g_141[5][1][9],&g_141[5][1][9],&g_141[5][1][9],&g_141[5][1][9],&g_141[5][1][9]},{&g_141[5][1][9],&g_141[5][1][9],&g_141[5][1][9],&g_141[5][1][9],&g_141[5][1][9],&g_141[5][1][9],&g_141[5][1][9]},{&g_141[5][1][9],&g_141[5][1][9],&g_141[5][1][9],&g_141[5][1][9],&g_141[5][1][9],&g_141[5][1][9],&g_141[5][1][9]}};
static uint8_t **g_363 = &g_364[1][2];
static int16_t g_376 = 0xAB47;
static int8_t g_390[3][3] = {{1,1,1},{0xBD,0xBD,0xBD},{1,1,1}};
static const int8_t *g_394 = &g_137[2];
static const int8_t **g_393 = &g_394;
static struct S0 g_411 = {-6};
static int8_t g_470 = 0x45;
static uint16_t *g_476 = (void*)0;
static int8_t **g_510 = (void*)0;
static int8_t ***g_509 = &g_510;
static int8_t ****g_508 = &g_509;
static struct S0 *g_521 = &g_411;
static int16_t g_594 = 0xA11C;
static const int32_t * const **g_676 = (void*)0;
static uint16_t g_720 = 0xD661;
static uint16_t **g_802 = &g_476;
static const uint16_t *g_808 = &g_720;
static const uint16_t **g_807 = &g_808;
static const uint16_t ***g_806 = &g_807;
static const int8_t *****g_922 = (void*)0;
static int32_t g_925 = 0;
static uint16_t ** const *g_939 = &g_802;
static uint16_t ** const **g_938 = &g_939;
static uint8_t func_1(void);
static int32_t * func_2(uint32_t p_3, int32_t * p_4, int32_t * p_5, uint32_t p_6, int32_t * p_7);
static uint16_t func_10(int32_t * p_11);
static int32_t * func_12(int16_t p_13, const int8_t p_14, const int32_t * p_15, int16_t p_16);
static int32_t * func_20(int32_t * const p_21);
static uint16_t func_41(uint8_t * p_42, struct S0 p_43, int16_t * p_44, uint16_t p_45);
static uint8_t * func_46(int32_t * p_47);
static uint16_t func_54(uint8_t p_55, int32_t p_56, int16_t * p_57);
static int16_t * func_58(uint16_t p_59, uint16_t p_60);
static int32_t func_75(const int32_t p_76);
static uint8_t func_1(void)
{
    int32_t * const l_22 = (void*)0;
    const int32_t **l_25 = (void*)0;
    int32_t l_30 = 0x1362395E;
    int16_t *l_33 = &g_34[0];
    uint32_t *l_883 = &g_96;
    int32_t **l_926 = (void*)0;
    int32_t **l_927 = &g_23;
    uint16_t **l_933 = &g_476;
    uint16_t *l_934 = &g_720;
    (*l_927) = func_2(((*l_883) = (safe_add_func_int16_t_s_s((func_10(func_12(((safe_rshift_func_int8_t_s_s(1, g_19)) == 9), g_19, (g_26 = func_20(l_22)), (safe_div_func_int16_t_s_s(l_30, ((*l_33) = (safe_lshift_func_int16_t_s_u(g_24[8], g_24[8]))))))) && l_30), 0x8B83))), l_883, l_883, g_390[2][1], l_883);
    if ((safe_div_func_int8_t_s_s(((safe_add_func_int16_t_s_s((**l_927), (1U ^ (249U || ((~((**l_927) | (0x9B46EB46 ^ (((*g_806) != l_933) == (((*l_934) = (**l_927)) > (**l_927)))))) == (**l_927)))))) == g_470), (**g_393))))
    {
        uint16_t ***l_937 = &g_802;
        uint16_t ****l_936 = &l_937;
        uint16_t *****l_935[8][7][2] = {{{(void*)0,(void*)0},{&l_936,&l_936},{&l_936,(void*)0},{(void*)0,&l_936},{(void*)0,&l_936},{(void*)0,(void*)0},{&l_936,&l_936}},{{&l_936,(void*)0},{(void*)0,&l_936},{(void*)0,&l_936},{(void*)0,(void*)0},{&l_936,&l_936},{&l_936,(void*)0},{(void*)0,&l_936}},{{(void*)0,&l_936},{(void*)0,(void*)0},{&l_936,&l_936},{&l_936,(void*)0},{(void*)0,&l_936},{(void*)0,&l_936},{(void*)0,(void*)0}},{{&l_936,&l_936},{&l_936,(void*)0},{(void*)0,&l_936},{(void*)0,&l_936},{(void*)0,(void*)0},{&l_936,&l_936},{&l_936,(void*)0}},{{(void*)0,&l_936},{(void*)0,&l_936},{(void*)0,(void*)0},{&l_936,&l_936},{&l_936,(void*)0},{(void*)0,&l_936},{(void*)0,&l_936}},{{(void*)0,(void*)0},{&l_936,&l_936},{&l_936,(void*)0},{(void*)0,&l_936},{(void*)0,&l_936},{(void*)0,(void*)0},{&l_936,&l_936}},{{&l_936,(void*)0},{(void*)0,&l_936},{(void*)0,&l_936},{(void*)0,(void*)0},{&l_936,&l_936},{&l_936,(void*)0},{(void*)0,&l_936}},{{(void*)0,&l_936},{(void*)0,(void*)0},{&l_936,&l_936},{&l_936,(void*)0},{(void*)0,&l_936},{(void*)0,&l_936},{(void*)0,(void*)0}}};
        int i, j, k;
        g_938 = (void*)0;
    }
    else
    {
        for (g_52 = 22; (g_52 != 9); --g_52)
        {
            const int32_t *l_942[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            g_26 = (l_942[1] = &g_27);
            return (**g_363);
        }
    }
    return (**l_927);
}
static int32_t * func_2(uint32_t p_3, int32_t * p_4, int32_t * p_5, uint32_t p_6, int32_t * p_7)
{
    int32_t *l_884 = (void*)0;
    int32_t **l_885 = &l_884;
    struct S0 l_907 = {-6};
    (*l_885) = l_884;
    (*l_885) = (void*)0;
    for (g_19 = 0; (g_19 > 15); ++g_19)
    {
        int16_t l_890 = (-1);
        const int32_t l_918[6][5][6] = {{{0x58BA64A3,0x9620694B,0x1B73B495,1,0xCB24DFAB,(-1)},{0xDDC61FB8,0xE87DFC7D,0xD304CF94,1,0x00C34CBE,1},{0xA4A39A87,(-1),1,0xFBAD997F,0x8C8214FF,0x0F57F269},{0x8C21E846,0xCB24DFAB,0x27F77073,0x3FBEE1CF,0x964DD32E,0x31C39EEC},{0x8307D135,4,0xAB454AA2,0x970CFC89,(-1),(-1)}},{{0xE20C4A90,0x00C34CBE,0x00C34CBE,0xE20C4A90,1,5},{(-1),0xB2EAAC24,(-2),0x9620694B,0xB3F061AA,1},{0xE3623D4A,0x8307D135,0xFD66DF76,1,0xB3F061AA,(-1)},{0x1B73B495,0xB2EAAC24,0xB5A2F216,0x136818FE,1,1},{0x0F57F269,0x00C34CBE,0x3FBEE1CF,0xEAA3FEA2,(-1),0x8370821D}},{{(-1),4,0xD1940A47,1,0x964DD32E,8},{8,0xE3623D4A,1,0x58BA64A3,0x9727AB4A,0x8DE389E2},{(-1),0x970CFC89,(-2),(-1),0xD304CF94,4},{(-1),0x8370821D,0xE3E59298,(-1),0xE3623D4A,0xC06A23EF},{0xD1940A47,0xE20C4A90,(-4),(-1),0x00C34CBE,0x8C21E846}},{{0xE1DEA056,0x9805DE2D,0x58BA64A3,8,0xBFCA3219,0x9038211E},{0xFBAD997F,0x478DBB22,0xB5A2F216,0x9727AB4A,0x9805DE2D,0xFBAD997F},{0x00C34CBE,0,0xC06A23EF,0xCB24DFAB,(-2),1},{0x9727AB4A,0x8370821D,0x964DD32E,0x340D4AD3,0xE0FCD5A5,0xDDC61FB8},{0x1B73B495,5,0x340D4AD3,5,0x1B73B495,1}},{{0x27F77073,(-2),0xD304CF94,0xB5A2F216,0xA4A39A87,0x136818FE},{0xFBAD997F,0x8307D135,0x3FBEE1CF,(-2),0x88B0ECD9,0x136818FE},{0x31C39EEC,0xFD66DF76,0xD304CF94,(-7),(-5),1},{0x88B0ECD9,(-1),0x340D4AD3,(-1),0x0F57F269,0xDDC61FB8},{0x9620694B,1,0x964DD32E,1,0x970CFC89,1}},{{0x8DE389E2,(-1),0xC06A23EF,8,0x12F21C99,0xFBAD997F},{8,0xE0FCD5A5,0xB5A2F216,0xDDC61FB8,0x88B0ECD9,0x9038211E},{0,1,0x58BA64A3,0x49A1DC99,0xDDC61FB8,0x8C21E846},{(-2),0xE3623D4A,(-4),9,1,0xC06A23EF},{(-1),5,0xE3E59298,1,0xFD66DF76,4}}};
        const int8_t ***l_921 = &g_393;
        const int8_t ****l_920 = &l_921;
        const int8_t *****l_919 = &l_920;
        int i, j, k;
        (*p_5) = (safe_add_func_int32_t_s_s((*p_5), l_890));
    }
    return p_5;
}
static uint16_t func_10(int32_t * p_11)
{
    int32_t *l_48 = (void*)0;
    struct S0 l_53 = {0xD1EDBCC7};
    uint32_t *l_531 = (void*)0;
    uint32_t **l_530 = &l_531;
    int16_t l_544 = 0x1064;
    int16_t **l_595 = &g_357;
    uint16_t l_599 = 0x3F55;
    int32_t l_608 = 0xD444DE94;
    uint32_t l_627 = 4U;
    const int32_t *l_636 = &g_27;
    int8_t *** const *l_655 = (void*)0;
    int8_t ** const *l_662[5];
    struct S0 **l_682[6];
    const int8_t l_686[8] = {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
    int32_t ****l_703 = (void*)0;
    int8_t *l_767 = &g_470;
    int32_t l_778 = 0x77C20780;
    int32_t l_792 = 0xCB60EA42;
    int32_t l_830 = 0x1B9E81CF;
    int32_t *l_858 = (void*)0;
    int i;
    for (i = 0; i < 5; i++)
        l_662[i] = &g_510;
    for (i = 0; i < 6; i++)
        l_682[i] = &g_521;
    for (g_19 = 7; (g_19 >= 2); g_19 -= 1)
    {
        uint8_t *l_35[8][10][3] = {{{&g_36[3][3],&g_36[4][2],(void*)0},{&g_36[1][4],&g_36[0][2],&g_36[3][4]},{(void*)0,&g_36[3][3],&g_36[4][3]},{(void*)0,&g_36[4][2],&g_36[4][3]},{&g_36[4][3],&g_36[4][3],&g_36[4][3]},{&g_36[3][1],&g_36[4][3],&g_36[4][3]},{(void*)0,&g_36[4][3],&g_36[3][4]},{&g_36[4][3],&g_36[3][1],(void*)0},{&g_36[4][2],&g_36[4][3],(void*)0},{&g_36[4][3],&g_36[3][3],&g_36[4][5]}},{{&g_36[4][3],&g_36[4][2],&g_36[4][3]},{&g_36[4][3],&g_36[4][3],&g_36[4][3]},{&g_36[4][2],&g_36[4][3],&g_36[4][3]},{&g_36[4][3],(void*)0,(void*)0},{(void*)0,&g_36[3][1],&g_36[3][4]},{&g_36[3][1],&g_36[0][2],(void*)0},{&g_36[4][3],&g_36[0][2],&g_36[3][0]},{(void*)0,&g_36[3][1],&g_36[4][3]},{(void*)0,(void*)0,&g_36[4][3]},{&g_36[1][4],&g_36[4][3],&g_36[4][5]}},{{&g_36[3][3],&g_36[4][3],(void*)0},{(void*)0,&g_36[4][2],&g_36[4][3]},{&g_36[4][2],&g_36[3][3],&g_36[4][3]},{&g_36[4][3],&g_36[3][2],&g_36[4][3]},{&g_36[1][2],&g_36[3][3],&g_36[4][3]},{&g_36[4][3],&g_36[4][3],&g_36[4][3]},{&g_36[2][4],&g_36[0][2],&g_36[4][0]},{&g_36[3][2],&g_36[4][3],&g_36[4][3]},{&g_36[3][2],&g_36[0][2],(void*)0},{&g_36[2][4],&g_36[4][3],&g_36[4][3]}},{{&g_36[4][3],(void*)0,&g_36[4][3]},{&g_36[1][2],&g_36[4][3],&g_36[4][3]},{&g_36[4][3],&g_36[4][3],&g_36[4][3]},{&g_36[0][2],&g_36[1][0],&g_36[4][3]},{(void*)0,&g_36[4][3],&g_36[4][3]},{&g_36[4][3],&g_36[4][3],&g_36[1][5]},{&g_36[2][4],(void*)0,&g_36[4][3]},{&g_36[4][3],&g_36[4][3],&g_36[4][3]},{&g_36[1][0],&g_36[0][2],&g_36[4][3]},{&g_36[4][3],&g_36[4][3],&g_36[4][3]}},{{&g_36[3][3],&g_36[0][2],&g_36[4][3]},{(void*)0,&g_36[4][3],&g_36[4][3]},{&g_36[3][2],&g_36[3][3],&g_36[1][5]},{&g_36[0][2],&g_36[3][2],&g_36[4][3]},{&g_36[4][3],&g_36[4][3],&g_36[4][3]},{(void*)0,&g_36[4][3],&g_36[4][3]},{&g_36[4][3],&g_36[4][3],&g_36[4][3]},{&g_36[0][2],(void*)0,&g_36[4][3]},{&g_36[3][2],&g_36[4][3],&g_36[4][3]},{(void*)0,&g_36[3][3],(void*)0}},{{&g_36[3][3],(void*)0,&g_36[4][3]},{&g_36[4][3],(void*)0,&g_36[4][0]},{&g_36[1][0],&g_36[3][3],&g_36[4][3]},{&g_36[4][3],&g_36[4][3],&g_36[4][3]},{&g_36[2][4],(void*)0,&g_36[4][3]},{&g_36[4][3],&g_36[4][3],&g_36[4][3]},{(void*)0,&g_36[4][3],&g_36[1][3]},{&g_36[0][2],&g_36[4][3],&g_36[4][3]},{&g_36[4][3],&g_36[3][2],&g_36[4][3]},{&g_36[1][2],&g_36[3][3],&g_36[4][3]}},{{&g_36[4][3],&g_36[4][3],&g_36[4][3]},{&g_36[2][4],&g_36[0][2],&g_36[4][0]},{&g_36[3][2],&g_36[4][3],&g_36[4][3]},{&g_36[3][2],&g_36[0][2],(void*)0},{&g_36[2][4],&g_36[4][3],&g_36[4][3]},{&g_36[4][3],(void*)0,&g_36[4][3]},{&g_36[1][2],&g_36[4][3],&g_36[4][3]},{&g_36[4][3],&g_36[4][3],&g_36[4][3]},{&g_36[0][2],&g_36[1][0],&g_36[4][3]},{(void*)0,&g_36[4][3],&g_36[4][3]}},{{&g_36[4][3],&g_36[4][3],&g_36[1][5]},{&g_36[2][4],(void*)0,&g_36[4][3]},{&g_36[4][3],&g_36[4][3],&g_36[4][3]},{&g_36[1][0],&g_36[0][2],&g_36[4][3]},{&g_36[4][3],&g_36[4][3],&g_36[4][3]},{&g_36[3][3],&g_36[0][2],&g_36[4][3]},{(void*)0,&g_36[4][3],&g_36[4][3]},{&g_36[3][2],&g_36[3][3],&g_36[1][5]},{&g_36[0][2],&g_36[3][2],&g_36[4][3]},{&g_36[4][3],&g_36[4][3],&g_36[4][3]}}};
        uint16_t *l_63 = (void*)0;
        uint16_t *l_64 = (void*)0;
        uint16_t *l_65[5];
        struct S0 *l_518 = (void*)0;
        int16_t **l_522 = &g_357;
        int32_t l_524 = 7;
        int8_t ** const l_559 = (void*)0;
        int8_t ** const *l_558[1][8][1];
        int8_t ** const **l_557[4];
        int8_t ** const ***l_556 = &l_557[2];
        uint32_t **l_561 = (void*)0;
        int32_t l_609 = 0x1A15CCAE;
        int32_t **l_644 = &g_23;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_65[i] = &g_66;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 8; j++)
            {
                for (k = 0; k < 1; k++)
                    l_558[i][j][k] = &l_559;
            }
        }
        for (i = 0; i < 4; i++)
            l_557[i] = &l_558[0][7][0];
    }
    if (((*l_636) && (**g_363)))
    {
        for (l_608 = 0; (l_608 != 0); l_608 = safe_add_func_int32_t_s_s(l_608, 7))
        {
            int32_t **l_647[1][1][2];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_647[i][j][k] = &l_48;
                }
            }
            g_26 = p_11;
        }
    }
    else
    {
        int8_t ****l_654[6][9][4] = {{{&g_509,&g_509,(void*)0,&g_509},{&g_509,&g_509,&g_509,&g_509},{&g_509,&g_509,&g_509,&g_509},{&g_509,&g_509,(void*)0,&g_509},{&g_509,&g_509,&g_509,&g_509},{(void*)0,&g_509,(void*)0,(void*)0},{&g_509,&g_509,&g_509,&g_509},{&g_509,(void*)0,(void*)0,&g_509},{(void*)0,&g_509,(void*)0,(void*)0}},{{&g_509,&g_509,&g_509,&g_509},{&g_509,(void*)0,(void*)0,&g_509},{(void*)0,&g_509,(void*)0,(void*)0},{&g_509,&g_509,&g_509,&g_509},{&g_509,(void*)0,(void*)0,&g_509},{(void*)0,&g_509,(void*)0,(void*)0},{&g_509,&g_509,&g_509,&g_509},{&g_509,(void*)0,(void*)0,&g_509},{(void*)0,&g_509,(void*)0,(void*)0}},{{&g_509,&g_509,&g_509,&g_509},{&g_509,(void*)0,(void*)0,&g_509},{(void*)0,&g_509,(void*)0,(void*)0},{&g_509,&g_509,&g_509,&g_509},{&g_509,(void*)0,(void*)0,&g_509},{(void*)0,&g_509,(void*)0,(void*)0},{&g_509,&g_509,&g_509,&g_509},{&g_509,(void*)0,(void*)0,&g_509},{(void*)0,&g_509,(void*)0,(void*)0}},{{&g_509,&g_509,&g_509,&g_509},{&g_509,(void*)0,(void*)0,&g_509},{(void*)0,&g_509,(void*)0,(void*)0},{&g_509,&g_509,&g_509,&g_509},{&g_509,(void*)0,(void*)0,&g_509},{(void*)0,&g_509,(void*)0,(void*)0},{&g_509,&g_509,&g_509,&g_509},{&g_509,(void*)0,(void*)0,&g_509},{(void*)0,&g_509,(void*)0,(void*)0}},{{&g_509,&g_509,&g_509,&g_509},{&g_509,(void*)0,(void*)0,&g_509},{(void*)0,&g_509,(void*)0,(void*)0},{&g_509,&g_509,&g_509,&g_509},{&g_509,(void*)0,(void*)0,&g_509},{(void*)0,&g_509,(void*)0,(void*)0},{&g_509,&g_509,&g_509,&g_509},{&g_509,(void*)0,(void*)0,&g_509},{(void*)0,&g_509,(void*)0,(void*)0}},{{&g_509,&g_509,&g_509,&g_509},{&g_509,(void*)0,(void*)0,&g_509},{(void*)0,&g_509,(void*)0,(void*)0},{&g_509,&g_509,&g_509,&g_509},{&g_509,(void*)0,(void*)0,&g_509},{(void*)0,&g_509,(void*)0,(void*)0},{&g_509,&g_509,&g_509,&g_509},{&g_509,(void*)0,&g_509,(void*)0},{&g_509,(void*)0,&g_509,&g_509}}};
        int32_t l_656 = 0xAE2442DF;
        int32_t l_663 = (-1);
        int32_t *l_669 = &l_608;
        const int32_t * const *l_674 = &g_26;
        const int32_t * const **l_673 = &l_674;
        uint8_t l_698[5] = {9U,9U,9U,9U,9U};
        int8_t *l_717 = &g_19;
        int8_t **l_716 = &l_717;
        struct S0 l_743 = {0};
        struct S0 l_744[4][3] = {{{0xE7BCC59F},{0x282494DB},{0x8ACD1B99}},{{0xE7BCC59F},{0xE7BCC59F},{0x282494DB}},{{1},{0x282494DB},{0x282494DB}},{{0x282494DB},{-1},{0x8ACD1B99}}};
        uint16_t l_771 = 0x7BC0;
        int32_t l_772 = (-1);
        uint8_t l_773[6][6][4] = {{{0x1B,0U,249U,0x47},{0x1B,0xF0,9U,0xF0},{0xEC,0x47,249U,0U},{0xEC,0U,9U,1U},{0x1B,0xA4,249U,0x6C},{0x1B,2U,9U,2U}},{{0xEC,0x6C,249U,0xA4},{0xEC,1U,9U,0U},{0x1B,0U,249U,0x47},{0x1B,0xF0,9U,0xF0},{0xEC,0x47,249U,0U},{0xEC,0U,9U,1U}},{{0x1B,0xA4,249U,0x6C},{0x1B,2U,9U,2U},{0xEC,0x6C,249U,0xA4},{0xEC,1U,9U,0U},{0x1B,0U,249U,0x47},{0x1B,0xF0,9U,0xF0}},{{0xEC,0x47,249U,0U},{0xEC,0U,9U,1U},{0x1B,0xA4,249U,0x6C},{0x1B,2U,9U,2U},{0xEC,0x6C,249U,0xA4},{0xEC,1U,9U,0U}},{{0x1B,0U,249U,0x47},{0x1B,0xF0,9U,0xF0},{0xEC,0x47,249U,0U},{0xEC,0U,9U,1U},{0x1B,0xA4,249U,0x6C},{0x1B,2U,9U,2U}},{{0xEC,0x6C,249U,0xA4},{0xEC,1U,9U,0U},{0x1B,0U,249U,0x47},{0x1B,0xF0,9U,0xF0},{0xEC,0x47,249U,0U},{0xEC,0U,9U,1U}}};
        uint32_t l_822 = 2U;
        struct S0 **l_838 = &g_521;
        int32_t **l_855 = &g_23;
        int i, j, k;
        (*l_669) = ((***g_221) = (safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s((l_654[5][3][0] == l_655), (l_656 >= (safe_div_func_uint16_t_u_u((*l_636), (~(safe_sub_func_uint8_t_u_u(((l_663 = (((*g_508) = (*g_508)) != l_662[4])) < (!g_36[4][3])), ((0 <= (((g_19 = ((((safe_div_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(((l_656 | (*l_636)) || 0x7973), g_411.f0)), 7U)) | l_656) > g_34[0]) < g_19)) ^ l_656) > (*l_636))) == l_656))))))))), (**g_393))), 4)));
        if (((void*)0 != &g_521))
        {
            int8_t l_679 = 7;
            const int32_t *l_725[10][6][2] = {{{(void*)0,(void*)0},{&l_608,&l_663},{&l_663,&l_663},{&l_608,(void*)0},{(void*)0,&g_24[0]},{&l_663,&l_608}},{{&l_608,&l_663},{&g_69,&l_663},{&g_69,&l_663},{&l_608,&l_608},{&l_663,&g_24[0]},{(void*)0,&l_608}},{{&l_663,&l_608},{&l_608,&l_608},{&l_663,&l_608},{&g_69,&l_608},{&l_663,&l_663},{(void*)0,&l_663}},{{(void*)0,&g_24[7]},{(void*)0,&l_663},{(void*)0,&l_663},{&l_663,&l_608},{&g_69,&l_608},{&l_663,&l_608}},{{&l_608,&l_608},{&l_663,&l_608},{&g_69,&l_608},{&l_663,&l_663},{(void*)0,&l_663},{(void*)0,&g_24[7]}},{{(void*)0,&l_663},{(void*)0,&l_663},{&l_663,&l_608},{&g_69,&l_608},{&l_663,&l_608},{&l_608,&l_608}},{{&l_663,&l_608},{&g_69,&l_608},{&l_663,&l_663},{(void*)0,&l_663},{(void*)0,&g_24[7]},{(void*)0,&l_663}},{{(void*)0,&l_663},{&l_663,&l_608},{&g_69,&l_608},{&l_663,&l_608},{&l_608,&l_608},{&l_663,&l_608}},{{&g_69,&l_608},{&l_663,&l_663},{(void*)0,&l_663},{(void*)0,&g_24[7]},{(void*)0,&l_663},{(void*)0,&l_663}},{{&l_663,&l_608},{&g_69,&l_608},{&l_663,&l_608},{&l_608,&l_608},{&l_663,&l_608},{&g_69,&l_608}}};
            int16_t l_736 = 0xB3E5;
            int32_t l_737 = 0x0481B764;
            int i, j, k;
            for (g_66 = 27; (g_66 < 23); --g_66)
            {
                g_23 = (**g_221);
            }
            if (((*p_11) = 0x07AB5164))
            {
                int32_t **l_672 = &l_48;
                const int32_t * const ***l_675[7][10] = {{&l_673,&l_673,&l_673,&l_673,&l_673,(void*)0,&l_673,&l_673,(void*)0,&l_673},{&l_673,&l_673,&l_673,&l_673,&l_673,&l_673,(void*)0,&l_673,&l_673,(void*)0},{&l_673,&l_673,&l_673,&l_673,&l_673,(void*)0,&l_673,(void*)0,&l_673,(void*)0},{&l_673,&l_673,&l_673,&l_673,&l_673,&l_673,&l_673,&l_673,(void*)0,&l_673},{(void*)0,&l_673,(void*)0,&l_673,&l_673,&l_673,&l_673,&l_673,(void*)0,&l_673},{&l_673,&l_673,&l_673,&l_673,&l_673,&l_673,&l_673,&l_673,&l_673,&l_673},{(void*)0,&l_673,(void*)0,(void*)0,&l_673,&l_673,&l_673,&l_673,&l_673,&l_673}};
                int i, j;
                (*l_672) = &l_663;
                g_676 = l_673;
            }
            else
            {
                int32_t **l_683[8] = {&l_669,&l_669,&l_48,&l_669,&l_669,&l_48,&l_669,&l_669};
                int32_t *** const l_705 = &l_683[5];
                int32_t *** const *l_704[5][2] = {{&l_705,(void*)0},{&l_705,&l_705},{(void*)0,(void*)0},{(void*)0,&l_705},{&l_705,(void*)0}};
                int i, j;
                if ((safe_add_func_int16_t_s_s((((l_669 = func_12(l_679, ((((safe_add_func_uint16_t_u_u(0x79FB, (*l_636))) >= 1U) != 6U) || (l_682[5] == &g_521)), func_20((p_11 = p_11)), (***l_673))) == (*l_674)) != (*l_636)), 0x8639)))
                {
                    int8_t *l_685 = (void*)0;
                    int8_t **l_684 = &l_685;
                    int32_t l_689 = (-7);
                    int32_t l_696[3];
                    int32_t l_697 = (-1);
                    int16_t *l_718 = &g_34[6];
                    uint16_t l_719 = 65535U;
                    int32_t *l_721 = (void*)0;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_696[i] = 1;
                    g_26 = func_12((((**g_508) = l_684) != &l_685), l_686[6], func_20((**g_221)), l_679);
                    (*g_521) = (*g_521);
                    for (l_663 = 0; (l_663 < 3); l_663 = safe_add_func_int32_t_s_s(l_663, 4))
                    {
                        uint16_t **l_691 = (void*)0;
                        uint16_t ***l_690 = &l_691;
                        if (l_689)
                            break;
                        (*l_690) = (void*)0;
                        (*l_669) = (((safe_mod_func_int8_t_s_s((((*g_393) != &l_679) < ((0x41AF >= ((l_689 = (&g_96 == (void*)0)) & l_679)) ^ ((((safe_div_func_int8_t_s_s((l_696[1] = 0), 0x94)) <= (*p_11)) > 0xAD) < 1U))), 0x27)) >= l_697) && (***l_673));
                        if ((***g_221))
                            continue;
                    }
                    l_721 = func_12(l_698[1], ((((safe_mod_func_int32_t_s_s((l_679 <= ((safe_mod_func_uint32_t_u_u(g_27, (*g_26))) && ((l_703 == l_704[3][1]) ^ (safe_mod_func_int16_t_s_s((65535U | ((safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(0, (safe_div_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(((((*l_718) = ((**g_508) != l_716)) <= (***l_673)) < l_696[2]), 0xAD9D272E)), (*p_11))))), 0x381DCDA5)) == (*p_11))), l_696[1]))))), 4294967291U)) | (**l_674)) | l_719) == g_720), &l_696[1], l_679);
                }
                else
                {
                    int16_t ****l_722 = (void*)0;
                    int32_t **l_723 = (void*)0;
                    int32_t **l_724 = &l_669;
                    g_275 = &g_356[0][0][0];
                    (*l_724) = (**g_221);
                }
            }
            l_725[9][5][1] = (**l_673);
            for (g_376 = 0; (g_376 >= (-18)); g_376--)
            {
                uint32_t l_728 = 0x03766958;
                int32_t l_729 = 0x035BBBF3;
                int32_t l_732 = (-1);
                int16_t *l_733 = &g_83;
                l_737 = ((*p_11) = (((l_729 = (g_96 = l_728)) & ((safe_rshift_func_int8_t_s_u((l_732 = (&l_599 == (void*)0)), ((**g_363) = (**l_674)))) & ((((*l_717) = 0xF5) <= (((g_470 <= l_728) < ((*l_733) = (*l_636))) < (safe_rshift_func_uint8_t_u_u(((void*)0 != (*g_275)), l_736)))) < (**g_393)))) > 3U));
                return (**l_674);
            }
        }
        else
        {
            struct S0 l_738 = {0xDA672279};
            (*g_521) = l_738;
        }
        for (g_96 = 0; (g_96 < 55); g_96++)
        {
            int8_t *****l_745 = &l_654[1][5][1];
            int32_t l_762 = 0xDC4DBBE6;
            int32_t *l_770[6][10] = {{&l_663,&g_95,(void*)0,(void*)0,&g_95,&l_663,&g_24[1],&g_95,&g_95,&g_24[1]},{&l_762,&g_24[1],&g_95,&g_95,&g_24[1],&l_762,&g_24[1],&g_95,&g_95,&g_24[1]},{&l_762,&g_24[1],&g_95,&g_95,&g_24[1],&l_762,&g_24[1],&g_95,&g_95,&g_24[1]},{&l_762,&g_24[1],&g_95,&g_95,&g_24[1],&l_762,&g_24[1],&g_95,&g_95,&g_24[1]},{&l_762,&g_24[1],&g_95,&g_95,&g_24[1],&l_762,&g_24[1],&g_95,&g_95,&g_24[1]},{&l_762,&g_24[1],&g_95,&g_95,&g_24[1],&l_762,&g_24[1],&g_95,&g_95,&g_24[1]}};
            uint16_t *l_774 = &l_599;
            uint8_t *l_775 = &g_67;
            uint8_t l_776 = 255U;
            int16_t *l_777 = &g_34[0];
            uint32_t l_786[1][6][2] = {{{0x50F6A5B7,0x50F6A5B7},{0U,0x50F6A5B7},{0x50F6A5B7,0U},{0x50F6A5B7,0x50F6A5B7},{0U,0x50F6A5B7},{0x50F6A5B7,0U}}};
            struct S0 **l_787 = &g_521;
            int i, j, k;
            for (g_213.f0 = 29; (g_213.f0 == (-14)); g_213.f0--)
            {
                l_744[0][0] = ((*g_521) = l_743);
                (*g_521) = (*g_521);
                l_745 = &g_508;
            }
            if ((safe_mod_func_int16_t_s_s(((*l_777) = (safe_div_func_int16_t_s_s(((safe_add_func_int16_t_s_s((((safe_add_func_int32_t_s_s((((*l_775) = ((**l_674) == (0x9F <= (((*l_774) = ((safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((((**g_363) = ((safe_sub_func_int16_t_s_s((safe_add_func_uint8_t_u_u(l_762, (safe_div_func_int16_t_s_s(3, ((**l_674) | (safe_sub_func_uint32_t_u_u(((-1) | (l_767 != (void*)0)), (safe_mod_func_uint8_t_u_u(((l_608 = (l_663 = (***l_673))) != g_66), l_771))))))))), (**l_674))) && (*l_636))) < (-7)), l_772)), g_19)) < l_773[4][5][1])) | (***l_673))))) || (**g_363)), (***g_221))) ^ (**l_674)) & (*l_636)), 0x8A1C)) & g_27), l_776))), l_778)))
            {
                int8_t l_779 = 0;
                int8_t ***l_805 = &l_716;
                int16_t *l_817 = &g_83;
                (*l_669) = (l_779 < ((*l_636) || ((safe_mod_func_int32_t_s_s(((safe_sub_func_int32_t_s_s(((*p_11) || l_786[0][4][1]), ((l_787 != (void*)0) == (safe_mod_func_int16_t_s_s(((**l_674) < ((*l_777) = ((l_792 = (0U >= (safe_add_func_int32_t_s_s(((0xF5 && (**g_393)) == 0xE651), (*g_23))))) || 0xA6557FA8))), l_779))))) != (**l_674)), 4294967292U)) != 0x0C2D)));
                for (l_762 = 0; (l_762 <= (-17)); l_762 = safe_sub_func_uint32_t_u_u(l_762, 4))
                {
                    const int8_t l_809[7] = {0xE2,0xE2,1,0xE2,0xE2,1,0xE2};
                    int i;
                    (*g_23) = (safe_sub_func_int32_t_s_s((*p_11), ((((safe_add_func_int32_t_s_s(((l_779 < (l_772 = (!((safe_lshift_func_int8_t_s_s(0, 6)) ^ ((*l_777) = ((g_802 = &g_476) == (void*)0)))))) != (safe_div_func_int16_t_s_s((((*g_508) = l_805) != (void*)0), l_779))), (((g_806 != (void*)0) || (**g_363)) != (*l_669)))) != 1) ^ l_809[4]) & 255U)));
                    return (**g_807);
                }
                for (g_376 = (-5); (g_376 <= (-29)); g_376 = safe_sub_func_int32_t_s_s(g_376, 3))
                {
                    int16_t ***l_812 = &g_356[1][0][2];
                    for (g_720 = 0; (g_720 <= 2); g_720 += 1)
                    {
                        int i, j, k;
                        if (l_773[(g_720 + 2)][(g_720 + 1)][(g_720 + 1)])
                            break;
                        if (l_773[(g_720 + 3)][g_720][g_720])
                            continue;
                    }
                    if ((**l_674))
                        continue;
                    g_26 = (**l_673);
                    (*l_812) = (*g_275);
                }
                for (l_743.f0 = 0; (l_743.f0 < (-3)); --l_743.f0)
                {
                    uint32_t l_818 = 0xC58DE708;
                    int32_t l_819 = 0xA188CD0D;
                    (*g_23) = (((safe_sub_func_uint16_t_u_u(((*l_774) = ((((void*)0 == l_817) && (((void*)0 != &l_698[0]) == (*g_26))) || ((((g_52 && (**l_674)) <= ((l_818 = ((void*)0 != &g_509)) >= 0x50FAAB23)) != 0x6E509290) != l_779))), 65534U)) >= (***l_673)) >= l_819);
                }
            }
            else
            {
                return (*g_808);
            }
            if ((*p_11))
                continue;
        }
        if ((safe_mod_func_int16_t_s_s(l_822, 0xD60C)))
        {
            uint32_t l_825 = 0xE0C40F3A;
            struct S0 ***l_839[10][3][8] = {{{&l_682[5],&l_682[5],&l_838,&l_838,(void*)0,&l_682[5],&l_838,&l_682[5]},{&l_682[5],&l_682[2],&l_682[5],&l_682[5],&l_682[5],(void*)0,(void*)0,(void*)0},{&l_682[3],&l_682[4],&l_682[1],&l_838,(void*)0,&l_682[5],(void*)0,&l_682[5]}},{{&l_838,(void*)0,&l_682[5],&l_838,(void*)0,&l_838,&l_682[5],&l_838},{(void*)0,&l_682[5],&l_682[5],&l_682[5],&l_838,&l_682[5],&l_682[3],&l_682[0]},{(void*)0,&l_838,&l_682[5],&l_838,&l_682[5],&l_838,&l_682[4],(void*)0}},{{&l_838,(void*)0,&l_682[5],&l_682[5],&l_838,&l_682[5],(void*)0,&l_682[5]},{&l_682[5],&l_682[2],&l_682[5],(void*)0,&l_682[5],(void*)0,&l_682[5],&l_838},{&l_838,(void*)0,&l_682[5],(void*)0,&l_838,&l_682[5],&l_838,&l_682[5]}},{{(void*)0,&l_682[5],(void*)0,&l_682[5],(void*)0,(void*)0,&l_682[5],(void*)0},{&l_682[5],&l_682[5],&l_682[0],(void*)0,&l_682[5],&l_838,&l_838,&l_682[5]},{&l_682[5],&l_682[5],&l_682[5],&l_682[5],&l_838,(void*)0,&l_682[5],&l_682[5]}},{{&l_682[5],&l_682[5],&l_838,(void*)0,&l_682[4],(void*)0,&l_838,(void*)0},{&l_838,&l_838,&l_682[2],&l_682[5],(void*)0,&l_682[5],&l_682[0],&l_682[5]},{(void*)0,&l_682[0],&l_838,(void*)0,&l_838,&l_682[4],&l_838,&l_682[5]}},{{(void*)0,&l_682[5],&l_682[5],&l_682[0],&l_682[5],&l_682[5],&l_682[5],&l_682[5]},{(void*)0,(void*)0,&l_682[5],(void*)0,(void*)0,&l_682[3],&l_682[5],&l_682[5]},{&l_838,&l_682[4],&l_682[5],&l_838,&l_682[1],&l_682[5],&l_682[4],&l_682[2]}},{{(void*)0,&l_838,&l_838,&l_838,&l_838,&l_682[5],&l_682[1],&l_682[3]},{&l_838,&l_682[5],&l_682[5],&l_838,&l_682[5],&l_838,&l_682[2],&l_682[5]},{(void*)0,&l_682[5],&l_838,&l_838,&l_682[5],&l_682[5],(void*)0,&l_682[5]}},{{(void*)0,&l_682[5],&l_682[5],&l_838,&l_682[5],&l_838,&l_682[5],&l_682[5]},{&l_682[5],&l_682[5],(void*)0,&l_682[5],&l_838,&l_682[5],&l_838,&l_838},{&l_838,&l_682[5],(void*)0,&l_838,&l_682[5],(void*)0,&l_838,(void*)0}},{{&l_682[0],&l_838,(void*)0,&l_682[5],&l_682[2],&l_682[5],&l_682[5],&l_682[5]},{&l_682[2],&l_682[5],&l_682[5],&l_682[5],(void*)0,(void*)0,(void*)0,&l_682[5]},{&l_838,&l_682[5],&l_838,&l_838,&l_838,&l_682[5],&l_682[2],&l_838}},{{&l_682[5],&l_682[5],&l_682[5],&l_682[5],&l_838,&l_838,&l_682[1],(void*)0},{(void*)0,&l_682[5],&l_838,(void*)0,&l_682[5],&l_682[5],&l_682[4],&l_838},{&l_682[3],&l_682[5],&l_682[5],&l_682[5],&l_682[5],&l_682[5],&l_682[5],&l_682[5]}}};
            uint32_t l_840 = 4294967295U;
            int32_t *l_841 = &g_69;
            int32_t *l_842 = (void*)0;
            int32_t *l_843[6][3] = {{&l_792,&l_792,&l_792},{(void*)0,&l_830,(void*)0},{&l_792,&l_792,&l_792},{(void*)0,&l_830,(void*)0},{&l_792,&l_792,&l_792},{(void*)0,&l_830,(void*)0}};
            int i, j, k;
            l_772 = ((*l_841) = (safe_sub_func_uint16_t_u_u(l_825, (safe_lshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s((l_830 ^ (0x9AA1D503 || (safe_lshift_func_int16_t_s_u(((*l_636) <= ((*p_11) = ((safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(((&l_825 == &l_825) >= (*l_636)), (safe_unary_minus_func_uint32_t_u((((l_682[5] = l_838) == (void*)0) <= l_825))))), (-8))) | l_825))), l_825)))), l_840)), 13)))));
        }
        else
        {
            int32_t l_852 = 0xB1964CA4;
            int32_t l_853[3][4][2] = {{{0x47F83D1B,0x3094A6A2},{0,0},{0,0x3094A6A2},{0x47F83D1B,0x24B7BBD2}},{{0x3094A6A2,0x24B7BBD2},{0x47F83D1B,0x3094A6A2},{0,0},{0,0x3094A6A2}},{{0x47F83D1B,0x24B7BBD2},{0x3094A6A2,0x24B7BBD2},{0x47F83D1B,0x3094A6A2},{0,0}}};
            int32_t **l_854[10][5] = {{&l_48,&l_48,&l_48,&l_48,&l_48},{&l_48,&l_48,&l_48,&l_48,&l_48},{&l_48,&l_48,&l_48,&l_48,&l_48},{&l_48,&l_48,&l_48,&l_48,&l_48},{&l_48,&l_48,&l_48,&l_48,&l_48},{&l_48,&l_48,&l_48,&l_48,&l_48},{&l_48,&l_48,&l_48,&l_48,&l_48},{&l_48,&l_48,&l_48,&l_48,&l_48},{&l_48,&l_48,&l_48,&l_48,&l_48},{&l_48,&l_48,&l_48,&l_48,&l_48}};
            int16_t l_872 = 0x83C7;
            struct S0 l_880 = {0x431A4752};
            int i, j, k;
            if ((((safe_div_func_int32_t_s_s((safe_mod_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(0x822B, ((l_852 || (((l_853[1][2][0] = 0U) == (((p_11 = &g_95) == &l_830) >= (((0xA32BBDF2 & ((void*)0 != l_854[0][3])) != (l_855 == l_854[9][4])) & (**g_393)))) & (**g_363))) | 1U))), (*l_636))), (*l_669))), (***g_221))) > (*l_636)) ^ (*g_394)))
            {
                int32_t * const l_859 = (void*)0;
                int8_t *l_869 = (void*)0;
                int8_t ** const l_868 = &l_869;
                int8_t ** const *l_867 = &l_868;
                int32_t l_876 = 1;
                for (g_19 = 11; (g_19 > (-6)); g_19--)
                {
                    int8_t ** const **l_866[8][8] = {{&l_662[4],&l_662[1],&l_662[4],(void*)0,&l_662[2],&l_662[4],&l_662[4],(void*)0},{&l_662[4],&l_662[2],&l_662[0],&l_662[4],&l_662[4],&l_662[4],&l_662[0],&l_662[2]},{&l_662[4],(void*)0,&l_662[4],(void*)0,&l_662[4],&l_662[0],(void*)0,&l_662[1]},{(void*)0,&l_662[4],&l_662[3],&l_662[4],&l_662[4],&l_662[4],(void*)0,&l_662[1]},{&l_662[1],&l_662[4],&l_662[4],&l_662[0],&l_662[4],&l_662[0],&l_662[0],&l_662[4]},{&l_662[4],&l_662[0],&l_662[0],&l_662[4],&l_662[0],&l_662[4],&l_662[4],&l_662[1]},{&l_662[1],(void*)0,&l_662[4],&l_662[4],&l_662[4],&l_662[3],&l_662[4],(void*)0},{&l_662[1],(void*)0,&l_662[0],&l_662[4],(void*)0,&l_662[4],(void*)0,&l_662[4]}};
                    int16_t **l_874 = &g_357;
                    const int32_t l_875 = 1;
                    int i, j;
                    for (l_608 = 0; (l_608 <= 3); l_608 += 1)
                    {
                        int i, j;
                        (*l_855) = p_11;
                    }
                    if ((((safe_rshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(4294967289U, g_24[8])), ((0x21 > ((l_867 = (*g_508)) != (void*)0)) ^ ((safe_add_func_uint32_t_u_u((l_872 == (+(l_874 != (void*)0))), (((*p_11) > g_96) < l_875))) > (*l_669))))) < l_876) || 0x2AE596BC))
                    {
                        (*l_855) = func_20(p_11);
                    }
                    else
                    {
                        int8_t l_877 = (-1);
                        return l_877;
                    }
                    for (l_608 = (-20); (l_608 != (-14)); l_608 = safe_add_func_int8_t_s_s(l_608, 1))
                    {
                        return l_875;
                    }
                }
            }
            else
            {
                struct S0 l_881 = {0x91BD7F8A};
                struct S0 l_882 = {0xE625D4F8};
                l_882 = (l_881 = ((*g_521) = l_880));
                return (**g_807);
            }
        }
    }
    return (**g_807);
}
static int32_t * func_12(int16_t p_13, const int8_t p_14, const int32_t * p_15, int16_t p_16)
{
    return &g_24[7];
}
static int32_t * func_20(int32_t * const p_21)
{
    return g_23;
}
static uint16_t func_41(uint8_t * p_42, struct S0 p_43, int16_t * p_44, uint16_t p_45)
{
    const struct S0 l_513 = {0xEF6E896E};
    struct S0 *l_514 = &g_213;
    (*l_514) = l_513;
    return l_513.f0;
}
static uint8_t * func_46(int32_t * p_47)
{
    int16_t *l_50[1];
    int16_t **l_49[7] = {&l_50[0],&l_50[0],&l_50[0],&l_50[0],&l_50[0],&l_50[0],&l_50[0]};
    uint8_t *l_51 = &g_52;
    int i;
    for (i = 0; i < 1; i++)
        l_50[i] = &g_34[0];
    l_49[5] = (void*)0;
    return l_51;
}
static uint16_t func_54(uint8_t p_55, int32_t p_56, int16_t * p_57)
{
    int32_t *l_397 = &g_24[7];
    int32_t **l_398 = &l_397;
    uint16_t * const l_477 = (void*)0;
    int8_t l_492[9] = {0x05,(-5),0x05,0x05,(-5),0x05,0x05,(-5),0x05};
    int8_t ****l_512[8][6] = {{(void*)0,&g_509,&g_509,&g_509,(void*)0,(void*)0},{&g_509,&g_509,&g_509,&g_509,&g_509,&g_509},{&g_509,&g_509,&g_509,&g_509,&g_509,&g_509},{(void*)0,(void*)0,&g_509,&g_509,&g_509,(void*)0},{&g_509,&g_509,&g_509,&g_509,&g_509,&g_509},{(void*)0,&g_509,&g_509,&g_509,(void*)0,(void*)0},{&g_509,&g_509,&g_509,&g_509,&g_509,&g_509},{&g_509,&g_509,&g_509,&g_509,&g_509,&g_509}};
    int i, j;
lbl_420:
    (*l_398) = l_397;
    for (g_67 = 0; (g_67 <= 4); g_67 += 1)
    {
        const int16_t *l_402 = (void*)0;
        int16_t *l_404[1][2];
        int32_t l_472 = 0x4FAB12C8;
        struct S0 l_496 = {-1};
        int16_t ***l_504 = &g_356[0][2][2];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_404[i][j] = &g_83;
        }
    }
    for (g_67 = (-5); (g_67 < 18); g_67 = safe_add_func_int16_t_s_s(g_67, 4))
    {
        int8_t *****l_511[5][3][2] = {{{&g_508,&g_508},{&g_508,(void*)0},{&g_508,&g_508}},{{&g_508,(void*)0},{&g_508,&g_508},{&g_508,(void*)0}},{{&g_508,&g_508},{&g_508,(void*)0},{&g_508,&g_508}},{{&g_508,(void*)0},{&g_508,&g_508},{&g_508,(void*)0}},{{&g_508,&g_508},{&g_508,(void*)0},{&g_508,&g_508}}};
        int i, j, k;
        if (g_67)
            goto lbl_420;
        l_512[4][4] = g_508;
        if ((**l_398))
            continue;
        (*l_398) = (*l_398);
    }
    return (*l_397);
}
static int16_t * func_58(uint16_t p_59, uint16_t p_60)
{
    int32_t *l_68 = &g_69;
    struct S0 l_70 = {0};
    int16_t *l_142 = (void*)0;
    int32_t l_150 = 0x3E46763B;
    int16_t *l_158 = (void*)0;
    int16_t *l_166 = (void*)0;
    const uint8_t *l_303 = &g_67;
    int8_t *l_389 = &g_390[2][1];
    l_68 = &g_24[0];
    l_70 = l_70;
    return l_158;
}
static int32_t func_75(const int32_t p_76)
{
    uint32_t l_80 = 0x5226059B;
    const uint8_t *l_81 = (void*)0;
    int16_t *l_82 = &g_83;
    uint8_t *l_84 = &g_67;
    int32_t *l_94[8];
    int8_t l_97 = (-1);
    int i;
    for (i = 0; i < 8; i++)
        l_94[i] = &g_95;
    if ((safe_add_func_uint8_t_u_u(((*l_84) = ((-5) && (65535U < ((*l_82) = (l_80 == ((l_81 == (void*)0) && 6)))))), (!(safe_sub_func_int16_t_s_s((l_97 = (safe_sub_func_int16_t_s_s((g_96 = (safe_rshift_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((g_95 = ((p_76 || 252U) <= ((void*)0 != &g_23))), p_76)) ^ g_52), p_76))), 0x33C8))), p_76))))))
    {
        for (l_97 = 0; (l_97 <= 7); l_97 += 1)
        {
            int i;
            l_94[l_97] = &g_69;
        }
    }
    else
    {
        int16_t ***l_99[10] = {&g_98,&g_98,&g_98,&g_98,&g_98,&g_98,&g_98,&g_98,&g_98,&g_98};
        int32_t l_100[1][5];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
                l_100[i][j] = 0x2B0ECC8E;
        }
        g_98 = g_98;
        l_100[0][0] = 0xF8A8D9B7;
    }
    for (g_95 = 0; (g_95 >= 1); g_95 = safe_add_func_int32_t_s_s(g_95, 4))
    {
        return p_76;
    }
    return (*g_23);
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_19, "g_19", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_24[i], "g_24[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_27, "g_27", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_34[i], "g_34[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_36[i][j], "g_36[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);
        }
    }
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_137[i], "g_137[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_141[i][j][k], "g_141[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);
            }
        }
    }
    transparent_crc(g_213.f0, "g_213.f0", print_hash_value);
    transparent_crc(g_376, "g_376", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_390[i][j], "g_390[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);
        }
    }
    transparent_crc(g_411.f0, "g_411.f0", print_hash_value);
    transparent_crc(g_470, "g_470", print_hash_value);
    transparent_crc(g_594, "g_594", print_hash_value);
    transparent_crc(g_720, "g_720", print_hash_value);
    transparent_crc(g_925, "g_925", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
