/*
 * custom_ezmaxpartnerproduct_subscribe.h
 *
 * Request for POST /1/webhookdocumentation/subscribe
 */

#ifndef _custom_ezmaxpartnerproduct_subscribe_H_
#define _custom_ezmaxpartnerproduct_subscribe_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_ezmaxpartnerproduct_subscribe_t custom_ezmaxpartnerproduct_subscribe_t;

#include "address_request_compound.h"
#include "email_request_compound.h"
#include "phone_request_compound_v2.h"



typedef struct custom_ezmaxpartnerproduct_subscribe_t {
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
} custom_ezmaxpartnerproduct_subscribe_t;

__attribute__((deprecated)) custom_ezmaxpartnerproduct_subscribe_t *custom_ezmaxpartnerproduct_subscribe_create(
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

void custom_ezmaxpartnerproduct_subscribe_free(custom_ezmaxpartnerproduct_subscribe_t *custom_ezmaxpartnerproduct_subscribe);

custom_ezmaxpartnerproduct_subscribe_t *custom_ezmaxpartnerproduct_subscribe_parseFromJSON(cJSON *custom_ezmaxpartnerproduct_subscribeJSON);

cJSON *custom_ezmaxpartnerproduct_subscribe_convertToJSON(custom_ezmaxpartnerproduct_subscribe_t *custom_ezmaxpartnerproduct_subscribe);

#endif /* _custom_ezmaxpartnerproduct_subscribe_H_ */

