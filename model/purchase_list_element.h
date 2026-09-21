/*
 * purchase_list_element.h
 *
 * A Purchase List Element
 */

#ifndef _purchase_list_element_H_
#define _purchase_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct purchase_list_element_t purchase_list_element_t;




typedef struct purchase_list_element_t {
    int *pki_purchase_id; //numeric
    int *fki_franchiseoffice_id; //numeric
    int *fki_supplier_id; //numeric
    int *fki_period_id; //numeric
    char *s_purchase_billnumber; // string
    char *dt_purchase_date; // string
    char *dt_purchase_paydate; // string
    char *d_purchase_total; // string
    int *b_purchase_isfinanced; //boolean
    int *b_purchase_ispaid; //boolean
    char *s_franchiseagence_name; // string
    char *i_franchiseoffice_code; // string
    char *s_supplier_name; // string

    int _library_owned; // Is the library responsible for freeing this object?
} purchase_list_element_t;

__attribute__((deprecated)) purchase_list_element_t *purchase_list_element_create(
    int *pki_purchase_id,
    int *fki_franchiseoffice_id,
    int *fki_supplier_id,
    int *fki_period_id,
    char *s_purchase_billnumber,
    char *dt_purchase_date,
    char *dt_purchase_paydate,
    char *d_purchase_total,
    int *b_purchase_isfinanced,
    int *b_purchase_ispaid,
    char *s_franchiseagence_name,
    char *i_franchiseoffice_code,
    char *s_supplier_name
);

void purchase_list_element_free(purchase_list_element_t *purchase_list_element);

purchase_list_element_t *purchase_list_element_parseFromJSON(cJSON *purchase_list_elementJSON);

cJSON *purchase_list_element_convertToJSON(purchase_list_element_t *purchase_list_element);

#endif /* _purchase_list_element_H_ */

