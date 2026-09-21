/*
 * salary_list_element.h
 *
 * A Salary List Element
 */

#ifndef _salary_list_element_H_
#define _salary_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct salary_list_element_t salary_list_element_t;




typedef struct salary_list_element_t {
    int *pki_salary_id; //numeric
    int *fki_period_id; //numeric
    int *fki_salaryperiod_id; //numeric
    int *fki_u_ser_id_created; //numeric
    char *dt_salary_paymentdate; // string
    char *s_salaryperiod; // string
    char *s_period_yyyymm; // string
    int *i_salarypreparation_count; //numeric
    char *d_salarypreparation_total; // string
    char *dt_salaryperiod_start; // string
    char *dt_salaryperiod_end; // string
    char *s_user_loginname; // string
    char *dt_created_date; // string
    int *b_salarypreparation_ispaid; //boolean
    int *i_salaryperiodgroup_year; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} salary_list_element_t;

__attribute__((deprecated)) salary_list_element_t *salary_list_element_create(
    int *pki_salary_id,
    int *fki_period_id,
    int *fki_salaryperiod_id,
    int *fki_u_ser_id_created,
    char *dt_salary_paymentdate,
    char *s_salaryperiod,
    char *s_period_yyyymm,
    int *i_salarypreparation_count,
    char *d_salarypreparation_total,
    char *dt_salaryperiod_start,
    char *dt_salaryperiod_end,
    char *s_user_loginname,
    char *dt_created_date,
    int *b_salarypreparation_ispaid,
    int *i_salaryperiodgroup_year
);

void salary_list_element_free(salary_list_element_t *salary_list_element);

salary_list_element_t *salary_list_element_parseFromJSON(cJSON *salary_list_elementJSON);

cJSON *salary_list_element_convertToJSON(salary_list_element_t *salary_list_element);

#endif /* _salary_list_element_H_ */

