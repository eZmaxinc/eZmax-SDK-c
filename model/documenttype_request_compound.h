/*
 * documenttype_request_compound.h
 *
 * A Documenttype Object and children
 */

#ifndef _documenttype_request_compound_H_
#define _documenttype_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct documenttype_request_compound_t documenttype_request_compound_t;

#include "field_e_documenttype_ezcom.h"
#include "field_e_documenttype_privacydefault.h"
#include "field_e_documenttype_repossession.h"
#include "field_e_documenttype_salebyowner.h"
#include "field_e_documenttype_saledisplaybyrole.h"
#include "field_e_documenttype_statusdefault.h"
#include "field_e_documenttype_transactiontype.h"
#include "multilingual_documenttype_name.h"



typedef struct documenttype_request_compound_t {
    int *pki_documenttype_id; //numeric
    struct multilingual_documenttype_name_t *obj_documenttype_name; //model
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
} documenttype_request_compound_t;

__attribute__((deprecated)) documenttype_request_compound_t *documenttype_request_compound_create(
    int *pki_documenttype_id,
    multilingual_documenttype_name_t *obj_documenttype_name,
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

void documenttype_request_compound_free(documenttype_request_compound_t *documenttype_request_compound);

documenttype_request_compound_t *documenttype_request_compound_parseFromJSON(cJSON *documenttype_request_compoundJSON);

cJSON *documenttype_request_compound_convertToJSON(documenttype_request_compound_t *documenttype_request_compound);

#endif /* _documenttype_request_compound_H_ */

