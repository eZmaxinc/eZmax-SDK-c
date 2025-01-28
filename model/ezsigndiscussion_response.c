#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndiscussion_response.h"



static ezsigndiscussion_response_t *ezsigndiscussion_response_create_internal(
    int pki_ezsigndiscussion_id,
    int fki_ezsignpage_id,
    int fki_discussion_id,
    int i_ezsigndiscussion_x,
    int i_ezsigndiscussion_y,
    int i_ezsigndiscussion_pagenumber,
    discussion_response_compound_t *obj_discussion
    ) {
    ezsigndiscussion_response_t *ezsigndiscussion_response_local_var = malloc(sizeof(ezsigndiscussion_response_t));
    if (!ezsigndiscussion_response_local_var) {
        return NULL;
    }
    ezsigndiscussion_response_local_var->pki_ezsigndiscussion_id = pki_ezsigndiscussion_id;
    ezsigndiscussion_response_local_var->fki_ezsignpage_id = fki_ezsignpage_id;
    ezsigndiscussion_response_local_var->fki_discussion_id = fki_discussion_id;
    ezsigndiscussion_response_local_var->i_ezsigndiscussion_x = i_ezsigndiscussion_x;
    ezsigndiscussion_response_local_var->i_ezsigndiscussion_y = i_ezsigndiscussion_y;
    ezsigndiscussion_response_local_var->i_ezsigndiscussion_pagenumber = i_ezsigndiscussion_pagenumber;
    ezsigndiscussion_response_local_var->obj_discussion = obj_discussion;

    ezsigndiscussion_response_local_var->_library_owned = 1;
    return ezsigndiscussion_response_local_var;
}

__attribute__((deprecated)) ezsigndiscussion_response_t *ezsigndiscussion_response_create(
    int pki_ezsigndiscussion_id,
    int fki_ezsignpage_id,
    int fki_discussion_id,
    int i_ezsigndiscussion_x,
    int i_ezsigndiscussion_y,
    int i_ezsigndiscussion_pagenumber,
    discussion_response_compound_t *obj_discussion
    ) {
    return ezsigndiscussion_response_create_internal (
        pki_ezsigndiscussion_id,
        fki_ezsignpage_id,
        fki_discussion_id,
        i_ezsigndiscussion_x,
        i_ezsigndiscussion_y,
        i_ezsigndiscussion_pagenumber,
        obj_discussion
        );
}

void ezsigndiscussion_response_free(ezsigndiscussion_response_t *ezsigndiscussion_response) {
    if(NULL == ezsigndiscussion_response){
        return ;
    }
    if(ezsigndiscussion_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigndiscussion_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndiscussion_response->obj_discussion) {
        discussion_response_compound_free(ezsigndiscussion_response->obj_discussion);
        ezsigndiscussion_response->obj_discussion = NULL;
    }
    free(ezsigndiscussion_response);
}

cJSON *ezsigndiscussion_response_convertToJSON(ezsigndiscussion_response_t *ezsigndiscussion_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndiscussion_response->pki_ezsigndiscussion_id
    if (!ezsigndiscussion_response->pki_ezsigndiscussion_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigndiscussionID", ezsigndiscussion_response->pki_ezsigndiscussion_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndiscussion_response->fki_ezsignpage_id
    if (!ezsigndiscussion_response->fki_ezsignpage_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignpageID", ezsigndiscussion_response->fki_ezsignpage_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndiscussion_response->fki_discussion_id
    if (!ezsigndiscussion_response->fki_discussion_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiDiscussionID", ezsigndiscussion_response->fki_discussion_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndiscussion_response->i_ezsigndiscussion_x
    if (!ezsigndiscussion_response->i_ezsigndiscussion_x) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigndiscussionX", ezsigndiscussion_response->i_ezsigndiscussion_x) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndiscussion_response->i_ezsigndiscussion_y
    if (!ezsigndiscussion_response->i_ezsigndiscussion_y) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigndiscussionY", ezsigndiscussion_response->i_ezsigndiscussion_y) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndiscussion_response->i_ezsigndiscussion_pagenumber
    if (!ezsigndiscussion_response->i_ezsigndiscussion_pagenumber) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigndiscussionPagenumber", ezsigndiscussion_response->i_ezsigndiscussion_pagenumber) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndiscussion_response->obj_discussion
    if (!ezsigndiscussion_response->obj_discussion) {
        goto fail;
    }
    cJSON *obj_discussion_local_JSON = discussion_response_compound_convertToJSON(ezsigndiscussion_response->obj_discussion);
    if(obj_discussion_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDiscussion", obj_discussion_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigndiscussion_response_t *ezsigndiscussion_response_parseFromJSON(cJSON *ezsigndiscussion_responseJSON){

    ezsigndiscussion_response_t *ezsigndiscussion_response_local_var = NULL;

    // define the local variable for ezsigndiscussion_response->obj_discussion
    discussion_response_compound_t *obj_discussion_local_nonprim = NULL;

    // ezsigndiscussion_response->pki_ezsigndiscussion_id
    cJSON *pki_ezsigndiscussion_id = cJSON_GetObjectItemCaseSensitive(ezsigndiscussion_responseJSON, "pkiEzsigndiscussionID");
    if (cJSON_IsNull(pki_ezsigndiscussion_id)) {
        pki_ezsigndiscussion_id = NULL;
    }
    if (!pki_ezsigndiscussion_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigndiscussion_id))
    {
    goto end; //Numeric
    }

    // ezsigndiscussion_response->fki_ezsignpage_id
    cJSON *fki_ezsignpage_id = cJSON_GetObjectItemCaseSensitive(ezsigndiscussion_responseJSON, "fkiEzsignpageID");
    if (cJSON_IsNull(fki_ezsignpage_id)) {
        fki_ezsignpage_id = NULL;
    }
    if (!fki_ezsignpage_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignpage_id))
    {
    goto end; //Numeric
    }

    // ezsigndiscussion_response->fki_discussion_id
    cJSON *fki_discussion_id = cJSON_GetObjectItemCaseSensitive(ezsigndiscussion_responseJSON, "fkiDiscussionID");
    if (cJSON_IsNull(fki_discussion_id)) {
        fki_discussion_id = NULL;
    }
    if (!fki_discussion_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_discussion_id))
    {
    goto end; //Numeric
    }

    // ezsigndiscussion_response->i_ezsigndiscussion_x
    cJSON *i_ezsigndiscussion_x = cJSON_GetObjectItemCaseSensitive(ezsigndiscussion_responseJSON, "iEzsigndiscussionX");
    if (cJSON_IsNull(i_ezsigndiscussion_x)) {
        i_ezsigndiscussion_x = NULL;
    }
    if (!i_ezsigndiscussion_x) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndiscussion_x))
    {
    goto end; //Numeric
    }

    // ezsigndiscussion_response->i_ezsigndiscussion_y
    cJSON *i_ezsigndiscussion_y = cJSON_GetObjectItemCaseSensitive(ezsigndiscussion_responseJSON, "iEzsigndiscussionY");
    if (cJSON_IsNull(i_ezsigndiscussion_y)) {
        i_ezsigndiscussion_y = NULL;
    }
    if (!i_ezsigndiscussion_y) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndiscussion_y))
    {
    goto end; //Numeric
    }

    // ezsigndiscussion_response->i_ezsigndiscussion_pagenumber
    cJSON *i_ezsigndiscussion_pagenumber = cJSON_GetObjectItemCaseSensitive(ezsigndiscussion_responseJSON, "iEzsigndiscussionPagenumber");
    if (cJSON_IsNull(i_ezsigndiscussion_pagenumber)) {
        i_ezsigndiscussion_pagenumber = NULL;
    }
    if (!i_ezsigndiscussion_pagenumber) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndiscussion_pagenumber))
    {
    goto end; //Numeric
    }

    // ezsigndiscussion_response->obj_discussion
    cJSON *obj_discussion = cJSON_GetObjectItemCaseSensitive(ezsigndiscussion_responseJSON, "objDiscussion");
    if (cJSON_IsNull(obj_discussion)) {
        obj_discussion = NULL;
    }
    if (!obj_discussion) {
        goto end;
    }

    
    obj_discussion_local_nonprim = discussion_response_compound_parseFromJSON(obj_discussion); //nonprimitive


    ezsigndiscussion_response_local_var = ezsigndiscussion_response_create_internal (
        pki_ezsigndiscussion_id->valuedouble,
        fki_ezsignpage_id->valuedouble,
        fki_discussion_id->valuedouble,
        i_ezsigndiscussion_x->valuedouble,
        i_ezsigndiscussion_y->valuedouble,
        i_ezsigndiscussion_pagenumber->valuedouble,
        obj_discussion_local_nonprim
        );

    return ezsigndiscussion_response_local_var;
end:
    if (obj_discussion_local_nonprim) {
        discussion_response_compound_free(obj_discussion_local_nonprim);
        obj_discussion_local_nonprim = NULL;
    }
    return NULL;

}
