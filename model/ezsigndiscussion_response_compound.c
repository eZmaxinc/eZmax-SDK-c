#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndiscussion_response_compound.h"



ezsigndiscussion_response_compound_t *ezsigndiscussion_response_compound_create(
    int pki_ezsigndiscussion_id,
    int fki_ezsignpage_id,
    int fki_discussion_id,
    int i_ezsigndiscussion_x,
    int i_ezsigndiscussion_y,
    int i_ezsigndiscussion_pagenumber,
    discussion_response_compound_t *obj_discussion
    ) {
    ezsigndiscussion_response_compound_t *ezsigndiscussion_response_compound_local_var = malloc(sizeof(ezsigndiscussion_response_compound_t));
    if (!ezsigndiscussion_response_compound_local_var) {
        return NULL;
    }
    ezsigndiscussion_response_compound_local_var->pki_ezsigndiscussion_id = pki_ezsigndiscussion_id;
    ezsigndiscussion_response_compound_local_var->fki_ezsignpage_id = fki_ezsignpage_id;
    ezsigndiscussion_response_compound_local_var->fki_discussion_id = fki_discussion_id;
    ezsigndiscussion_response_compound_local_var->i_ezsigndiscussion_x = i_ezsigndiscussion_x;
    ezsigndiscussion_response_compound_local_var->i_ezsigndiscussion_y = i_ezsigndiscussion_y;
    ezsigndiscussion_response_compound_local_var->i_ezsigndiscussion_pagenumber = i_ezsigndiscussion_pagenumber;
    ezsigndiscussion_response_compound_local_var->obj_discussion = obj_discussion;

    return ezsigndiscussion_response_compound_local_var;
}


void ezsigndiscussion_response_compound_free(ezsigndiscussion_response_compound_t *ezsigndiscussion_response_compound) {
    if(NULL == ezsigndiscussion_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndiscussion_response_compound->obj_discussion) {
        discussion_response_compound_free(ezsigndiscussion_response_compound->obj_discussion);
        ezsigndiscussion_response_compound->obj_discussion = NULL;
    }
    free(ezsigndiscussion_response_compound);
}

cJSON *ezsigndiscussion_response_compound_convertToJSON(ezsigndiscussion_response_compound_t *ezsigndiscussion_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndiscussion_response_compound->pki_ezsigndiscussion_id
    if (!ezsigndiscussion_response_compound->pki_ezsigndiscussion_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigndiscussionID", ezsigndiscussion_response_compound->pki_ezsigndiscussion_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndiscussion_response_compound->fki_ezsignpage_id
    if (!ezsigndiscussion_response_compound->fki_ezsignpage_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignpageID", ezsigndiscussion_response_compound->fki_ezsignpage_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndiscussion_response_compound->fki_discussion_id
    if (!ezsigndiscussion_response_compound->fki_discussion_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiDiscussionID", ezsigndiscussion_response_compound->fki_discussion_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndiscussion_response_compound->i_ezsigndiscussion_x
    if (!ezsigndiscussion_response_compound->i_ezsigndiscussion_x) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigndiscussionX", ezsigndiscussion_response_compound->i_ezsigndiscussion_x) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndiscussion_response_compound->i_ezsigndiscussion_y
    if (!ezsigndiscussion_response_compound->i_ezsigndiscussion_y) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigndiscussionY", ezsigndiscussion_response_compound->i_ezsigndiscussion_y) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndiscussion_response_compound->i_ezsigndiscussion_pagenumber
    if (!ezsigndiscussion_response_compound->i_ezsigndiscussion_pagenumber) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigndiscussionPagenumber", ezsigndiscussion_response_compound->i_ezsigndiscussion_pagenumber) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndiscussion_response_compound->obj_discussion
    if (!ezsigndiscussion_response_compound->obj_discussion) {
        goto fail;
    }
    cJSON *obj_discussion_local_JSON = discussion_response_compound_convertToJSON(ezsigndiscussion_response_compound->obj_discussion);
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

ezsigndiscussion_response_compound_t *ezsigndiscussion_response_compound_parseFromJSON(cJSON *ezsigndiscussion_response_compoundJSON){

    ezsigndiscussion_response_compound_t *ezsigndiscussion_response_compound_local_var = NULL;

    // define the local variable for ezsigndiscussion_response_compound->obj_discussion
    discussion_response_compound_t *obj_discussion_local_nonprim = NULL;

    // ezsigndiscussion_response_compound->pki_ezsigndiscussion_id
    cJSON *pki_ezsigndiscussion_id = cJSON_GetObjectItemCaseSensitive(ezsigndiscussion_response_compoundJSON, "pkiEzsigndiscussionID");
    if (!pki_ezsigndiscussion_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigndiscussion_id))
    {
    goto end; //Numeric
    }

    // ezsigndiscussion_response_compound->fki_ezsignpage_id
    cJSON *fki_ezsignpage_id = cJSON_GetObjectItemCaseSensitive(ezsigndiscussion_response_compoundJSON, "fkiEzsignpageID");
    if (!fki_ezsignpage_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignpage_id))
    {
    goto end; //Numeric
    }

    // ezsigndiscussion_response_compound->fki_discussion_id
    cJSON *fki_discussion_id = cJSON_GetObjectItemCaseSensitive(ezsigndiscussion_response_compoundJSON, "fkiDiscussionID");
    if (!fki_discussion_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_discussion_id))
    {
    goto end; //Numeric
    }

    // ezsigndiscussion_response_compound->i_ezsigndiscussion_x
    cJSON *i_ezsigndiscussion_x = cJSON_GetObjectItemCaseSensitive(ezsigndiscussion_response_compoundJSON, "iEzsigndiscussionX");
    if (!i_ezsigndiscussion_x) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndiscussion_x))
    {
    goto end; //Numeric
    }

    // ezsigndiscussion_response_compound->i_ezsigndiscussion_y
    cJSON *i_ezsigndiscussion_y = cJSON_GetObjectItemCaseSensitive(ezsigndiscussion_response_compoundJSON, "iEzsigndiscussionY");
    if (!i_ezsigndiscussion_y) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndiscussion_y))
    {
    goto end; //Numeric
    }

    // ezsigndiscussion_response_compound->i_ezsigndiscussion_pagenumber
    cJSON *i_ezsigndiscussion_pagenumber = cJSON_GetObjectItemCaseSensitive(ezsigndiscussion_response_compoundJSON, "iEzsigndiscussionPagenumber");
    if (!i_ezsigndiscussion_pagenumber) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndiscussion_pagenumber))
    {
    goto end; //Numeric
    }

    // ezsigndiscussion_response_compound->obj_discussion
    cJSON *obj_discussion = cJSON_GetObjectItemCaseSensitive(ezsigndiscussion_response_compoundJSON, "objDiscussion");
    if (!obj_discussion) {
        goto end;
    }

    
    obj_discussion_local_nonprim = discussion_response_compound_parseFromJSON(obj_discussion); //nonprimitive


    ezsigndiscussion_response_compound_local_var = ezsigndiscussion_response_compound_create (
        pki_ezsigndiscussion_id->valuedouble,
        fki_ezsignpage_id->valuedouble,
        fki_discussion_id->valuedouble,
        i_ezsigndiscussion_x->valuedouble,
        i_ezsigndiscussion_y->valuedouble,
        i_ezsigndiscussion_pagenumber->valuedouble,
        obj_discussion_local_nonprim
        );

    return ezsigndiscussion_response_compound_local_var;
end:
    if (obj_discussion_local_nonprim) {
        discussion_response_compound_free(obj_discussion_local_nonprim);
        obj_discussion_local_nonprim = NULL;
    }
    return NULL;

}
