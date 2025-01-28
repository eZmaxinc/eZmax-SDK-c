/*
 * franchisereferalincome_request.h
 *
 * An Franchisereferalincome Object
 */

#ifndef _franchisereferalincome_request_H_
#define _franchisereferalincome_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct franchisereferalincome_request_t franchisereferalincome_request_t;




typedef struct franchisereferalincome_request_t {
    int pki_franchisereferalincome_id; //numeric
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

    int _library_owned; // Is the library responsible for freeing this object?
} franchisereferalincome_request_t;

__attribute__((deprecated)) franchisereferalincome_request_t *franchisereferalincome_request_create(
    int pki_franchisereferalincome_id,
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

void franchisereferalincome_request_free(franchisereferalincome_request_t *franchisereferalincome_request);

franchisereferalincome_request_t *franchisereferalincome_request_parseFromJSON(cJSON *franchisereferalincome_requestJSON);

cJSON *franchisereferalincome_request_convertToJSON(franchisereferalincome_request_t *franchisereferalincome_request);

#endif /* _franchisereferalincome_request_H_ */

