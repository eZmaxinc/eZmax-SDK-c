/*
 * electronicfundstransfertransaction_list_element.h
 *
 * A Electronicfundstransfertransaction List Element
 */

#ifndef _electronicfundstransfertransaction_list_element_H_
#define _electronicfundstransfertransaction_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct electronicfundstransfertransaction_list_element_t electronicfundstransfertransaction_list_element_t;




typedef struct electronicfundstransfertransaction_list_element_t {
    int *pki_electronicfundstransfertransaction_id; //numeric
    int *i_electronicfundstransfer_number; //numeric
    char *d_electronicfundstransfertransaction_amount; // string
    char *dt_electronicfundstransfertransaction_date; // string

    int _library_owned; // Is the library responsible for freeing this object?
} electronicfundstransfertransaction_list_element_t;

__attribute__((deprecated)) electronicfundstransfertransaction_list_element_t *electronicfundstransfertransaction_list_element_create(
    int *pki_electronicfundstransfertransaction_id,
    int *i_electronicfundstransfer_number,
    char *d_electronicfundstransfertransaction_amount,
    char *dt_electronicfundstransfertransaction_date
);

void electronicfundstransfertransaction_list_element_free(electronicfundstransfertransaction_list_element_t *electronicfundstransfertransaction_list_element);

electronicfundstransfertransaction_list_element_t *electronicfundstransfertransaction_list_element_parseFromJSON(cJSON *electronicfundstransfertransaction_list_elementJSON);

cJSON *electronicfundstransfertransaction_list_element_convertToJSON(electronicfundstransfertransaction_list_element_t *electronicfundstransfertransaction_list_element);

#endif /* _electronicfundstransfertransaction_list_element_H_ */

