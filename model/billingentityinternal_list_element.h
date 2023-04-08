/*
 * billingentityinternal_list_element.h
 *
 * A Billingentityinternal List Element
 */

#ifndef _billingentityinternal_list_element_H_
#define _billingentityinternal_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct billingentityinternal_list_element_t billingentityinternal_list_element_t;




typedef struct billingentityinternal_list_element_t {
    int pki_billingentityinternal_id; //numeric
    char *s_billingentityinternal_description_x; // string

} billingentityinternal_list_element_t;

billingentityinternal_list_element_t *billingentityinternal_list_element_create(
    int pki_billingentityinternal_id,
    char *s_billingentityinternal_description_x
);

void billingentityinternal_list_element_free(billingentityinternal_list_element_t *billingentityinternal_list_element);

billingentityinternal_list_element_t *billingentityinternal_list_element_parseFromJSON(cJSON *billingentityinternal_list_elementJSON);

cJSON *billingentityinternal_list_element_convertToJSON(billingentityinternal_list_element_t *billingentityinternal_list_element);

#endif /* _billingentityinternal_list_element_H_ */

