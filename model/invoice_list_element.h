/*
 * invoice_list_element.h
 *
 * A Invoice List Element
 */

#ifndef _invoice_list_element_H_
#define _invoice_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct invoice_list_element_t invoice_list_element_t;

#include "field_e_invoice_type.h"



typedef struct invoice_list_element_t {
    int *pki_invoice_id; //numeric
    int *fki_agent_id; //numeric
    int *fki_broker_id; //numeric
    int *fki_customer_id; //numeric
    int *fki_period_id; //numeric
    char *s_period_yyyymm; // string
    int *b_invoice_ispaid; //boolean
    char *d_invoice_total; // string
    char *d_invoice_paid; // string
    char *d_invoice_balance; // string
    char *dt_invoice_date; // string
    ezmax_api_definition__full_field_e_invoice_type__e e_invoice_type; //referenced enum
    char *s_invoice_number; // string
    char *s_invoice_recipient; // string

    int _library_owned; // Is the library responsible for freeing this object?
} invoice_list_element_t;

__attribute__((deprecated)) invoice_list_element_t *invoice_list_element_create(
    int *pki_invoice_id,
    int *fki_agent_id,
    int *fki_broker_id,
    int *fki_customer_id,
    int *fki_period_id,
    char *s_period_yyyymm,
    int *b_invoice_ispaid,
    char *d_invoice_total,
    char *d_invoice_paid,
    char *d_invoice_balance,
    char *dt_invoice_date,
    ezmax_api_definition__full_field_e_invoice_type__e e_invoice_type,
    char *s_invoice_number,
    char *s_invoice_recipient
);

void invoice_list_element_free(invoice_list_element_t *invoice_list_element);

invoice_list_element_t *invoice_list_element_parseFromJSON(cJSON *invoice_list_elementJSON);

cJSON *invoice_list_element_convertToJSON(invoice_list_element_t *invoice_list_element);

#endif /* _invoice_list_element_H_ */

