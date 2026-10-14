/*
 * adjustmentreminder_list_element.h
 *
 * A Adjustmentreminder List Element
 */

#ifndef _adjustmentreminder_list_element_H_
#define _adjustmentreminder_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct adjustmentreminder_list_element_t adjustmentreminder_list_element_t;

#include "field_e_adjustmentreminder_type.h"



typedef struct adjustmentreminder_list_element_t {
    int *pki_adjustmentreminder_id; //numeric
    int *fki_adjustment_id; //numeric
    int *fki_period_id; //numeric
    char *s_period_yyyymm; // string
    int *fki_user_id_created; //numeric
    char *s_user_loginname; // string
    ezmax_api_definition__full_field_e_adjustmentreminder_type__e e_adjustmentreminder_type; //referenced enum
    char *s_adjustment_number; // string
    char *s_adjustment_comment; // string
    char *d_adjustment_totaldebit; // string
    char *d_adjustment_totalcredit; // string

    int _library_owned; // Is the library responsible for freeing this object?
} adjustmentreminder_list_element_t;

__attribute__((deprecated)) adjustmentreminder_list_element_t *adjustmentreminder_list_element_create(
    int *pki_adjustmentreminder_id,
    int *fki_adjustment_id,
    int *fki_period_id,
    char *s_period_yyyymm,
    int *fki_user_id_created,
    char *s_user_loginname,
    ezmax_api_definition__full_field_e_adjustmentreminder_type__e e_adjustmentreminder_type,
    char *s_adjustment_number,
    char *s_adjustment_comment,
    char *d_adjustment_totaldebit,
    char *d_adjustment_totalcredit
);

void adjustmentreminder_list_element_free(adjustmentreminder_list_element_t *adjustmentreminder_list_element);

adjustmentreminder_list_element_t *adjustmentreminder_list_element_parseFromJSON(cJSON *adjustmentreminder_list_elementJSON);

cJSON *adjustmentreminder_list_element_convertToJSON(adjustmentreminder_list_element_t *adjustmentreminder_list_element);

#endif /* _adjustmentreminder_list_element_H_ */

