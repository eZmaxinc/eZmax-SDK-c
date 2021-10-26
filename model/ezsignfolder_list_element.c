#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_list_element.h"


char* e_ezsignfoldertype_privacylevelezsignfolder_list_element_ToString(ezmax_api_definition_ezsignfolder_list_element__e e_ezsignfoldertype_privacylevel) {
    char* e_ezsignfoldertype_privacylevelArray[] =  { "NULL", "User", "Usergroup" };
	return e_ezsignfoldertype_privacylevelArray[e_ezsignfoldertype_privacylevel];
}

ezmax_api_definition_ezsignfolder_list_element__e e_ezsignfoldertype_privacylevelezsignfolder_list_element_FromString(char* e_ezsignfoldertype_privacylevel){
    int stringToReturn = 0;
    char *e_ezsignfoldertype_privacylevelArray[] =  { "NULL", "User", "Usergroup" };
    size_t sizeofArray = sizeof(e_ezsignfoldertype_privacylevelArray) / sizeof(e_ezsignfoldertype_privacylevelArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignfoldertype_privacylevel, e_ezsignfoldertype_privacylevelArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_ezsignfolder_stepezsignfolder_list_element_ToString(ezmax_api_definition_ezsignfolder_list_element__e e_ezsignfolder_step) {
    char* e_ezsignfolder_stepArray[] =  { "NULL", "Unsent", "Sent", "PartiallySigned", "Expired", "Completed", "Archived" };
	return e_ezsignfolder_stepArray[e_ezsignfolder_step];
}

ezmax_api_definition_ezsignfolder_list_element__e e_ezsignfolder_stepezsignfolder_list_element_FromString(char* e_ezsignfolder_step){
    int stringToReturn = 0;
    char *e_ezsignfolder_stepArray[] =  { "NULL", "Unsent", "Sent", "PartiallySigned", "Expired", "Completed", "Archived" };
    size_t sizeofArray = sizeof(e_ezsignfolder_stepArray) / sizeof(e_ezsignfolder_stepArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignfolder_step, e_ezsignfolder_stepArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsignfolder_list_element_t *ezsignfolder_list_element_create(
    int pki_ezsignfolder_id,
    int fki_ezsignfoldertype_id,
    char *s_ezsignfoldertype_name_x,
    char *s_ezsignfolder_description,
    char *dt_created_date,
    one_ofstringobject_t *dt_ezsignfolder_sentdate,
    one_ofstringobject_t *dt_due_date,
    int i_total_document,
    int i_total_document_edm,
    int i_total_signature,
    int i_total_signature_signed
    ) {
    ezsignfolder_list_element_t *ezsignfolder_list_element_local_var = malloc(sizeof(ezsignfolder_list_element_t));
    if (!ezsignfolder_list_element_local_var) {
        return NULL;
    }
    ezsignfolder_list_element_local_var->pki_ezsignfolder_id = pki_ezsignfolder_id;
    ezsignfolder_list_element_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezsignfolder_list_element_local_var->e_ezsignfoldertype_privacylevel = e_ezsignfoldertype_privacylevel;
    ezsignfolder_list_element_local_var->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    ezsignfolder_list_element_local_var->s_ezsignfolder_description = s_ezsignfolder_description;
    ezsignfolder_list_element_local_var->e_ezsignfolder_step = e_ezsignfolder_step;
    ezsignfolder_list_element_local_var->dt_created_date = dt_created_date;
    ezsignfolder_list_element_local_var->dt_ezsignfolder_sentdate = dt_ezsignfolder_sentdate;
    ezsignfolder_list_element_local_var->dt_due_date = dt_due_date;
    ezsignfolder_list_element_local_var->i_total_document = i_total_document;
    ezsignfolder_list_element_local_var->i_total_document_edm = i_total_document_edm;
    ezsignfolder_list_element_local_var->i_total_signature = i_total_signature;
    ezsignfolder_list_element_local_var->i_total_signature_signed = i_total_signature_signed;

    return ezsignfolder_list_element_local_var;
}


void ezsignfolder_list_element_free(ezsignfolder_list_element_t *ezsignfolder_list_element) {
    if(NULL == ezsignfolder_list_element){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_list_element->s_ezsignfoldertype_name_x) {
        free(ezsignfolder_list_element->s_ezsignfoldertype_name_x);
        ezsignfolder_list_element->s_ezsignfoldertype_name_x = NULL;
    }
    if (ezsignfolder_list_element->s_ezsignfolder_description) {
        free(ezsignfolder_list_element->s_ezsignfolder_description);
        ezsignfolder_list_element->s_ezsignfolder_description = NULL;
    }
    if (ezsignfolder_list_element->dt_created_date) {
        free(ezsignfolder_list_element->dt_created_date);
        ezsignfolder_list_element->dt_created_date = NULL;
    }
    if (ezsignfolder_list_element->dt_ezsignfolder_sentdate) {
        one_ofstringobject_free(ezsignfolder_list_element->dt_ezsignfolder_sentdate);
        ezsignfolder_list_element->dt_ezsignfolder_sentdate = NULL;
    }
    if (ezsignfolder_list_element->dt_due_date) {
        one_ofstringobject_free(ezsignfolder_list_element->dt_due_date);
        ezsignfolder_list_element->dt_due_date = NULL;
    }
    free(ezsignfolder_list_element);
}

cJSON *ezsignfolder_list_element_convertToJSON(ezsignfolder_list_element_t *ezsignfolder_list_element) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_list_element->pki_ezsignfolder_id
    if (!ezsignfolder_list_element->pki_ezsignfolder_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "pkiEzsignfolderID", ezsignfolder_list_element->pki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_list_element->fki_ezsignfoldertype_id
    if (!ezsignfolder_list_element->fki_ezsignfoldertype_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", ezsignfolder_list_element->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_list_element->e_ezsignfoldertype_privacylevel
    


    // ezsignfolder_list_element->s_ezsignfoldertype_name_x
    if (!ezsignfolder_list_element->s_ezsignfoldertype_name_x) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sEzsignfoldertypeNameX", ezsignfolder_list_element->s_ezsignfoldertype_name_x) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_list_element->s_ezsignfolder_description
    if (!ezsignfolder_list_element->s_ezsignfolder_description) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sEzsignfolderDescription", ezsignfolder_list_element->s_ezsignfolder_description) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_list_element->e_ezsignfolder_step
    


    // ezsignfolder_list_element->dt_created_date
    if (!ezsignfolder_list_element->dt_created_date) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "dtCreatedDate", ezsignfolder_list_element->dt_created_date) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_list_element->dt_ezsignfolder_sentdate
    if (!ezsignfolder_list_element->dt_ezsignfolder_sentdate) {
        goto fail;
    }
    
    cJSON *dt_ezsignfolder_sentdate_local_JSON = one_ofstringobject_convertToJSON(ezsignfolder_list_element->dt_ezsignfolder_sentdate);
    if(dt_ezsignfolder_sentdate_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "dtEzsignfolderSentdate", dt_ezsignfolder_sentdate_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsignfolder_list_element->dt_due_date
    if (!ezsignfolder_list_element->dt_due_date) {
        goto fail;
    }
    
    cJSON *dt_due_date_local_JSON = one_ofstringobject_convertToJSON(ezsignfolder_list_element->dt_due_date);
    if(dt_due_date_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "dtDueDate", dt_due_date_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsignfolder_list_element->i_total_document
    if (!ezsignfolder_list_element->i_total_document) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iTotalDocument", ezsignfolder_list_element->i_total_document) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_list_element->i_total_document_edm
    if (!ezsignfolder_list_element->i_total_document_edm) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iTotalDocumentEdm", ezsignfolder_list_element->i_total_document_edm) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_list_element->i_total_signature
    if (!ezsignfolder_list_element->i_total_signature) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iTotalSignature", ezsignfolder_list_element->i_total_signature) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_list_element->i_total_signature_signed
    if (!ezsignfolder_list_element->i_total_signature_signed) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iTotalSignatureSigned", ezsignfolder_list_element->i_total_signature_signed) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfolder_list_element_t *ezsignfolder_list_element_parseFromJSON(cJSON *ezsignfolder_list_elementJSON){

    ezsignfolder_list_element_t *ezsignfolder_list_element_local_var = NULL;

    // ezsignfolder_list_element->pki_ezsignfolder_id
    cJSON *pki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "pkiEzsignfolderID");
    if (!pki_ezsignfolder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignfolder_id))
    {
    goto end; //Numeric
    }

    // ezsignfolder_list_element->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "fkiEzsignfoldertypeID");
    if (!fki_ezsignfoldertype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }

    // ezsignfolder_list_element->e_ezsignfoldertype_privacylevel
    cJSON *e_ezsignfoldertype_privacylevel = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "eEzsignfoldertypePrivacylevel");
    if (!e_ezsignfoldertype_privacylevel) {
        goto end;
    }


    // ezsignfolder_list_element->s_ezsignfoldertype_name_x
    cJSON *s_ezsignfoldertype_name_x = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "sEzsignfoldertypeNameX");
    if (!s_ezsignfoldertype_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfoldertype_name_x))
    {
    goto end; //String
    }

    // ezsignfolder_list_element->s_ezsignfolder_description
    cJSON *s_ezsignfolder_description = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "sEzsignfolderDescription");
    if (!s_ezsignfolder_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfolder_description))
    {
    goto end; //String
    }

    // ezsignfolder_list_element->e_ezsignfolder_step
    cJSON *e_ezsignfolder_step = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "eEzsignfolderStep");
    if (!e_ezsignfolder_step) {
        goto end;
    }


    // ezsignfolder_list_element->dt_created_date
    cJSON *dt_created_date = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "dtCreatedDate");
    if (!dt_created_date) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_created_date))
    {
    goto end; //String
    }

    // ezsignfolder_list_element->dt_ezsignfolder_sentdate
    cJSON *dt_ezsignfolder_sentdate = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "dtEzsignfolderSentdate");
    if (!dt_ezsignfolder_sentdate) {
        goto end;
    }

    one_ofstringobject_t *dt_ezsignfolder_sentdate_local_nonprim = NULL;
    
    dt_ezsignfolder_sentdate_local_nonprim = one_ofstringobject_parseFromJSON(dt_ezsignfolder_sentdate); //nonprimitive

    // ezsignfolder_list_element->dt_due_date
    cJSON *dt_due_date = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "dtDueDate");
    if (!dt_due_date) {
        goto end;
    }

    one_ofstringobject_t *dt_due_date_local_nonprim = NULL;
    
    dt_due_date_local_nonprim = one_ofstringobject_parseFromJSON(dt_due_date); //nonprimitive

    // ezsignfolder_list_element->i_total_document
    cJSON *i_total_document = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "iTotalDocument");
    if (!i_total_document) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_total_document))
    {
    goto end; //Numeric
    }

    // ezsignfolder_list_element->i_total_document_edm
    cJSON *i_total_document_edm = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "iTotalDocumentEdm");
    if (!i_total_document_edm) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_total_document_edm))
    {
    goto end; //Numeric
    }

    // ezsignfolder_list_element->i_total_signature
    cJSON *i_total_signature = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "iTotalSignature");
    if (!i_total_signature) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_total_signature))
    {
    goto end; //Numeric
    }

    // ezsignfolder_list_element->i_total_signature_signed
    cJSON *i_total_signature_signed = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "iTotalSignatureSigned");
    if (!i_total_signature_signed) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_total_signature_signed))
    {
    goto end; //Numeric
    }


    ezsignfolder_list_element_local_var = ezsignfolder_list_element_create (
        pki_ezsignfolder_id->valuedouble,
        fki_ezsignfoldertype_id->valuedouble,
        strdup(s_ezsignfoldertype_name_x->valuestring),
        strdup(s_ezsignfolder_description->valuestring),
        strdup(dt_created_date->valuestring),
        dt_ezsignfolder_sentdate_local_nonprim,
        dt_due_date_local_nonprim,
        i_total_document->valuedouble,
        i_total_document_edm->valuedouble,
        i_total_signature->valuedouble,
        i_total_signature_signed->valuedouble
        );

    return ezsignfolder_list_element_local_var;
end:
    if (dt_ezsignfolder_sentdate_local_nonprim) {
        one_ofstringobject_free(dt_ezsignfolder_sentdate_local_nonprim);
        dt_ezsignfolder_sentdate_local_nonprim = NULL;
    }
    if (dt_due_date_local_nonprim) {
        one_ofstringobject_free(dt_due_date_local_nonprim);
        dt_due_date_local_nonprim = NULL;
    }
    return NULL;

}
