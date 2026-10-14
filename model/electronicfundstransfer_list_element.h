/*
 * electronicfundstransfer_list_element.h
 *
 * A Electronicfundstransfer List Element
 */

#ifndef _electronicfundstransfer_list_element_H_
#define _electronicfundstransfer_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct electronicfundstransfer_list_element_t electronicfundstransfer_list_element_t;




typedef struct electronicfundstransfer_list_element_t {
    int *pki_electronicfundstransfer_id; //numeric
    int *fki_paymentmethod_id; //numeric
    int *fki_user_id_created; //numeric
    char *s_paymentmethod_description_x; // string
    char *s_user_loginname_created; // string
    int *i_electronicfundstransfer_number; //numeric
    char *dt_electronicfundstransfer_date; // string
    int *i_electronicfundstransfer_transactioncount; //numeric
    char *d_electronicfundstransfer_amountvisible; // string

    int _library_owned; // Is the library responsible for freeing this object?
} electronicfundstransfer_list_element_t;

__attribute__((deprecated)) electronicfundstransfer_list_element_t *electronicfundstransfer_list_element_create(
    int *pki_electronicfundstransfer_id,
    int *fki_paymentmethod_id,
    int *fki_user_id_created,
    char *s_paymentmethod_description_x,
    char *s_user_loginname_created,
    int *i_electronicfundstransfer_number,
    char *dt_electronicfundstransfer_date,
    int *i_electronicfundstransfer_transactioncount,
    char *d_electronicfundstransfer_amountvisible
);

void electronicfundstransfer_list_element_free(electronicfundstransfer_list_element_t *electronicfundstransfer_list_element);

electronicfundstransfer_list_element_t *electronicfundstransfer_list_element_parseFromJSON(cJSON *electronicfundstransfer_list_elementJSON);

cJSON *electronicfundstransfer_list_element_convertToJSON(electronicfundstransfer_list_element_t *electronicfundstransfer_list_element);

#endif /* _electronicfundstransfer_list_element_H_ */

