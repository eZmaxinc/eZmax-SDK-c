#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackage_list_element.h"


char* e_ezsigntemplatepackage_typeezsigntemplatepackage_list_element_ToString(ezmax_api_definition_ezsigntemplatepackage_list_element__e e_ezsigntemplatepackage_type) {
    char* e_ezsigntemplatepackage_typeArray[] =  { "NULL", "Company", "Department", "Team", "User", "Usergroup" };
	return e_ezsigntemplatepackage_typeArray[e_ezsigntemplatepackage_type];
}

ezmax_api_definition_ezsigntemplatepackage_list_element__e e_ezsigntemplatepackage_typeezsigntemplatepackage_list_element_FromString(char* e_ezsigntemplatepackage_type){
    int stringToReturn = 0;
    char *e_ezsigntemplatepackage_typeArray[] =  { "NULL", "Company", "Department", "Team", "User", "Usergroup" };
    size_t sizeofArray = sizeof(e_ezsigntemplatepackage_typeArray) / sizeof(e_ezsigntemplatepackage_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigntemplatepackage_type, e_ezsigntemplatepackage_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsigntemplatepackage_list_element_t *ezsigntemplatepackage_list_element_create(
    int pki_ezsigntemplatepackage_id,
    one_ofintegerobject_t *fki_department_id,
    one_ofintegerobject_t *fki_team_id,
    one_ofintegerobject_t *fki_ezsignfoldertype_id,
    int fki_language_id,
    char *s_ezsigntemplatepackage_description,
    int b_ezsigntemplatepackage_isactive,
    int i_ezsigntemplatepackagemembership
    ) {
    ezsigntemplatepackage_list_element_t *ezsigntemplatepackage_list_element_local_var = malloc(sizeof(ezsigntemplatepackage_list_element_t));
    if (!ezsigntemplatepackage_list_element_local_var) {
        return NULL;
    }
    ezsigntemplatepackage_list_element_local_var->pki_ezsigntemplatepackage_id = pki_ezsigntemplatepackage_id;
    ezsigntemplatepackage_list_element_local_var->fki_department_id = fki_department_id;
    ezsigntemplatepackage_list_element_local_var->fki_team_id = fki_team_id;
    ezsigntemplatepackage_list_element_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezsigntemplatepackage_list_element_local_var->fki_language_id = fki_language_id;
    ezsigntemplatepackage_list_element_local_var->e_ezsigntemplatepackage_type = e_ezsigntemplatepackage_type;
    ezsigntemplatepackage_list_element_local_var->s_ezsigntemplatepackage_description = s_ezsigntemplatepackage_description;
    ezsigntemplatepackage_list_element_local_var->b_ezsigntemplatepackage_isactive = b_ezsigntemplatepackage_isactive;
    ezsigntemplatepackage_list_element_local_var->i_ezsigntemplatepackagemembership = i_ezsigntemplatepackagemembership;

    return ezsigntemplatepackage_list_element_local_var;
}


void ezsigntemplatepackage_list_element_free(ezsigntemplatepackage_list_element_t *ezsigntemplatepackage_list_element) {
    if(NULL == ezsigntemplatepackage_list_element){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackage_list_element->fki_department_id) {
        one_ofintegerobject_free(ezsigntemplatepackage_list_element->fki_department_id);
        ezsigntemplatepackage_list_element->fki_department_id = NULL;
    }
    if (ezsigntemplatepackage_list_element->fki_team_id) {
        one_ofintegerobject_free(ezsigntemplatepackage_list_element->fki_team_id);
        ezsigntemplatepackage_list_element->fki_team_id = NULL;
    }
    if (ezsigntemplatepackage_list_element->fki_ezsignfoldertype_id) {
        one_ofintegerobject_free(ezsigntemplatepackage_list_element->fki_ezsignfoldertype_id);
        ezsigntemplatepackage_list_element->fki_ezsignfoldertype_id = NULL;
    }
    if (ezsigntemplatepackage_list_element->s_ezsigntemplatepackage_description) {
        free(ezsigntemplatepackage_list_element->s_ezsigntemplatepackage_description);
        ezsigntemplatepackage_list_element->s_ezsigntemplatepackage_description = NULL;
    }
    free(ezsigntemplatepackage_list_element);
}

cJSON *ezsigntemplatepackage_list_element_convertToJSON(ezsigntemplatepackage_list_element_t *ezsigntemplatepackage_list_element) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackage_list_element->pki_ezsigntemplatepackage_id
    if (!ezsigntemplatepackage_list_element->pki_ezsigntemplatepackage_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatepackageID", ezsigntemplatepackage_list_element->pki_ezsigntemplatepackage_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackage_list_element->fki_department_id
    if (!ezsigntemplatepackage_list_element->fki_department_id) {
        goto fail;
    }
    
    cJSON *fki_department_id_local_JSON = one_ofintegerobject_convertToJSON(ezsigntemplatepackage_list_element->fki_department_id);
    if(fki_department_id_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "fkiDepartmentID", fki_department_id_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsigntemplatepackage_list_element->fki_team_id
    if (!ezsigntemplatepackage_list_element->fki_team_id) {
        goto fail;
    }
    
    cJSON *fki_team_id_local_JSON = one_ofintegerobject_convertToJSON(ezsigntemplatepackage_list_element->fki_team_id);
    if(fki_team_id_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "fkiTeamID", fki_team_id_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsigntemplatepackage_list_element->fki_ezsignfoldertype_id
    if (!ezsigntemplatepackage_list_element->fki_ezsignfoldertype_id) {
        goto fail;
    }
    
    cJSON *fki_ezsignfoldertype_id_local_JSON = one_ofintegerobject_convertToJSON(ezsigntemplatepackage_list_element->fki_ezsignfoldertype_id);
    if(fki_ezsignfoldertype_id_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "fkiEzsignfoldertypeID", fki_ezsignfoldertype_id_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsigntemplatepackage_list_element->fki_language_id
    if (!ezsigntemplatepackage_list_element->fki_language_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", ezsigntemplatepackage_list_element->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackage_list_element->e_ezsigntemplatepackage_type
    


    // ezsigntemplatepackage_list_element->s_ezsigntemplatepackage_description
    if (!ezsigntemplatepackage_list_element->s_ezsigntemplatepackage_description) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sEzsigntemplatepackageDescription", ezsigntemplatepackage_list_element->s_ezsigntemplatepackage_description) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatepackage_list_element->b_ezsigntemplatepackage_isactive
    if (!ezsigntemplatepackage_list_element->b_ezsigntemplatepackage_isactive) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatepackageIsactive", ezsigntemplatepackage_list_element->b_ezsigntemplatepackage_isactive) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplatepackage_list_element->i_ezsigntemplatepackagemembership
    if (!ezsigntemplatepackage_list_element->i_ezsigntemplatepackagemembership) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatepackagemembership", ezsigntemplatepackage_list_element->i_ezsigntemplatepackagemembership) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepackage_list_element_t *ezsigntemplatepackage_list_element_parseFromJSON(cJSON *ezsigntemplatepackage_list_elementJSON){

    ezsigntemplatepackage_list_element_t *ezsigntemplatepackage_list_element_local_var = NULL;

    // define the local variable for ezsigntemplatepackage_list_element->fki_department_id
    one_ofintegerobject_t *fki_department_id_local_nonprim = NULL;

    // define the local variable for ezsigntemplatepackage_list_element->fki_team_id
    one_ofintegerobject_t *fki_team_id_local_nonprim = NULL;

    // define the local variable for ezsigntemplatepackage_list_element->fki_ezsignfoldertype_id
    one_ofintegerobject_t *fki_ezsignfoldertype_id_local_nonprim = NULL;

    // ezsigntemplatepackage_list_element->pki_ezsigntemplatepackage_id
    cJSON *pki_ezsigntemplatepackage_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_list_elementJSON, "pkiEzsigntemplatepackageID");
    if (!pki_ezsigntemplatepackage_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplatepackage_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackage_list_element->fki_department_id
    cJSON *fki_department_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_list_elementJSON, "fkiDepartmentID");
    if (!fki_department_id) {
        goto end;
    }

    
    fki_department_id_local_nonprim = one_ofintegerobject_parseFromJSON(fki_department_id); //nonprimitive

    // ezsigntemplatepackage_list_element->fki_team_id
    cJSON *fki_team_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_list_elementJSON, "fkiTeamID");
    if (!fki_team_id) {
        goto end;
    }

    
    fki_team_id_local_nonprim = one_ofintegerobject_parseFromJSON(fki_team_id); //nonprimitive

    // ezsigntemplatepackage_list_element->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_list_elementJSON, "fkiEzsignfoldertypeID");
    if (!fki_ezsignfoldertype_id) {
        goto end;
    }

    
    fki_ezsignfoldertype_id_local_nonprim = one_ofintegerobject_parseFromJSON(fki_ezsignfoldertype_id); //nonprimitive

    // ezsigntemplatepackage_list_element->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_list_elementJSON, "fkiLanguageID");
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackage_list_element->e_ezsigntemplatepackage_type
    cJSON *e_ezsigntemplatepackage_type = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_list_elementJSON, "eEzsigntemplatepackageType");
    if (!e_ezsigntemplatepackage_type) {
        goto end;
    }


    // ezsigntemplatepackage_list_element->s_ezsigntemplatepackage_description
    cJSON *s_ezsigntemplatepackage_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_list_elementJSON, "sEzsigntemplatepackageDescription");
    if (!s_ezsigntemplatepackage_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplatepackage_description))
    {
    goto end; //String
    }

    // ezsigntemplatepackage_list_element->b_ezsigntemplatepackage_isactive
    cJSON *b_ezsigntemplatepackage_isactive = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_list_elementJSON, "bEzsigntemplatepackageIsactive");
    if (!b_ezsigntemplatepackage_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplatepackage_isactive))
    {
    goto end; //Bool
    }

    // ezsigntemplatepackage_list_element->i_ezsigntemplatepackagemembership
    cJSON *i_ezsigntemplatepackagemembership = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_list_elementJSON, "iEzsigntemplatepackagemembership");
    if (!i_ezsigntemplatepackagemembership) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatepackagemembership))
    {
    goto end; //Numeric
    }


    ezsigntemplatepackage_list_element_local_var = ezsigntemplatepackage_list_element_create (
        pki_ezsigntemplatepackage_id->valuedouble,
        fki_department_id_local_nonprim,
        fki_team_id_local_nonprim,
        fki_ezsignfoldertype_id_local_nonprim,
        fki_language_id->valuedouble,
        strdup(s_ezsigntemplatepackage_description->valuestring),
        b_ezsigntemplatepackage_isactive->valueint,
        i_ezsigntemplatepackagemembership->valuedouble
        );

    return ezsigntemplatepackage_list_element_local_var;
end:
    if (fki_department_id_local_nonprim) {
        one_ofintegerobject_free(fki_department_id_local_nonprim);
        fki_department_id_local_nonprim = NULL;
    }
    if (fki_team_id_local_nonprim) {
        one_ofintegerobject_free(fki_team_id_local_nonprim);
        fki_team_id_local_nonprim = NULL;
    }
    if (fki_ezsignfoldertype_id_local_nonprim) {
        one_ofintegerobject_free(fki_ezsignfoldertype_id_local_nonprim);
        fki_ezsignfoldertype_id_local_nonprim = NULL;
    }
    return NULL;

}
