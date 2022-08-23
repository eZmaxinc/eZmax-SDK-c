#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldertype_request_compound_all_of.h"



ezsignfoldertype_request_compound_all_of_t *ezsignfoldertype_request_compound_all_of_create(
    list_t *a_fki_user_id_signed,
    list_t *a_fki_user_id_summary
    ) {
    ezsignfoldertype_request_compound_all_of_t *ezsignfoldertype_request_compound_all_of_local_var = malloc(sizeof(ezsignfoldertype_request_compound_all_of_t));
    if (!ezsignfoldertype_request_compound_all_of_local_var) {
        return NULL;
    }
    ezsignfoldertype_request_compound_all_of_local_var->a_fki_user_id_signed = a_fki_user_id_signed;
    ezsignfoldertype_request_compound_all_of_local_var->a_fki_user_id_summary = a_fki_user_id_summary;

    return ezsignfoldertype_request_compound_all_of_local_var;
}


void ezsignfoldertype_request_compound_all_of_free(ezsignfoldertype_request_compound_all_of_t *ezsignfoldertype_request_compound_all_of) {
    if(NULL == ezsignfoldertype_request_compound_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldertype_request_compound_all_of->a_fki_user_id_signed) {
        list_ForEach(listEntry, ezsignfoldertype_request_compound_all_of->a_fki_user_id_signed) {
            free(listEntry->data);
        }
        list_freeList(ezsignfoldertype_request_compound_all_of->a_fki_user_id_signed);
        ezsignfoldertype_request_compound_all_of->a_fki_user_id_signed = NULL;
    }
    if (ezsignfoldertype_request_compound_all_of->a_fki_user_id_summary) {
        list_ForEach(listEntry, ezsignfoldertype_request_compound_all_of->a_fki_user_id_summary) {
            free(listEntry->data);
        }
        list_freeList(ezsignfoldertype_request_compound_all_of->a_fki_user_id_summary);
        ezsignfoldertype_request_compound_all_of->a_fki_user_id_summary = NULL;
    }
    free(ezsignfoldertype_request_compound_all_of);
}

cJSON *ezsignfoldertype_request_compound_all_of_convertToJSON(ezsignfoldertype_request_compound_all_of_t *ezsignfoldertype_request_compound_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldertype_request_compound_all_of->a_fki_user_id_signed
    if(ezsignfoldertype_request_compound_all_of->a_fki_user_id_signed) {
    cJSON *a_fki_user_id_signed = cJSON_AddArrayToObject(item, "a_fkiUserIDSigned");
    if(a_fki_user_id_signed == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_fki_user_id_signedListEntry;
    list_ForEach(a_fki_user_id_signedListEntry, ezsignfoldertype_request_compound_all_of->a_fki_user_id_signed) {
    if(cJSON_AddNumberToObject(a_fki_user_id_signed, "", *(double *)a_fki_user_id_signedListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // ezsignfoldertype_request_compound_all_of->a_fki_user_id_summary
    if(ezsignfoldertype_request_compound_all_of->a_fki_user_id_summary) {
    cJSON *a_fki_user_id_summary = cJSON_AddArrayToObject(item, "a_fkiUserIDSummary");
    if(a_fki_user_id_summary == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_fki_user_id_summaryListEntry;
    list_ForEach(a_fki_user_id_summaryListEntry, ezsignfoldertype_request_compound_all_of->a_fki_user_id_summary) {
    if(cJSON_AddNumberToObject(a_fki_user_id_summary, "", *(double *)a_fki_user_id_summaryListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfoldertype_request_compound_all_of_t *ezsignfoldertype_request_compound_all_of_parseFromJSON(cJSON *ezsignfoldertype_request_compound_all_ofJSON){

    ezsignfoldertype_request_compound_all_of_t *ezsignfoldertype_request_compound_all_of_local_var = NULL;

    // define the local list for ezsignfoldertype_request_compound_all_of->a_fki_user_id_signed
    list_t *a_fki_user_id_signedList = NULL;

    // define the local list for ezsignfoldertype_request_compound_all_of->a_fki_user_id_summary
    list_t *a_fki_user_id_summaryList = NULL;

    // ezsignfoldertype_request_compound_all_of->a_fki_user_id_signed
    cJSON *a_fki_user_id_signed = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_all_ofJSON, "a_fkiUserIDSigned");
    if (a_fki_user_id_signed) { 
    cJSON *a_fki_user_id_signed_local = NULL;
    if(!cJSON_IsArray(a_fki_user_id_signed)) {
        goto end;//primitive container
    }
    a_fki_user_id_signedList = list_createList();

    cJSON_ArrayForEach(a_fki_user_id_signed_local, a_fki_user_id_signed)
    {
        if(!cJSON_IsNumber(a_fki_user_id_signed_local))
        {
            goto end;
        }
        double *a_fki_user_id_signed_local_value = (double *)calloc(1, sizeof(double));
        if(!a_fki_user_id_signed_local_value)
        {
            goto end;
        }
        *a_fki_user_id_signed_local_value = a_fki_user_id_signed_local->valuedouble;
        list_addElement(a_fki_user_id_signedList , a_fki_user_id_signed_local_value);
    }
    }

    // ezsignfoldertype_request_compound_all_of->a_fki_user_id_summary
    cJSON *a_fki_user_id_summary = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_all_ofJSON, "a_fkiUserIDSummary");
    if (a_fki_user_id_summary) { 
    cJSON *a_fki_user_id_summary_local = NULL;
    if(!cJSON_IsArray(a_fki_user_id_summary)) {
        goto end;//primitive container
    }
    a_fki_user_id_summaryList = list_createList();

    cJSON_ArrayForEach(a_fki_user_id_summary_local, a_fki_user_id_summary)
    {
        if(!cJSON_IsNumber(a_fki_user_id_summary_local))
        {
            goto end;
        }
        double *a_fki_user_id_summary_local_value = (double *)calloc(1, sizeof(double));
        if(!a_fki_user_id_summary_local_value)
        {
            goto end;
        }
        *a_fki_user_id_summary_local_value = a_fki_user_id_summary_local->valuedouble;
        list_addElement(a_fki_user_id_summaryList , a_fki_user_id_summary_local_value);
    }
    }


    ezsignfoldertype_request_compound_all_of_local_var = ezsignfoldertype_request_compound_all_of_create (
        a_fki_user_id_signed ? a_fki_user_id_signedList : NULL,
        a_fki_user_id_summary ? a_fki_user_id_summaryList : NULL
        );

    return ezsignfoldertype_request_compound_all_of_local_var;
end:
    if (a_fki_user_id_signedList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_fki_user_id_signedList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_fki_user_id_signedList);
        a_fki_user_id_signedList = NULL;
    }
    if (a_fki_user_id_summaryList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_fki_user_id_summaryList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_fki_user_id_summaryList);
        a_fki_user_id_summaryList = NULL;
    }
    return NULL;

}
