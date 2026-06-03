/*
 * inscriptionnotauthenticatedcondition_response.h
 *
 * An Inscriptionnotauthenticatedcondition Object
 */

#ifndef _inscriptionnotauthenticatedcondition_response_H_
#define _inscriptionnotauthenticatedcondition_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inscriptionnotauthenticatedcondition_response_t inscriptionnotauthenticatedcondition_response_t;




typedef struct inscriptionnotauthenticatedcondition_response_t {
    int *pki_inscriptionnotauthenticatedcondition_id; //numeric
    int *fki_inscriptionnotauthenticatedconditiontype_id; //numeric
    char *s_inscriptionnotauthenticatedconditiontype_name_x; // string
    int *fki_inscriptionnotauthenticated_id; //numeric
    int *b_inscriptionnotauthenticatedcondition_filled; //boolean
    char *dt_inscriptionnotauthenticatedcondition_completed; // string
    char *dt_inscriptionnotauthenticatedcondition_due; // string
    char *t_inscriptionnotauthenticatedcondition_comment; // string

    int _library_owned; // Is the library responsible for freeing this object?
} inscriptionnotauthenticatedcondition_response_t;

__attribute__((deprecated)) inscriptionnotauthenticatedcondition_response_t *inscriptionnotauthenticatedcondition_response_create(
    int *pki_inscriptionnotauthenticatedcondition_id,
    int *fki_inscriptionnotauthenticatedconditiontype_id,
    char *s_inscriptionnotauthenticatedconditiontype_name_x,
    int *fki_inscriptionnotauthenticated_id,
    int *b_inscriptionnotauthenticatedcondition_filled,
    char *dt_inscriptionnotauthenticatedcondition_completed,
    char *dt_inscriptionnotauthenticatedcondition_due,
    char *t_inscriptionnotauthenticatedcondition_comment
);

void inscriptionnotauthenticatedcondition_response_free(inscriptionnotauthenticatedcondition_response_t *inscriptionnotauthenticatedcondition_response);

inscriptionnotauthenticatedcondition_response_t *inscriptionnotauthenticatedcondition_response_parseFromJSON(cJSON *inscriptionnotauthenticatedcondition_responseJSON);

cJSON *inscriptionnotauthenticatedcondition_response_convertToJSON(inscriptionnotauthenticatedcondition_response_t *inscriptionnotauthenticatedcondition_response);

#endif /* _inscriptionnotauthenticatedcondition_response_H_ */

