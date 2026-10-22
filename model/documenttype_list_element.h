/*
 * documenttype_list_element.h
 *
 * A Documenttype List Element
 */

#ifndef _documenttype_list_element_H_
#define _documenttype_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct documenttype_list_element_t documenttype_list_element_t;

#include "field_e_documenttype_ezcom.h"
#include "field_e_documenttype_privacydefault.h"
#include "field_e_documenttype_repossession.h"
#include "field_e_documenttype_salebyowner.h"
#include "field_e_documenttype_saledisplaybyrole.h"
#include "field_e_documenttype_statusdefault.h"
#include "field_e_documenttype_transactiontype.h"



typedef struct documenttype_list_element_t {
    int *pki_documenttype_id; //numeric
    char *s_documenttype_name_x; // string
    char *s_documenttype_defaultfilename; // string
    int *b_documenttype_showagent; //boolean
    int *b_documenttype_isactive; //boolean
    int *b_documenttype_isrequired; //boolean
    int *b_documenttype_sale; //boolean
    int *b_documenttype_rental; //boolean
    int *b_documenttype_reference; //boolean
    int *b_documenttype_mortgagereference; //boolean
    int *b_documenttype_evaluation; //boolean
    int *b_documenttype_consultation; //boolean
    int *b_documenttype_otherservices; //boolean
    int *b_documenttype_foreclosedsale; //boolean
    int *b_documenttype_commercialfunding; //boolean
    int *b_documenttype_canafe; //boolean
    ezmax_api_definition__full_field_e_documenttype_ezcom__e e_documenttype_ezcom; //referenced enum
    ezmax_api_definition__full_field_e_documenttype_privacydefault__e e_documenttype_privacydefault; //referenced enum
    ezmax_api_definition__full_field_e_documenttype_statusdefault__e e_documenttype_statusdefault; //referenced enum
    ezmax_api_definition__full_field_e_documenttype_salebyowner__e e_documenttype_salebyowner; //referenced enum
    ezmax_api_definition__full_field_e_documenttype_saledisplaybyrole__e e_documenttype_saledisplaybyrole; //referenced enum
    ezmax_api_definition__full_field_e_documenttype_transactiontype__e e_documenttype_transactiontype; //referenced enum
    ezmax_api_definition__full_field_e_documenttype_repossession__e e_documenttype_repossession; //referenced enum

    int _library_owned; // Is the library responsible for freeing this object?
} documenttype_list_element_t;

__attribute__((deprecated)) documenttype_list_element_t *documenttype_list_element_create(
    int *pki_documenttype_id,
    char *s_documenttype_name_x,
    char *s_documenttype_defaultfilename,
    int *b_documenttype_showagent,
    int *b_documenttype_isactive,
    int *b_documenttype_isrequired,
    int *b_documenttype_sale,
    int *b_documenttype_rental,
    int *b_documenttype_reference,
    int *b_documenttype_mortgagereference,
    int *b_documenttype_evaluation,
    int *b_documenttype_consultation,
    int *b_documenttype_otherservices,
    int *b_documenttype_foreclosedsale,
    int *b_documenttype_commercialfunding,
    int *b_documenttype_canafe,
    ezmax_api_definition__full_field_e_documenttype_ezcom__e e_documenttype_ezcom,
    ezmax_api_definition__full_field_e_documenttype_privacydefault__e e_documenttype_privacydefault,
    ezmax_api_definition__full_field_e_documenttype_statusdefault__e e_documenttype_statusdefault,
    ezmax_api_definition__full_field_e_documenttype_salebyowner__e e_documenttype_salebyowner,
    ezmax_api_definition__full_field_e_documenttype_saledisplaybyrole__e e_documenttype_saledisplaybyrole,
    ezmax_api_definition__full_field_e_documenttype_transactiontype__e e_documenttype_transactiontype,
    ezmax_api_definition__full_field_e_documenttype_repossession__e e_documenttype_repossession
);

void documenttype_list_element_free(documenttype_list_element_t *documenttype_list_element);

documenttype_list_element_t *documenttype_list_element_parseFromJSON(cJSON *documenttype_list_elementJSON);

cJSON *documenttype_list_element_convertToJSON(documenttype_list_element_t *documenttype_list_element);

#endif /* _documenttype_list_element_H_ */

