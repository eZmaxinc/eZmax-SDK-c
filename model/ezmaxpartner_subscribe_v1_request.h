/*
 * ezmaxpartner_subscribe_v1_request.h
 *
 * Request for POST /1/webhookdocumentation/subscribe
 */

#ifndef _ezmaxpartner_subscribe_v1_request_H_
#define _ezmaxpartner_subscribe_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxpartner_subscribe_v1_request_t ezmaxpartner_subscribe_v1_request_t;

#include "address_request_compound.h"
#include "email_request_compound.h"
#include "phone_request_compound_v2.h"



typedef struct ezmaxpartner_subscribe_v1_request_t {
    char *pks_ezmaxcustomer_code; // string
    char *s_infrastructureenvironmenttype_description; // string
    char *s_company_name1; // string
    char *s_company_name2; // string
    int *fki_systemconfigurationtype_id; //numeric
    char *s_systemconfigurationtype_description1; // string
    char *s_systemconfigurationtype_description2; // string
    int *fki_ezmaxpartner_id; //numeric
    char *s_ezmaxpartner_name1; // string
    char *s_ezmaxpartner_name2; // string
    int *fki_ezmaxpartnerproduct_id; //numeric
    char *s_ezmaxpartnerproduct_name1; // string
    char *s_ezmaxpartnerproduct_name2; // string
    int *fki_ezmaxpartnerproductstage_id; //numeric
    char *s_ezmaxpartnerproductstage_code; // string
    char *s_user_login_name; // string
    char *s_user_first_name; // string
    char *s_user_last_name; // string
    int *fki_user_id; //numeric
    int *fki_language_id; //numeric
    struct address_request_compound_t *obj_address; //model
    struct phone_request_compound_v2_t *objphone; //model
    struct email_request_compound_t *obj_email; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezmaxpartner_subscribe_v1_request_t;

__attribute__((deprecated)) ezmaxpartner_subscribe_v1_request_t *ezmaxpartner_subscribe_v1_request_create(
    char *pks_ezmaxcustomer_code,
    char *s_infrastructureenvironmenttype_description,
    char *s_company_name1,
    char *s_company_name2,
    int *fki_systemconfigurationtype_id,
    char *s_systemconfigurationtype_description1,
    char *s_systemconfigurationtype_description2,
    int *fki_ezmaxpartner_id,
    char *s_ezmaxpartner_name1,
    char *s_ezmaxpartner_name2,
    int *fki_ezmaxpartnerproduct_id,
    char *s_ezmaxpartnerproduct_name1,
    char *s_ezmaxpartnerproduct_name2,
    int *fki_ezmaxpartnerproductstage_id,
    char *s_ezmaxpartnerproductstage_code,
    char *s_user_login_name,
    char *s_user_first_name,
    char *s_user_last_name,
    int *fki_user_id,
    int *fki_language_id,
    address_request_compound_t *obj_address,
    phone_request_compound_v2_t *objphone,
    email_request_compound_t *obj_email
);

void ezmaxpartner_subscribe_v1_request_free(ezmaxpartner_subscribe_v1_request_t *ezmaxpartner_subscribe_v1_request);

ezmaxpartner_subscribe_v1_request_t *ezmaxpartner_subscribe_v1_request_parseFromJSON(cJSON *ezmaxpartner_subscribe_v1_requestJSON);

cJSON *ezmaxpartner_subscribe_v1_request_convertToJSON(ezmaxpartner_subscribe_v1_request_t *ezmaxpartner_subscribe_v1_request);

#endif /* _ezmaxpartner_subscribe_v1_request_H_ */

