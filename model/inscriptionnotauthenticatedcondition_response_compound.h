/*
 * inscriptionnotauthenticatedcondition_response_compound.h
 *
 * An Inscriptionnotauthenticatedcondition Object and children to create a complete structure
 */

#ifndef _inscriptionnotauthenticatedcondition_response_compound_H_
#define _inscriptionnotauthenticatedcondition_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inscriptionnotauthenticatedcondition_response_compound_t inscriptionnotauthenticatedcondition_response_compound_t;




typedef struct inscriptionnotauthenticatedcondition_response_compound_t {
    int *pki_inscriptionnotauthenticatedcondition_id; //numeric
    int *fki_inscriptionnotauthenticatedconditiontype_id; //numeric
    char *s_inscriptionnotauthenticatedconditiontype_name_x; // string
    int *fki_inscriptionnotauthenticated_id; //numeric
    int *b_inscriptionnotauthenticatedcondition_filled; //boolean
    char *dt_inscriptionnotauthenticatedcondition_completed; // string
    char *dt_inscriptionnotauthenticatedcondition_due; // string
    char *t_inscriptionnotauthenticatedcondition_comment; // string

    int _library_owned; // Is the library responsible for freeing this object?
} inscriptionnotauthenticatedcondition_response_compound_t;

__attribute__((deprecated)) inscriptionnotauthenticatedcondition_response_compound_t *inscriptionnotauthenticatedcondition_response_compound_create(
    int *pki_inscriptionnotauthenticatedcondition_id,
    int *fki_inscriptionnotauthenticatedconditiontype_id,
    char *s_inscriptionnotauthenticatedconditiontype_name_x,
    int *fki_inscriptionnotauthenticated_id,
    int *b_inscriptionnotauthenticatedcondition_filled,
    char *dt_inscriptionnotauthenticatedcondition_completed,
    char *dt_inscriptionnotauthenticatedcondition_due,
    char *t_inscriptionnotauthenticatedcondition_comment
);

void inscriptionnotauthenticatedcondition_response_compound_free(inscriptionnotauthenticatedcondition_response_compound_t *inscriptionnotauthenticatedcondition_response_compound);

inscriptionnotauthenticatedcondition_response_compound_t *inscriptionnotauthenticatedcondition_response_compound_parseFromJSON(cJSON *inscriptionnotauthenticatedcondition_response_compoundJSON);

cJSON *inscriptionnotauthenticatedcondition_response_compound_convertToJSON(inscriptionnotauthenticatedcondition_response_compound_t *inscriptionnotauthenticatedcondition_response_compound);

#endif /* _inscriptionnotauthenticatedcondition_response_compound_H_ */

