/*
 * franchisereferalincome_request_compound.h
 *
 * A Franchisereferalincome Object and children to create a complete structure
 */

#ifndef _franchisereferalincome_request_compound_H_
#define _franchisereferalincome_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct franchisereferalincome_request_compound_t franchisereferalincome_request_compound_t;

#include "address_request.h"
#include "contact_request_compound.h"
#include "franchisereferalincome_request.h"



typedef struct franchisereferalincome_request_compound_t {
    struct address_request_t *obj_address; //model
    list_t *a_obj_contact; //nonprimitive container
    int fki_franchisebroker_id; //numeric
    int fki_franchisereferalincomeprogram_id; //numeric
    int fki_period_id; //numeric
    char *d_franchisereferalincome_loan; // string
    char *d_franchisereferalincome_franchiseamount; // string
    char *d_franchisereferalincome_franchisoramount; // string
    char *d_franchisereferalincome_agentamount; // string
    char *dt_franchisereferalincome_disbursed; // string
    char *t_franchisereferalincome_comment; // string
    int fki_franchiseoffice_id; //numeric
    char *s_franchisereferalincome_remoteid; // string

} franchisereferalincome_request_compound_t;

franchisereferalincome_request_compound_t *franchisereferalincome_request_compound_create(
    address_request_t *obj_address,
    list_t *a_obj_contact,
    int fki_franchisebroker_id,
    int fki_franchisereferalincomeprogram_id,
    int fki_period_id,
    char *d_franchisereferalincome_loan,
    char *d_franchisereferalincome_franchiseamount,
    char *d_franchisereferalincome_franchisoramount,
    char *d_franchisereferalincome_agentamount,
    char *dt_franchisereferalincome_disbursed,
    char *t_franchisereferalincome_comment,
    int fki_franchiseoffice_id,
    char *s_franchisereferalincome_remoteid
);

void franchisereferalincome_request_compound_free(franchisereferalincome_request_compound_t *franchisereferalincome_request_compound);

franchisereferalincome_request_compound_t *franchisereferalincome_request_compound_parseFromJSON(cJSON *franchisereferalincome_request_compoundJSON);

cJSON *franchisereferalincome_request_compound_convertToJSON(franchisereferalincome_request_compound_t *franchisereferalincome_request_compound);

#endif /* _franchisereferalincome_request_compound_H_ */

