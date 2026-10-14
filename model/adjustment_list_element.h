/*
 * adjustment_list_element.h
 *
 * A Adjustment List Element
 */

#ifndef _adjustment_list_element_H_
#define _adjustment_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct adjustment_list_element_t adjustment_list_element_t;




typedef struct adjustment_list_element_t {
    int *pki_adjustment_id; //numeric
    int *fki_period_id; //numeric
    char *s_period_yyyymm; // string
    int *fki_user_id_created; //numeric
    char *s_user_loginname; // string
    char *dt_adjustment_date; // string
    char *s_adjustment_number; // string
    char *s_adjustment_comment; // string
    char *d_adjustment_totaldebit; // string
    char *d_adjustment_totalcredit; // string

    int _library_owned; // Is the library responsible for freeing this object?
} adjustment_list_element_t;

__attribute__((deprecated)) adjustment_list_element_t *adjustment_list_element_create(
    int *pki_adjustment_id,
    int *fki_period_id,
    char *s_period_yyyymm,
    int *fki_user_id_created,
    char *s_user_loginname,
    char *dt_adjustment_date,
    char *s_adjustment_number,
    char *s_adjustment_comment,
    char *d_adjustment_totaldebit,
    char *d_adjustment_totalcredit
);

void adjustment_list_element_free(adjustment_list_element_t *adjustment_list_element);

adjustment_list_element_t *adjustment_list_element_parseFromJSON(cJSON *adjustment_list_elementJSON);

cJSON *adjustment_list_element_convertToJSON(adjustment_list_element_t *adjustment_list_element);

#endif /* _adjustment_list_element_H_ */

