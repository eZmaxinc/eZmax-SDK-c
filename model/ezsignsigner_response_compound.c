#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsigner_response_compound.h"



ezsignsigner_response_compound_t *ezsignsigner_response_compound_create(
    int pki_ezsignsigner_id,
    int fki_taxassignment_id,
    int fki_secretquestion_id,
    int fki_userlogintype_id,
    char *s_userlogintype_description_x,
    ezsignsigner_response_compound_contact_t *obj_contact
    ) {
    ezsignsigner_response_compound_t *ezsignsigner_response_compound_local_var = malloc(sizeof(ezsignsigner_response_compound_t));
    if (!ezsignsigner_response_compound_local_var) {
        return NULL;
    }
    ezsignsigner_response_compound_local_var->pki_ezsignsigner_id = pki_ezsignsigner_id;
    ezsignsigner_response_compound_local_var->fki_taxassignment_id = fki_taxassignment_id;
    ezsignsigner_response_compound_local_var->fki_secretquestion_id = fki_secretquestion_id;
    ezsignsigner_response_compound_local_var->fki_userlogintype_id = fki_userlogintype_id;
    ezsignsigner_response_compound_local_var->s_userlogintype_description_x = s_userlogintype_description_x;
    ezsignsigner_response_compound_local_var->obj_contact = obj_contact;

    return ezsignsigner_response_compound_local_var;
}


void ezsignsigner_response_compound_free(ezsignsigner_response_compound_t *ezsignsigner_response_compound) {
    if(NULL == ezsignsigner_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsigner_response_compound->s_userlogintype_description_x) {
        free(ezsignsigner_response_compound->s_userlogintype_description_x);
        ezsignsigner_response_compound->s_userlogintype_description_x = NULL;
    }
    if (ezsignsigner_response_compound->obj_contact) {
        ezsignsigner_response_compound_contact_free(ezsignsigner_response_compound->obj_contact);
        ezsignsigner_response_compound->obj_contact = NULL;
    }
    free(ezsignsigner_response_compound);
}

cJSON *ezsignsigner_response_compound_convertToJSON(ezsignsigner_response_compound_t *ezsignsigner_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsigner_response_compound->pki_ezsignsigner_id
    if (!ezsignsigner_response_compound->pki_ezsignsigner_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "pkiEzsignsignerID", ezsignsigner_response_compound->pki_ezsignsigner_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsigner_response_compound->fki_taxassignment_id
    if (!ezsignsigner_response_compound->fki_taxassignment_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiTaxassignmentID", ezsignsigner_response_compound->fki_taxassignment_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsigner_response_compound->fki_secretquestion_id
    if(ezsignsigner_response_compound->fki_secretquestion_id) { 
    if(cJSON_AddNumberToObject(item, "fkiSecretquestionID", ezsignsigner_response_compound->fki_secretquestion_id) == NULL) {
    goto fail; //Numeric
    }
     } 


    // ezsignsigner_response_compound->fki_userlogintype_id
    if (!ezsignsigner_response_compound->fki_userlogintype_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiUserlogintypeID", ezsignsigner_response_compound->fki_userlogintype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsigner_response_compound->s_userlogintype_description_x
    if (!ezsignsigner_response_compound->s_userlogintype_description_x) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sUserlogintypeDescriptionX", ezsignsigner_response_compound->s_userlogintype_description_x) == NULL) {
    goto fail; //String
    }


    // ezsignsigner_response_compound->obj_contact
    if (!ezsignsigner_response_compound->obj_contact) {
        goto fail;
    }
    
    cJSON *obj_contact_local_JSON = ezsignsigner_response_compound_contact_convertToJSON(ezsignsigner_response_compound->obj_contact);
    if(obj_contact_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objContact", obj_contact_local_JSON);
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

ezsignsigner_response_compound_t *ezsignsigner_response_compound_parseFromJSON(cJSON *ezsignsigner_response_compoundJSON){

    ezsignsigner_response_compound_t *ezsignsigner_response_compound_local_var = NULL;

    // define the local variable for ezsignsigner_response_compound->obj_contact
    ezsignsigner_response_compound_contact_t *obj_contact_local_nonprim = NULL;

    // ezsignsigner_response_compound->pki_ezsignsigner_id
    cJSON *pki_ezsignsigner_id = cJSON_GetObjectItemCaseSensitive(ezsignsigner_response_compoundJSON, "pkiEzsignsignerID");
    if (!pki_ezsignsigner_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignsigner_id))
    {
    goto end; //Numeric
    }

    // ezsignsigner_response_compound->fki_taxassignment_id
    cJSON *fki_taxassignment_id = cJSON_GetObjectItemCaseSensitive(ezsignsigner_response_compoundJSON, "fkiTaxassignmentID");
    if (!fki_taxassignment_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_taxassignment_id))
    {
    goto end; //Numeric
    }

    // ezsignsigner_response_compound->fki_secretquestion_id
    cJSON *fki_secretquestion_id = cJSON_GetObjectItemCaseSensitive(ezsignsigner_response_compoundJSON, "fkiSecretquestionID");
    if (fki_secretquestion_id) { 
    if(!cJSON_IsNumber(fki_secretquestion_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignsigner_response_compound->fki_userlogintype_id
    cJSON *fki_userlogintype_id = cJSON_GetObjectItemCaseSensitive(ezsignsigner_response_compoundJSON, "fkiUserlogintypeID");
    if (!fki_userlogintype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_userlogintype_id))
    {
    goto end; //Numeric
    }

    // ezsignsigner_response_compound->s_userlogintype_description_x
    cJSON *s_userlogintype_description_x = cJSON_GetObjectItemCaseSensitive(ezsignsigner_response_compoundJSON, "sUserlogintypeDescriptionX");
    if (!s_userlogintype_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_userlogintype_description_x))
    {
    goto end; //String
    }

    // ezsignsigner_response_compound->obj_contact
    cJSON *obj_contact = cJSON_GetObjectItemCaseSensitive(ezsignsigner_response_compoundJSON, "objContact");
    if (!obj_contact) {
        goto end;
    }

    
    obj_contact_local_nonprim = ezsignsigner_response_compound_contact_parseFromJSON(obj_contact); //nonprimitive


    ezsignsigner_response_compound_local_var = ezsignsigner_response_compound_create (
        pki_ezsignsigner_id->valuedouble,
        fki_taxassignment_id->valuedouble,
        fki_secretquestion_id ? fki_secretquestion_id->valuedouble : 0,
        fki_userlogintype_id->valuedouble,
        strdup(s_userlogintype_description_x->valuestring),
        obj_contact_local_nonprim
        );

    return ezsignsigner_response_compound_local_var;
end:
    if (obj_contact_local_nonprim) {
        ezsignsigner_response_compound_contact_free(obj_contact_local_nonprim);
        obj_contact_local_nonprim = NULL;
    }
    return NULL;

}
