#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxinvoicingsummaryexternal_response_compound.h"



ezmaxinvoicingsummaryexternal_response_compound_t *ezmaxinvoicingsummaryexternal_response_compound_create(
    int pki_ezmaxinvoicingsummaryexternal_id,
    int fki_ezmaxinvoicing_id,
    int fki_billingentityexternal_id,
    char *s_billingentityexternal_description,
    char *s_ezmaxinvoicingsummaryexternal_description,
    list_t *a_obj_ezmaxinvoicingsummaryexternaldetail
    ) {
    ezmaxinvoicingsummaryexternal_response_compound_t *ezmaxinvoicingsummaryexternal_response_compound_local_var = malloc(sizeof(ezmaxinvoicingsummaryexternal_response_compound_t));
    if (!ezmaxinvoicingsummaryexternal_response_compound_local_var) {
        return NULL;
    }
    ezmaxinvoicingsummaryexternal_response_compound_local_var->pki_ezmaxinvoicingsummaryexternal_id = pki_ezmaxinvoicingsummaryexternal_id;
    ezmaxinvoicingsummaryexternal_response_compound_local_var->fki_ezmaxinvoicing_id = fki_ezmaxinvoicing_id;
    ezmaxinvoicingsummaryexternal_response_compound_local_var->fki_billingentityexternal_id = fki_billingentityexternal_id;
    ezmaxinvoicingsummaryexternal_response_compound_local_var->s_billingentityexternal_description = s_billingentityexternal_description;
    ezmaxinvoicingsummaryexternal_response_compound_local_var->s_ezmaxinvoicingsummaryexternal_description = s_ezmaxinvoicingsummaryexternal_description;
    ezmaxinvoicingsummaryexternal_response_compound_local_var->a_obj_ezmaxinvoicingsummaryexternaldetail = a_obj_ezmaxinvoicingsummaryexternaldetail;

    return ezmaxinvoicingsummaryexternal_response_compound_local_var;
}


void ezmaxinvoicingsummaryexternal_response_compound_free(ezmaxinvoicingsummaryexternal_response_compound_t *ezmaxinvoicingsummaryexternal_response_compound) {
    if(NULL == ezmaxinvoicingsummaryexternal_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxinvoicingsummaryexternal_response_compound->s_billingentityexternal_description) {
        free(ezmaxinvoicingsummaryexternal_response_compound->s_billingentityexternal_description);
        ezmaxinvoicingsummaryexternal_response_compound->s_billingentityexternal_description = NULL;
    }
    if (ezmaxinvoicingsummaryexternal_response_compound->s_ezmaxinvoicingsummaryexternal_description) {
        free(ezmaxinvoicingsummaryexternal_response_compound->s_ezmaxinvoicingsummaryexternal_description);
        ezmaxinvoicingsummaryexternal_response_compound->s_ezmaxinvoicingsummaryexternal_description = NULL;
    }
    if (ezmaxinvoicingsummaryexternal_response_compound->a_obj_ezmaxinvoicingsummaryexternaldetail) {
        list_ForEach(listEntry, ezmaxinvoicingsummaryexternal_response_compound->a_obj_ezmaxinvoicingsummaryexternaldetail) {
            ezmaxinvoicingsummaryexternaldetail_response_compound_free(listEntry->data);
        }
        list_freeList(ezmaxinvoicingsummaryexternal_response_compound->a_obj_ezmaxinvoicingsummaryexternaldetail);
        ezmaxinvoicingsummaryexternal_response_compound->a_obj_ezmaxinvoicingsummaryexternaldetail = NULL;
    }
    free(ezmaxinvoicingsummaryexternal_response_compound);
}

cJSON *ezmaxinvoicingsummaryexternal_response_compound_convertToJSON(ezmaxinvoicingsummaryexternal_response_compound_t *ezmaxinvoicingsummaryexternal_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxinvoicingsummaryexternal_response_compound->pki_ezmaxinvoicingsummaryexternal_id
    if(ezmaxinvoicingsummaryexternal_response_compound->pki_ezmaxinvoicingsummaryexternal_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzmaxinvoicingsummaryexternalID", ezmaxinvoicingsummaryexternal_response_compound->pki_ezmaxinvoicingsummaryexternal_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxinvoicingsummaryexternal_response_compound->fki_ezmaxinvoicing_id
    if(ezmaxinvoicingsummaryexternal_response_compound->fki_ezmaxinvoicing_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzmaxinvoicingID", ezmaxinvoicingsummaryexternal_response_compound->fki_ezmaxinvoicing_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxinvoicingsummaryexternal_response_compound->fki_billingentityexternal_id
    if (!ezmaxinvoicingsummaryexternal_response_compound->fki_billingentityexternal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiBillingentityexternalID", ezmaxinvoicingsummaryexternal_response_compound->fki_billingentityexternal_id) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicingsummaryexternal_response_compound->s_billingentityexternal_description
    if (!ezmaxinvoicingsummaryexternal_response_compound->s_billingentityexternal_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBillingentityexternalDescription", ezmaxinvoicingsummaryexternal_response_compound->s_billingentityexternal_description) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryexternal_response_compound->s_ezmaxinvoicingsummaryexternal_description
    if (!ezmaxinvoicingsummaryexternal_response_compound->s_ezmaxinvoicingsummaryexternal_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzmaxinvoicingsummaryexternalDescription", ezmaxinvoicingsummaryexternal_response_compound->s_ezmaxinvoicingsummaryexternal_description) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryexternal_response_compound->a_obj_ezmaxinvoicingsummaryexternaldetail
    if (!ezmaxinvoicingsummaryexternal_response_compound->a_obj_ezmaxinvoicingsummaryexternaldetail) {
        goto fail;
    }
    cJSON *a_obj_ezmaxinvoicingsummaryexternaldetail = cJSON_AddArrayToObject(item, "a_objEzmaxinvoicingsummaryexternaldetail");
    if(a_obj_ezmaxinvoicingsummaryexternaldetail == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezmaxinvoicingsummaryexternaldetailListEntry;
    if (ezmaxinvoicingsummaryexternal_response_compound->a_obj_ezmaxinvoicingsummaryexternaldetail) {
    list_ForEach(a_obj_ezmaxinvoicingsummaryexternaldetailListEntry, ezmaxinvoicingsummaryexternal_response_compound->a_obj_ezmaxinvoicingsummaryexternaldetail) {
    cJSON *itemLocal = ezmaxinvoicingsummaryexternaldetail_response_compound_convertToJSON(a_obj_ezmaxinvoicingsummaryexternaldetailListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezmaxinvoicingsummaryexternaldetail, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezmaxinvoicingsummaryexternal_response_compound_t *ezmaxinvoicingsummaryexternal_response_compound_parseFromJSON(cJSON *ezmaxinvoicingsummaryexternal_response_compoundJSON){

    ezmaxinvoicingsummaryexternal_response_compound_t *ezmaxinvoicingsummaryexternal_response_compound_local_var = NULL;

    // define the local list for ezmaxinvoicingsummaryexternal_response_compound->a_obj_ezmaxinvoicingsummaryexternaldetail
    list_t *a_obj_ezmaxinvoicingsummaryexternaldetailList = NULL;

    // ezmaxinvoicingsummaryexternal_response_compound->pki_ezmaxinvoicingsummaryexternal_id
    cJSON *pki_ezmaxinvoicingsummaryexternal_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryexternal_response_compoundJSON, "pkiEzmaxinvoicingsummaryexternalID");
    if (pki_ezmaxinvoicingsummaryexternal_id) { 
    if(!cJSON_IsNumber(pki_ezmaxinvoicingsummaryexternal_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxinvoicingsummaryexternal_response_compound->fki_ezmaxinvoicing_id
    cJSON *fki_ezmaxinvoicing_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryexternal_response_compoundJSON, "fkiEzmaxinvoicingID");
    if (fki_ezmaxinvoicing_id) { 
    if(!cJSON_IsNumber(fki_ezmaxinvoicing_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxinvoicingsummaryexternal_response_compound->fki_billingentityexternal_id
    cJSON *fki_billingentityexternal_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryexternal_response_compoundJSON, "fkiBillingentityexternalID");
    if (!fki_billingentityexternal_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_billingentityexternal_id))
    {
    goto end; //Numeric
    }

    // ezmaxinvoicingsummaryexternal_response_compound->s_billingentityexternal_description
    cJSON *s_billingentityexternal_description = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryexternal_response_compoundJSON, "sBillingentityexternalDescription");
    if (!s_billingentityexternal_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_billingentityexternal_description))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryexternal_response_compound->s_ezmaxinvoicingsummaryexternal_description
    cJSON *s_ezmaxinvoicingsummaryexternal_description = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryexternal_response_compoundJSON, "sEzmaxinvoicingsummaryexternalDescription");
    if (!s_ezmaxinvoicingsummaryexternal_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezmaxinvoicingsummaryexternal_description))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryexternal_response_compound->a_obj_ezmaxinvoicingsummaryexternaldetail
    cJSON *a_obj_ezmaxinvoicingsummaryexternaldetail = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryexternal_response_compoundJSON, "a_objEzmaxinvoicingsummaryexternaldetail");
    if (!a_obj_ezmaxinvoicingsummaryexternaldetail) {
        goto end;
    }

    
    cJSON *a_obj_ezmaxinvoicingsummaryexternaldetail_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezmaxinvoicingsummaryexternaldetail)){
        goto end; //nonprimitive container
    }

    a_obj_ezmaxinvoicingsummaryexternaldetailList = list_createList();

    cJSON_ArrayForEach(a_obj_ezmaxinvoicingsummaryexternaldetail_local_nonprimitive,a_obj_ezmaxinvoicingsummaryexternaldetail )
    {
        if(!cJSON_IsObject(a_obj_ezmaxinvoicingsummaryexternaldetail_local_nonprimitive)){
            goto end;
        }
        ezmaxinvoicingsummaryexternaldetail_response_compound_t *a_obj_ezmaxinvoicingsummaryexternaldetailItem = ezmaxinvoicingsummaryexternaldetail_response_compound_parseFromJSON(a_obj_ezmaxinvoicingsummaryexternaldetail_local_nonprimitive);

        list_addElement(a_obj_ezmaxinvoicingsummaryexternaldetailList, a_obj_ezmaxinvoicingsummaryexternaldetailItem);
    }


    ezmaxinvoicingsummaryexternal_response_compound_local_var = ezmaxinvoicingsummaryexternal_response_compound_create (
        pki_ezmaxinvoicingsummaryexternal_id ? pki_ezmaxinvoicingsummaryexternal_id->valuedouble : 0,
        fki_ezmaxinvoicing_id ? fki_ezmaxinvoicing_id->valuedouble : 0,
        fki_billingentityexternal_id->valuedouble,
        strdup(s_billingentityexternal_description->valuestring),
        strdup(s_ezmaxinvoicingsummaryexternal_description->valuestring),
        a_obj_ezmaxinvoicingsummaryexternaldetailList
        );

    return ezmaxinvoicingsummaryexternal_response_compound_local_var;
end:
    if (a_obj_ezmaxinvoicingsummaryexternaldetailList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezmaxinvoicingsummaryexternaldetailList) {
            ezmaxinvoicingsummaryexternaldetail_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezmaxinvoicingsummaryexternaldetailList);
        a_obj_ezmaxinvoicingsummaryexternaldetailList = NULL;
    }
    return NULL;

}
