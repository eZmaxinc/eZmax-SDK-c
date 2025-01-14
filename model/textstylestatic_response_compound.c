#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "textstylestatic_response_compound.h"



textstylestatic_response_compound_t *textstylestatic_response_compound_create(
    int pki_textstylestatic_id,
    int fki_font_id,
    char *s_font_name,
    int b_textstylestatic_bold,
    int b_textstylestatic_underline,
    int b_textstylestatic_italic,
    int b_textstylestatic_strikethrough,
    int i_textstylestatic_fontcolor,
    int i_textstylestatic_size
    ) {
    textstylestatic_response_compound_t *textstylestatic_response_compound_local_var = malloc(sizeof(textstylestatic_response_compound_t));
    if (!textstylestatic_response_compound_local_var) {
        return NULL;
    }
    textstylestatic_response_compound_local_var->pki_textstylestatic_id = pki_textstylestatic_id;
    textstylestatic_response_compound_local_var->fki_font_id = fki_font_id;
    textstylestatic_response_compound_local_var->s_font_name = s_font_name;
    textstylestatic_response_compound_local_var->b_textstylestatic_bold = b_textstylestatic_bold;
    textstylestatic_response_compound_local_var->b_textstylestatic_underline = b_textstylestatic_underline;
    textstylestatic_response_compound_local_var->b_textstylestatic_italic = b_textstylestatic_italic;
    textstylestatic_response_compound_local_var->b_textstylestatic_strikethrough = b_textstylestatic_strikethrough;
    textstylestatic_response_compound_local_var->i_textstylestatic_fontcolor = i_textstylestatic_fontcolor;
    textstylestatic_response_compound_local_var->i_textstylestatic_size = i_textstylestatic_size;

    return textstylestatic_response_compound_local_var;
}


void textstylestatic_response_compound_free(textstylestatic_response_compound_t *textstylestatic_response_compound) {
    if(NULL == textstylestatic_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (textstylestatic_response_compound->s_font_name) {
        free(textstylestatic_response_compound->s_font_name);
        textstylestatic_response_compound->s_font_name = NULL;
    }
    free(textstylestatic_response_compound);
}

cJSON *textstylestatic_response_compound_convertToJSON(textstylestatic_response_compound_t *textstylestatic_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // textstylestatic_response_compound->pki_textstylestatic_id
    if(textstylestatic_response_compound->pki_textstylestatic_id) {
    if(cJSON_AddNumberToObject(item, "pkiTextstylestaticID", textstylestatic_response_compound->pki_textstylestatic_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // textstylestatic_response_compound->fki_font_id
    if (!textstylestatic_response_compound->fki_font_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiFontID", textstylestatic_response_compound->fki_font_id) == NULL) {
    goto fail; //Numeric
    }


    // textstylestatic_response_compound->s_font_name
    if (!textstylestatic_response_compound->s_font_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sFontName", textstylestatic_response_compound->s_font_name) == NULL) {
    goto fail; //String
    }


    // textstylestatic_response_compound->b_textstylestatic_bold
    if (!textstylestatic_response_compound->b_textstylestatic_bold) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bTextstylestaticBold", textstylestatic_response_compound->b_textstylestatic_bold) == NULL) {
    goto fail; //Bool
    }


    // textstylestatic_response_compound->b_textstylestatic_underline
    if (!textstylestatic_response_compound->b_textstylestatic_underline) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bTextstylestaticUnderline", textstylestatic_response_compound->b_textstylestatic_underline) == NULL) {
    goto fail; //Bool
    }


    // textstylestatic_response_compound->b_textstylestatic_italic
    if (!textstylestatic_response_compound->b_textstylestatic_italic) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bTextstylestaticItalic", textstylestatic_response_compound->b_textstylestatic_italic) == NULL) {
    goto fail; //Bool
    }


    // textstylestatic_response_compound->b_textstylestatic_strikethrough
    if (!textstylestatic_response_compound->b_textstylestatic_strikethrough) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bTextstylestaticStrikethrough", textstylestatic_response_compound->b_textstylestatic_strikethrough) == NULL) {
    goto fail; //Bool
    }


    // textstylestatic_response_compound->i_textstylestatic_fontcolor
    if (!textstylestatic_response_compound->i_textstylestatic_fontcolor) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iTextstylestaticFontcolor", textstylestatic_response_compound->i_textstylestatic_fontcolor) == NULL) {
    goto fail; //Numeric
    }


    // textstylestatic_response_compound->i_textstylestatic_size
    if (!textstylestatic_response_compound->i_textstylestatic_size) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iTextstylestaticSize", textstylestatic_response_compound->i_textstylestatic_size) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

textstylestatic_response_compound_t *textstylestatic_response_compound_parseFromJSON(cJSON *textstylestatic_response_compoundJSON){

    textstylestatic_response_compound_t *textstylestatic_response_compound_local_var = NULL;

    // textstylestatic_response_compound->pki_textstylestatic_id
    cJSON *pki_textstylestatic_id = cJSON_GetObjectItemCaseSensitive(textstylestatic_response_compoundJSON, "pkiTextstylestaticID");
    if (pki_textstylestatic_id) { 
    if(!cJSON_IsNumber(pki_textstylestatic_id))
    {
    goto end; //Numeric
    }
    }

    // textstylestatic_response_compound->fki_font_id
    cJSON *fki_font_id = cJSON_GetObjectItemCaseSensitive(textstylestatic_response_compoundJSON, "fkiFontID");
    if (!fki_font_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_font_id))
    {
    goto end; //Numeric
    }

    // textstylestatic_response_compound->s_font_name
    cJSON *s_font_name = cJSON_GetObjectItemCaseSensitive(textstylestatic_response_compoundJSON, "sFontName");
    if (!s_font_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_font_name))
    {
    goto end; //String
    }

    // textstylestatic_response_compound->b_textstylestatic_bold
    cJSON *b_textstylestatic_bold = cJSON_GetObjectItemCaseSensitive(textstylestatic_response_compoundJSON, "bTextstylestaticBold");
    if (!b_textstylestatic_bold) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_textstylestatic_bold))
    {
    goto end; //Bool
    }

    // textstylestatic_response_compound->b_textstylestatic_underline
    cJSON *b_textstylestatic_underline = cJSON_GetObjectItemCaseSensitive(textstylestatic_response_compoundJSON, "bTextstylestaticUnderline");
    if (!b_textstylestatic_underline) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_textstylestatic_underline))
    {
    goto end; //Bool
    }

    // textstylestatic_response_compound->b_textstylestatic_italic
    cJSON *b_textstylestatic_italic = cJSON_GetObjectItemCaseSensitive(textstylestatic_response_compoundJSON, "bTextstylestaticItalic");
    if (!b_textstylestatic_italic) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_textstylestatic_italic))
    {
    goto end; //Bool
    }

    // textstylestatic_response_compound->b_textstylestatic_strikethrough
    cJSON *b_textstylestatic_strikethrough = cJSON_GetObjectItemCaseSensitive(textstylestatic_response_compoundJSON, "bTextstylestaticStrikethrough");
    if (!b_textstylestatic_strikethrough) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_textstylestatic_strikethrough))
    {
    goto end; //Bool
    }

    // textstylestatic_response_compound->i_textstylestatic_fontcolor
    cJSON *i_textstylestatic_fontcolor = cJSON_GetObjectItemCaseSensitive(textstylestatic_response_compoundJSON, "iTextstylestaticFontcolor");
    if (!i_textstylestatic_fontcolor) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_textstylestatic_fontcolor))
    {
    goto end; //Numeric
    }

    // textstylestatic_response_compound->i_textstylestatic_size
    cJSON *i_textstylestatic_size = cJSON_GetObjectItemCaseSensitive(textstylestatic_response_compoundJSON, "iTextstylestaticSize");
    if (!i_textstylestatic_size) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_textstylestatic_size))
    {
    goto end; //Numeric
    }


    textstylestatic_response_compound_local_var = textstylestatic_response_compound_create (
        pki_textstylestatic_id ? pki_textstylestatic_id->valuedouble : 0,
        fki_font_id->valuedouble,
        strdup(s_font_name->valuestring),
        b_textstylestatic_bold->valueint,
        b_textstylestatic_underline->valueint,
        b_textstylestatic_italic->valueint,
        b_textstylestatic_strikethrough->valueint,
        i_textstylestatic_fontcolor->valuedouble,
        i_textstylestatic_size->valuedouble
        );

    return textstylestatic_response_compound_local_var;
end:
    return NULL;

}
