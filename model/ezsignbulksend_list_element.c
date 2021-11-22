#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksend_list_element.h"


char* e_ezsignfoldertype_privacylevelezsignbulksend_list_element_ToString(ezmax_api_definition_ezsignbulksend_list_element__e e_ezsignfoldertype_privacylevel) {
    char* e_ezsignfoldertype_privacylevelArray[] =  { "NULL", "User", "Usergroup" };
	return e_ezsignfoldertype_privacylevelArray[e_ezsignfoldertype_privacylevel];
}

ezmax_api_definition_ezsignbulksend_list_element__e e_ezsignfoldertype_privacylevelezsignbulksend_list_element_FromString(char* e_ezsignfoldertype_privacylevel){
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

ezsignbulksend_list_element_t *ezsignbulksend_list_element_create(
    int pki_ezsignbulksend_id,
    int fki_ezsignfoldertype_id,
    char *s_ezsignbulksend_description,
    char *s_ezsignfoldertype_name_x,
    int b_ezsignbulksend_isactive,
    int i_ezsignbulksendtransmission,
    int i_ezsignfolder,
    int i_ezsigndocument,
    int i_ezsignsignature,
    int i_ezsignsignature_signed
    ) {
    ezsignbulksend_list_element_t *ezsignbulksend_list_element_local_var = malloc(sizeof(ezsignbulksend_list_element_t));
    if (!ezsignbulksend_list_element_local_var) {
        return NULL;
    }
    ezsignbulksend_list_element_local_var->pki_ezsignbulksend_id = pki_ezsignbulksend_id;
    ezsignbulksend_list_element_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezsignbulksend_list_element_local_var->s_ezsignbulksend_description = s_ezsignbulksend_description;
    ezsignbulksend_list_element_local_var->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    ezsignbulksend_list_element_local_var->e_ezsignfoldertype_privacylevel = e_ezsignfoldertype_privacylevel;
    ezsignbulksend_list_element_local_var->b_ezsignbulksend_isactive = b_ezsignbulksend_isactive;
    ezsignbulksend_list_element_local_var->i_ezsignbulksendtransmission = i_ezsignbulksendtransmission;
    ezsignbulksend_list_element_local_var->i_ezsignfolder = i_ezsignfolder;
    ezsignbulksend_list_element_local_var->i_ezsigndocument = i_ezsigndocument;
    ezsignbulksend_list_element_local_var->i_ezsignsignature = i_ezsignsignature;
    ezsignbulksend_list_element_local_var->i_ezsignsignature_signed = i_ezsignsignature_signed;

    return ezsignbulksend_list_element_local_var;
}


void ezsignbulksend_list_element_free(ezsignbulksend_list_element_t *ezsignbulksend_list_element) {
    if(NULL == ezsignbulksend_list_element){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksend_list_element->s_ezsignbulksend_description) {
        free(ezsignbulksend_list_element->s_ezsignbulksend_description);
        ezsignbulksend_list_element->s_ezsignbulksend_description = NULL;
    }
    if (ezsignbulksend_list_element->s_ezsignfoldertype_name_x) {
        free(ezsignbulksend_list_element->s_ezsignfoldertype_name_x);
        ezsignbulksend_list_element->s_ezsignfoldertype_name_x = NULL;
    }
    free(ezsignbulksend_list_element);
}

cJSON *ezsignbulksend_list_element_convertToJSON(ezsignbulksend_list_element_t *ezsignbulksend_list_element) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksend_list_element->pki_ezsignbulksend_id
    if (!ezsignbulksend_list_element->pki_ezsignbulksend_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "pkiEzsignbulksendID", ezsignbulksend_list_element->pki_ezsignbulksend_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksend_list_element->fki_ezsignfoldertype_id
    if (!ezsignbulksend_list_element->fki_ezsignfoldertype_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", ezsignbulksend_list_element->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksend_list_element->s_ezsignbulksend_description
    if (!ezsignbulksend_list_element->s_ezsignbulksend_description) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sEzsignbulksendDescription", ezsignbulksend_list_element->s_ezsignbulksend_description) == NULL) {
    goto fail; //String
    }


    // ezsignbulksend_list_element->s_ezsignfoldertype_name_x
    if (!ezsignbulksend_list_element->s_ezsignfoldertype_name_x) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sEzsignfoldertypeNameX", ezsignbulksend_list_element->s_ezsignfoldertype_name_x) == NULL) {
    goto fail; //String
    }


    // ezsignbulksend_list_element->e_ezsignfoldertype_privacylevel
    


    // ezsignbulksend_list_element->b_ezsignbulksend_isactive
    if (!ezsignbulksend_list_element->b_ezsignbulksend_isactive) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "bEzsignbulksendIsactive", ezsignbulksend_list_element->b_ezsignbulksend_isactive) == NULL) {
    goto fail; //Bool
    }


    // ezsignbulksend_list_element->i_ezsignbulksendtransmission
    if (!ezsignbulksend_list_element->i_ezsignbulksendtransmission) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iEzsignbulksendtransmission", ezsignbulksend_list_element->i_ezsignbulksendtransmission) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksend_list_element->i_ezsignfolder
    if (!ezsignbulksend_list_element->i_ezsignfolder) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iEzsignfolder", ezsignbulksend_list_element->i_ezsignfolder) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksend_list_element->i_ezsigndocument
    if (!ezsignbulksend_list_element->i_ezsigndocument) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iEzsigndocument", ezsignbulksend_list_element->i_ezsigndocument) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksend_list_element->i_ezsignsignature
    if (!ezsignbulksend_list_element->i_ezsignsignature) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iEzsignsignature", ezsignbulksend_list_element->i_ezsignsignature) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksend_list_element->i_ezsignsignature_signed
    if (!ezsignbulksend_list_element->i_ezsignsignature_signed) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureSigned", ezsignbulksend_list_element->i_ezsignsignature_signed) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignbulksend_list_element_t *ezsignbulksend_list_element_parseFromJSON(cJSON *ezsignbulksend_list_elementJSON){

    ezsignbulksend_list_element_t *ezsignbulksend_list_element_local_var = NULL;

    // ezsignbulksend_list_element->pki_ezsignbulksend_id
    cJSON *pki_ezsignbulksend_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_list_elementJSON, "pkiEzsignbulksendID");
    if (!pki_ezsignbulksend_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignbulksend_id))
    {
    goto end; //Numeric
    }

    // ezsignbulksend_list_element->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_list_elementJSON, "fkiEzsignfoldertypeID");
    if (!fki_ezsignfoldertype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }

    // ezsignbulksend_list_element->s_ezsignbulksend_description
    cJSON *s_ezsignbulksend_description = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_list_elementJSON, "sEzsignbulksendDescription");
    if (!s_ezsignbulksend_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignbulksend_description))
    {
    goto end; //String
    }

    // ezsignbulksend_list_element->s_ezsignfoldertype_name_x
    cJSON *s_ezsignfoldertype_name_x = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_list_elementJSON, "sEzsignfoldertypeNameX");
    if (!s_ezsignfoldertype_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfoldertype_name_x))
    {
    goto end; //String
    }

    // ezsignbulksend_list_element->e_ezsignfoldertype_privacylevel
    cJSON *e_ezsignfoldertype_privacylevel = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_list_elementJSON, "eEzsignfoldertypePrivacylevel");
    if (!e_ezsignfoldertype_privacylevel) {
        goto end;
    }


    // ezsignbulksend_list_element->b_ezsignbulksend_isactive
    cJSON *b_ezsignbulksend_isactive = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_list_elementJSON, "bEzsignbulksendIsactive");
    if (!b_ezsignbulksend_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignbulksend_isactive))
    {
    goto end; //Bool
    }

    // ezsignbulksend_list_element->i_ezsignbulksendtransmission
    cJSON *i_ezsignbulksendtransmission = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_list_elementJSON, "iEzsignbulksendtransmission");
    if (!i_ezsignbulksendtransmission) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignbulksendtransmission))
    {
    goto end; //Numeric
    }

    // ezsignbulksend_list_element->i_ezsignfolder
    cJSON *i_ezsignfolder = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_list_elementJSON, "iEzsignfolder");
    if (!i_ezsignfolder) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignfolder))
    {
    goto end; //Numeric
    }

    // ezsignbulksend_list_element->i_ezsigndocument
    cJSON *i_ezsigndocument = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_list_elementJSON, "iEzsigndocument");
    if (!i_ezsigndocument) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndocument))
    {
    goto end; //Numeric
    }

    // ezsignbulksend_list_element->i_ezsignsignature
    cJSON *i_ezsignsignature = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_list_elementJSON, "iEzsignsignature");
    if (!i_ezsignsignature) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignsignature))
    {
    goto end; //Numeric
    }

    // ezsignbulksend_list_element->i_ezsignsignature_signed
    cJSON *i_ezsignsignature_signed = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_list_elementJSON, "iEzsignsignatureSigned");
    if (!i_ezsignsignature_signed) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignsignature_signed))
    {
    goto end; //Numeric
    }


    ezsignbulksend_list_element_local_var = ezsignbulksend_list_element_create (
        pki_ezsignbulksend_id->valuedouble,
        fki_ezsignfoldertype_id->valuedouble,
        strdup(s_ezsignbulksend_description->valuestring),
        strdup(s_ezsignfoldertype_name_x->valuestring),
        b_ezsignbulksend_isactive->valueint,
        i_ezsignbulksendtransmission->valuedouble,
        i_ezsignfolder->valuedouble,
        i_ezsigndocument->valuedouble,
        i_ezsignsignature->valuedouble,
        i_ezsignsignature_signed->valuedouble
        );

    return ezsignbulksend_list_element_local_var;
end:
    return NULL;

}
