#include <stdio.h>


typedef struct pump_s{
    bool valve_close;

} pump_t;

typedef enum test_e
{
    One,
    Two,
    Three,
    Four,
    Five
} test_t;

typedef struct week_s
{

    char *monday;
    char *tuesday;
    char *wednesday;
    char *thursday;
    char *friday;

} week_t;

typedef enum months_e
{
    JAN,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
} months_t;

week_t day = {
    .monday = "Monday",
    .tuesday = "Tuesday",
    .wednesday = "Wednesday",
    .thursday = "Thursday",
    .friday = "Friday"};

const char *const test_to_str[] = {
    [One] = "One",
    [Two] = "Two",
    [Three] = "Three",
    [Four] = "Four",
    [Five] = "Five"};

const char *const months_to_str[] = {
    [JAN] = "January",
    [FEB] = "February",
    [MAR] = "March",
    [APR] = "April",
    [MAY] = "May",
    [JUN] = "June",
    [JUL] = "JULY",
    [AUG] = "August",
    [SEP] = "September",
    [OCT] = "October",
    [NOV] = "November",
    [DEC] = "December"};

typedef struct user_filter_s
{
    int months;
} user_filter_t;

user_filter_t filter = {
    .months = JAN
};

typedef struct out_s
{
    int mask[2];
} out_t;

typedef struct in_s{
    int mask[2];
} in_t;


extern const char *const test_to_str[];
int start_test(int argc, char *argv[]);
bool test_months(months_t months);
bool test_status(int val);

in_t  get_in_status(void);
out_t get_out_status(void);