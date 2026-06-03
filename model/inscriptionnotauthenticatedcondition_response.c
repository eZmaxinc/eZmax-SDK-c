#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inscriptionnotauthenticatedcondition_response.h"



static inscriptionnotauthenticatedcondition_response_t *inscriptionnotauthenticatedcondition_response_create_internal(
    int *pki_inscriptionnotauthenticatedcondition_id,
    int *fki_inscriptionnotauthenticatedconditiontype_id,
    char *s_inscriptionnotauthenticatedconditiontype_name_x,
    int *fki_inscriptionnotauthenticated_id,
    int *b_inscriptionnotauthenticatedcondition_filled,
    char *dt_inscriptionnotauthenticatedcondition_completed,
    char *dt_inscriptionnotauthenticatedcondition_due,
    char *t_inscriptionnotauthenticatedcondition_comment
    ) {
    inscriptionnotauthenticatedcondition_response_t *inscriptionnotauthenticatedcondition_response_local_var = malloc(sizeof(inscriptionnotauthenticatedcondition_response_t));
    if (!inscriptionnotauthenticatedcondition_response_local_var) {
        return NULL;
    }
    memset(inscriptionnotauthenticatedcondition_response_local_var, 0, sizeof(inscriptionnotauthenticatedcondition_response_t));
    inscriptionnotauthenticatedcondition_response_local_var->_library_owned = 1;
    inscriptionnotauthenticatedcondition_response_local_var->pki_inscriptionnotauthenticatedcondition_id = pki_inscriptionnotauthenticatedcondition_id;
    inscriptionnotauthenticatedcondition_response_local_var->fki_inscriptionnotauthenticatedconditiontype_id = fki_inscriptionnotauthenticatedconditiontype_id;
    inscriptionnotauthenticatedcondition_response_local_var->s_inscriptionnotauthenticatedconditiontype_name_x = s_inscriptionnotauthenticatedconditiontype_name_x;
    inscriptionnotauthenticatedcondition_response_local_var->fki_inscriptionnotauthenticated_id = fki_inscriptionnotauthenticated_id;
    inscriptionnotauthenticatedcondition_response_local_var->b_inscriptionnotauthenticatedcondition_filled = b_inscriptionnotauthenticatedcondition_filled;
    inscriptionnotauthenticatedcondition_response_local_var->dt_inscriptionnotauthenticatedcondition_completed = dt_inscriptionnotauthenticatedcondition_completed;
    inscriptionnotauthenticatedcondition_response_local_var->dt_inscriptionnotauthenticatedcondition_due = dt_inscriptionnotauthenticatedcondition_due;
    inscriptionnotauthenticatedcondition_response_local_var->t_inscriptionnotauthenticatedcondition_comment = t_inscriptionnotauthenticatedcondition_comment;
    return inscriptionnotauthenticatedcondition_response_local_var;
}

__attribute__((deprecated)) inscriptionnotauthenticatedcondition_response_t *inscriptionnotauthenticatedcondition_response_create(
    int *pki_inscriptionnotauthenticatedcondition_id,
    int *fki_inscriptionnotauthenticatedconditiontype_id,
    char *s_inscriptionnotauthenticatedconditiontype_name_x,
    int *fki_inscriptionnotauthenticated_id,
    int *b_inscriptionnotauthenticatedcondition_filled,
    char *dt_inscriptionnotauthenticatedcondition_completed,
    char *dt_inscriptionnotauthenticatedcondition_due,
    char *t_inscriptionnotauthenticatedcondition_comment
    ) {
    int *pki_inscriptionnotauthenticatedcondition_id_copy = NULL;
    if (pki_inscriptionnotauthenticatedcondition_id) {
        pki_inscriptionnotauthenticatedcondition_id_copy = malloc(sizeof(int));
        if (pki_inscriptionnotauthenticatedcondition_id_copy) *pki_inscriptionnotauthenticatedcondition_id_copy = *pki_inscriptionnotauthenticatedcondition_id;
    }
    int *fki_inscriptionnotauthenticatedconditiontype_id_copy = NULL;
    if (fki_inscriptionnotauthenticatedconditiontype_id) {
        fki_inscriptionnotauthenticatedconditiontype_id_copy = malloc(sizeof(int));
        if (fki_inscriptionnotauthenticatedconditiontype_id_copy) *fki_inscriptionnotauthenticatedconditiontype_id_copy = *fki_inscriptionnotauthenticatedconditiontype_id;
    }
    int *fki_inscriptionnotauthenticated_id_copy = NULL;
    if (fki_inscriptionnotauthenticated_id) {
        fki_inscriptionnotauthenticated_id_copy = malloc(sizeof(int));
        if (fki_inscriptionnotauthenticated_id_copy) *fki_inscriptionnotauthenticated_id_copy = *fki_inscriptionnotauthenticated_id;
    }
    int *b_inscriptionnotauthenticatedcondition_filled_copy = NULL;
    if (b_inscriptionnotauthenticatedcondition_filled) {
        b_inscriptionnotauthenticatedcondition_filled_copy = malloc(sizeof(int));
        if (b_inscriptionnotauthenticatedcondition_filled_copy) *b_inscriptionnotauthenticatedcondition_filled_copy = *b_inscriptionnotauthenticatedcondition_filled;
    }
    inscriptionnotauthenticatedcondition_response_t *result = inscriptionnotauthenticatedcondition_response_create_internal (
        pki_inscriptionnotauthenticatedcondition_id_copy,
        fki_inscriptionnotauthenticatedconditiontype_id_copy,
        s_inscriptionnotauthenticatedconditiontype_name_x,
        fki_inscriptionnotauthenticated_id_copy,
        b_inscriptionnotauthenticatedcondition_filled_copy,
        dt_inscriptionnotauthenticatedcondition_completed,
        dt_inscriptionnotauthenticatedcondition_due,
        t_inscriptionnotauthenticatedcondition_comment
        );
    if (!result) {
        free(pki_inscriptionnotauthenticatedcondition_id_copy);
        free(fki_inscriptionnotauthenticatedconditiontype_id_copy);
        free(fki_inscriptionnotauthenticated_id_copy);
        free(b_inscriptionnotauthenticatedcondition_filled_copy);
    }
    return result;
}

void inscriptionnotauthenticatedcondition_response_free(inscriptionnotauthenticatedcondition_response_t *inscriptionnotauthenticatedcondition_response) {
    if(NULL == inscriptionnotauthenticatedcondition_response){
        return ;
    }
    if(inscriptionnotauthenticatedcondition_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "inscriptionnotauthenticatedcondition_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (inscriptionnotauthenticatedcondition_response->pki_inscriptionnotauthenticatedcondition_id) {
        free(inscriptionnotauthenticatedcondition_response->pki_inscriptionnotauthenticatedcondition_id);
        inscriptionnotauthenticatedcondition_response->pki_inscriptionnotauthenticatedcondition_id = NULL;
    }
    if (inscriptionnotauthenticatedcondition_response->fki_inscriptionnotauthenticatedconditiontype_id) {
        free(inscriptionnotauthenticatedcondition_response->fki_inscriptionnotauthenticatedconditiontype_id);
        inscriptionnotauthenticatedcondition_response->fki_inscriptionnotauthenticatedconditiontype_id = NULL;
    }
    if (inscriptionnotauthenticatedcondition_response->s_inscriptionnotauthenticatedconditiontype_name_x) {
        free(inscriptionnotauthenticatedcondition_response->s_inscriptionnotauthenticatedconditiontype_name_x);
        inscriptionnotauthenticatedcondition_response->s_inscriptionnotauthenticatedconditiontype_name_x = NULL;
    }
    if (inscriptionnotauthenticatedcondition_response->fki_inscriptionnotauthenticated_id) {
        free(inscriptionnotauthenticatedcondition_response->fki_inscriptionnotauthenticated_id);
        inscriptionnotauthenticatedcondition_response->fki_inscriptionnotauthenticated_id = NULL;
    }
    if (inscriptionnotauthenticatedcondition_response->b_inscriptionnotauthenticatedcondition_filled) {
        free(inscriptionnotauthenticatedcondition_response->b_inscriptionnotauthenticatedcondition_filled);
        inscriptionnotauthenticatedcondition_response->b_inscriptionnotauthenticatedcondition_filled = NULL;
    }
    if (inscriptionnotauthenticatedcondition_response->dt_inscriptionnotauthenticatedcondition_completed) {
        free(inscriptionnotauthenticatedcondition_response->dt_inscriptionnotauthenticatedcondition_completed);
        inscriptionnotauthenticatedcondition_response->dt_inscriptionnotauthenticatedcondition_completed = NULL;
    }
    if (inscriptionnotauthenticatedcondition_response->dt_inscriptionnotauthenticatedcondition_due) {
        free(inscriptionnotauthenticatedcondition_response->dt_inscriptionnotauthenticatedcondition_due);
        inscriptionnotauthenticatedcondition_response->dt_inscriptionnotauthenticatedcondition_due = NULL;
    }
    if (inscriptionnotauthenticatedcondition_response->t_inscriptionnotauthenticatedcondition_comment) {
        free(inscriptionnotauthenticatedcondition_response->t_inscriptionnotauthenticatedcondition_comment);
        inscriptionnotauthenticatedcondition_response->t_inscriptionnotauthenticatedcondition_comment = NULL;
    }
    free(inscriptionnotauthenticatedcondition_response);
}

cJSON *inscriptionnotauthenticatedcondition_response_convertToJSON(inscriptionnotauthenticatedcondition_response_t *inscriptionnotauthenticatedcondition_response) {
    cJSON *item = cJSON_CreateObject();

    // inscriptionnotauthenticatedcondition_response->pki_inscriptionnotauthenticatedcondition_id
    if (!inscriptionnotauthenticatedcondition_response->pki_inscriptionnotauthenticatedcondition_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiInscriptionnotauthenticatedconditionID", *inscriptionnotauthenticatedcondition_response->pki_inscriptionnotauthenticatedcondition_id) == NULL) {
    goto fail; //Numeric
    }


    // inscriptionnotauthenticatedcondition_response->fki_inscriptionnotauthenticatedconditiontype_id
    if (!inscriptionnotauthenticatedcondition_response->fki_inscriptionnotauthenticatedconditiontype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiInscriptionnotauthenticatedconditiontypeID", *inscriptionnotauthenticatedcondition_response->fki_inscriptionnotauthenticatedconditiontype_id) == NULL) {
    goto fail; //Numeric
    }


    // inscriptionnotauthenticatedcondition_response->s_inscriptionnotauthenticatedconditiontype_name_x
    if (!inscriptionnotauthenticatedcondition_response->s_inscriptionnotauthenticatedconditiontype_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sInscriptionnotauthenticatedconditiontypeNameX", inscriptionnotauthenticatedcondition_response->s_inscriptionnotauthenticatedconditiontype_name_x) == NULL) {
    goto fail; //String
    }


    // inscriptionnotauthenticatedcondition_response->fki_inscriptionnotauthenticated_id
    if (!inscriptionnotauthenticatedcondition_response->fki_inscriptionnotauthenticated_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiInscriptionnotauthenticatedID", *inscriptionnotauthenticatedcondition_response->fki_inscriptionnotauthenticated_id) == NULL) {
    goto fail; //Numeric
    }


    // inscriptionnotauthenticatedcondition_response->b_inscriptionnotauthenticatedcondition_filled
    if (!inscriptionnotauthenticatedcondition_response->b_inscriptionnotauthenticatedcondition_filled) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bInscriptionnotauthenticatedconditionFilled", *inscriptionnotauthenticatedcondition_response->b_inscriptionnotauthenticatedcondition_filled) == NULL) {
    goto fail; //Bool
    }


    // inscriptionnotauthenticatedcondition_response->dt_inscriptionnotauthenticatedcondition_completed
    if(inscriptionnotauthenticatedcondition_response->dt_inscriptionnotauthenticatedcondition_completed) {
    if(cJSON_AddStringToObject(item, "dtInscriptionnotauthenticatedconditionCompleted", inscriptionnotauthenticatedcondition_response->dt_inscriptionnotauthenticatedcondition_completed) == NULL) {
    goto fail; //String
    }
    }


    // inscriptionnotauthenticatedcondition_response->dt_inscriptionnotauthenticatedcondition_due
    if(inscriptionnotauthenticatedcondition_response->dt_inscriptionnotauthenticatedcondition_due) {
    if(cJSON_AddStringToObject(item, "dtInscriptionnotauthenticatedconditionDue", inscriptionnotauthenticatedcondition_response->dt_inscriptionnotauthenticatedcondition_due) == NULL) {
    goto fail; //String
    }
    }


    // inscriptionnotauthenticatedcondition_response->t_inscriptionnotauthenticatedcondition_comment
    if (!inscriptionnotauthenticatedcondition_response->t_inscriptionnotauthenticatedcondition_comment) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tInscriptionnotauthenticatedconditionComment", inscriptionnotauthenticatedcondition_response->t_inscriptionnotauthenticatedcondition_comment) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inscriptionnotauthenticatedcondition_response_t *inscriptionnotauthenticatedcondition_response_parseFromJSON(cJSON *inscriptionnotauthenticatedcondition_responseJSON){

    inscriptionnotauthenticatedcondition_response_t *inscriptionnotauthenticatedcondition_response_local_var = NULL;

    // define the local variable for inscriptionnotauthenticatedcondition_response->pki_inscriptionnotauthenticatedcondition_id
    int *pki_inscriptionnotauthenticatedcondition_id_local_var = NULL;

    // define the local variable for inscriptionnotauthenticatedcondition_response->fki_inscriptionnotauthenticatedconditiontype_id
    int *fki_inscriptionnotauthenticatedconditiontype_id_local_var = NULL;

    char *s_inscriptionnotauthenticatedconditiontype_name_x_local_str = NULL;

    // define the local variable for inscriptionnotauthenticatedcondition_response->fki_inscriptionnotauthenticated_id
    int *fki_inscriptionnotauthenticated_id_local_var = NULL;

    // define the local variable for inscriptionnotauthenticatedcondition_response->b_inscriptionnotauthenticatedcondition_filled
    int *b_inscriptionnotauthenticatedcondition_filled_local_var = NULL;

    char *dt_inscriptionnotauthenticatedcondition_completed_local_str = NULL;

    char *dt_inscriptionnotauthenticatedcondition_due_local_str = NULL;

    char *t_inscriptionnotauthenticatedcondition_comment_local_str = NULL;

    // inscriptionnotauthenticatedcondition_response->pki_inscriptionnotauthenticatedcondition_id
    cJSON *pki_inscriptionnotauthenticatedcondition_id = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticatedcondition_responseJSON, "pkiInscriptionnotauthenticatedconditionID");
    if (cJSON_IsNull(pki_inscriptionnotauthenticatedcondition_id)) {
        pki_inscriptionnotauthenticatedcondition_id = NULL;
    }
    if (!pki_inscriptionnotauthenticatedcondition_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_inscriptionnotauthenticatedcondition_id))
    {
    goto end; //Numeric
    }
    pki_inscriptionnotauthenticatedcondition_id_local_var = malloc(sizeof(int));
    if(!pki_inscriptionnotauthenticatedcondition_id_local_var)
    {
        goto end;
    }
    *pki_inscriptionnotauthenticatedcondition_id_local_var = pki_inscriptionnotauthenticatedcondition_id->valuedouble;

    // inscriptionnotauthenticatedcondition_response->fki_inscriptionnotauthenticatedconditiontype_id
    cJSON *fki_inscriptionnotauthenticatedconditiontype_id = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticatedcondition_responseJSON, "fkiInscriptionnotauthenticatedconditiontypeID");
    if (cJSON_IsNull(fki_inscriptionnotauthenticatedconditiontype_id)) {
        fki_inscriptionnotauthenticatedconditiontype_id = NULL;
    }
    if (!fki_inscriptionnotauthenticatedconditiontype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_inscriptionnotauthenticatedconditiontype_id))
    {
    goto end; //Numeric
    }
    fki_inscriptionnotauthenticatedconditiontype_id_local_var = malloc(sizeof(int));
    if(!fki_inscriptionnotauthenticatedconditiontype_id_local_var)
    {
        goto end;
    }
    *fki_inscriptionnotauthenticatedconditiontype_id_local_var = fki_inscriptionnotauthenticatedconditiontype_id->valuedouble;

    // inscriptionnotauthenticatedcondition_response->s_inscriptionnotauthenticatedconditiontype_name_x
    cJSON *s_inscriptionnotauthenticatedconditiontype_name_x = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticatedcondition_responseJSON, "sInscriptionnotauthenticatedconditiontypeNameX");
    if (cJSON_IsNull(s_inscriptionnotauthenticatedconditiontype_name_x)) {
        s_inscriptionnotauthenticatedconditiontype_name_x = NULL;
    }
    if (!s_inscriptionnotauthenticatedconditiontype_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_inscriptionnotauthenticatedconditiontype_name_x))
    {
    goto end; //String
    }

    // inscriptionnotauthenticatedcondition_response->fki_inscriptionnotauthenticated_id
    cJSON *fki_inscriptionnotauthenticated_id = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticatedcondition_responseJSON, "fkiInscriptionnotauthenticatedID");
    if (cJSON_IsNull(fki_inscriptionnotauthenticated_id)) {
        fki_inscriptionnotauthenticated_id = NULL;
    }
    if (!fki_inscriptionnotauthenticated_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_inscriptionnotauthenticated_id))
    {
    goto end; //Numeric
    }
    fki_inscriptionnotauthenticated_id_local_var = malloc(sizeof(int));
    if(!fki_inscriptionnotauthenticated_id_local_var)
    {
        goto end;
    }
    *fki_inscriptionnotauthenticated_id_local_var = fki_inscriptionnotauthenticated_id->valuedouble;

    // inscriptionnotauthenticatedcondition_response->b_inscriptionnotauthenticatedcondition_filled
    cJSON *b_inscriptionnotauthenticatedcondition_filled = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticatedcondition_responseJSON, "bInscriptionnotauthenticatedconditionFilled");
    if (cJSON_IsNull(b_inscriptionnotauthenticatedcondition_filled)) {
        b_inscriptionnotauthenticatedcondition_filled = NULL;
    }
    if (!b_inscriptionnotauthenticatedcondition_filled) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_inscriptionnotauthenticatedcondition_filled))
    {
    goto end; //Bool
    }
    b_inscriptionnotauthenticatedcondition_filled_local_var = malloc(sizeof(int));
    if(!b_inscriptionnotauthenticatedcondition_filled_local_var)
    {
        goto end;
    }
    *b_inscriptionnotauthenticatedcondition_filled_local_var = b_inscriptionnotauthenticatedcondition_filled->valueint;

    // inscriptionnotauthenticatedcondition_response->dt_inscriptionnotauthenticatedcondition_completed
    cJSON *dt_inscriptionnotauthenticatedcondition_completed = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticatedcondition_responseJSON, "dtInscriptionnotauthenticatedconditionCompleted");
    if (cJSON_IsNull(dt_inscriptionnotauthenticatedcondition_completed)) {
        dt_inscriptionnotauthenticatedcondition_completed = NULL;
    }
    if (dt_inscriptionnotauthenticatedcondition_completed) { 
    if(!cJSON_IsString(dt_inscriptionnotauthenticatedcondition_completed) && !cJSON_IsNull(dt_inscriptionnotauthenticatedcondition_completed))
    {
    goto end; //String
    }
    }

    // inscriptionnotauthenticatedcondition_response->dt_inscriptionnotauthenticatedcondition_due
    cJSON *dt_inscriptionnotauthenticatedcondition_due = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticatedcondition_responseJSON, "dtInscriptionnotauthenticatedconditionDue");
    if (cJSON_IsNull(dt_inscriptionnotauthenticatedcondition_due)) {
        dt_inscriptionnotauthenticatedcondition_due = NULL;
    }
    if (dt_inscriptionnotauthenticatedcondition_due) { 
    if(!cJSON_IsString(dt_inscriptionnotauthenticatedcondition_due) && !cJSON_IsNull(dt_inscriptionnotauthenticatedcondition_due))
    {
    goto end; //String
    }
    }

    // inscriptionnotauthenticatedcondition_response->t_inscriptionnotauthenticatedcondition_comment
    cJSON *t_inscriptionnotauthenticatedcondition_comment = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticatedcondition_responseJSON, "tInscriptionnotauthenticatedconditionComment");
    if (cJSON_IsNull(t_inscriptionnotauthenticatedcondition_comment)) {
        t_inscriptionnotauthenticatedcondition_comment = NULL;
    }
    if (!t_inscriptionnotauthenticatedcondition_comment) {
        goto end;
    }

    
    if(!cJSON_IsString(t_inscriptionnotauthenticatedcondition_comment))
    {
    goto end; //String
    }


    if (s_inscriptionnotauthenticatedconditiontype_name_x && !cJSON_IsNull(s_inscriptionnotauthenticatedconditiontype_name_x)) s_inscriptionnotauthenticatedconditiontype_name_x_local_str = strdup(s_inscriptionnotauthenticatedconditiontype_name_x->valuestring);
    if (dt_inscriptionnotauthenticatedcondition_completed && !cJSON_IsNull(dt_inscriptionnotauthenticatedcondition_completed)) dt_inscriptionnotauthenticatedcondition_completed_local_str = strdup(dt_inscriptionnotauthenticatedcondition_completed->valuestring);
    if (dt_inscriptionnotauthenticatedcondition_due && !cJSON_IsNull(dt_inscriptionnotauthenticatedcondition_due)) dt_inscriptionnotauthenticatedcondition_due_local_str = strdup(dt_inscriptionnotauthenticatedcondition_due->valuestring);
    if (t_inscriptionnotauthenticatedcondition_comment && !cJSON_IsNull(t_inscriptionnotauthenticatedcondition_comment)) t_inscriptionnotauthenticatedcondition_comment_local_str = strdup(t_inscriptionnotauthenticatedcondition_comment->valuestring);

    inscriptionnotauthenticatedcondition_response_local_var = inscriptionnotauthenticatedcondition_response_create_internal (
        pki_inscriptionnotauthenticatedcondition_id_local_var,
        fki_inscriptionnotauthenticatedconditiontype_id_local_var,
        s_inscriptionnotauthenticatedconditiontype_name_x_local_str,
        fki_inscriptionnotauthenticated_id_local_var,
        b_inscriptionnotauthenticatedcondition_filled_local_var,
        dt_inscriptionnotauthenticatedcondition_completed_local_str,
        dt_inscriptionnotauthenticatedcondition_due_local_str,
        t_inscriptionnotauthenticatedcondition_comment_local_str
        );

    if (!inscriptionnotauthenticatedcondition_response_local_var) {
        goto end;
    }

    return inscriptionnotauthenticatedcondition_response_local_var;
end:
    if (pki_inscriptionnotauthenticatedcondition_id_local_var) {
        free(pki_inscriptionnotauthenticatedcondition_id_local_var);
        pki_inscriptionnotauthenticatedcondition_id_local_var = NULL;
    }
    if (fki_inscriptionnotauthenticatedconditiontype_id_local_var) {
        free(fki_inscriptionnotauthenticatedconditiontype_id_local_var);
        fki_inscriptionnotauthenticatedconditiontype_id_local_var = NULL;
    }
    if (s_inscriptionnotauthenticatedconditiontype_name_x_local_str) {
        free(s_inscriptionnotauthenticatedconditiontype_name_x_local_str);
        s_inscriptionnotauthenticatedconditiontype_name_x_local_str = NULL;
    }
    if (fki_inscriptionnotauthenticated_id_local_var) {
        free(fki_inscriptionnotauthenticated_id_local_var);
        fki_inscriptionnotauthenticated_id_local_var = NULL;
    }
    if (b_inscriptionnotauthenticatedcondition_filled_local_var) {
        free(b_inscriptionnotauthenticatedcondition_filled_local_var);
        b_inscriptionnotauthenticatedcondition_filled_local_var = NULL;
    }
    if (dt_inscriptionnotauthenticatedcondition_completed_local_str) {
        free(dt_inscriptionnotauthenticatedcondition_completed_local_str);
        dt_inscriptionnotauthenticatedcondition_completed_local_str = NULL;
    }
    if (dt_inscriptionnotauthenticatedcondition_due_local_str) {
        free(dt_inscriptionnotauthenticatedcondition_due_local_str);
        dt_inscriptionnotauthenticatedcondition_due_local_str = NULL;
    }
    if (t_inscriptionnotauthenticatedcondition_comment_local_str) {
        free(t_inscriptionnotauthenticatedcondition_comment_local_str);
        t_inscriptionnotauthenticatedcondition_comment_local_str = NULL;
    }
    return NULL;

}
