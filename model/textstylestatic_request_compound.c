#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "textstylestatic_request_compound.h"



static textstylestatic_request_compound_t *textstylestatic_request_compound_create_internal(
    int fki_font_id,
    int b_textstylestatic_bold,
    int b_textstylestatic_underline,
    int b_textstylestatic_italic,
    int b_textstylestatic_strikethrough,
    int i_textstylestatic_fontcolor,
    int i_textstylestatic_size
    ) {
    textstylestatic_request_compound_t *textstylestatic_request_compound_local_var = malloc(sizeof(textstylestatic_request_compound_t));
    if (!textstylestatic_request_compound_local_var) {
        return NULL;
    }
    textstylestatic_request_compound_local_var->fki_font_id = fki_font_id;
    textstylestatic_request_compound_local_var->b_textstylestatic_bold = b_textstylestatic_bold;
    textstylestatic_request_compound_local_var->b_textstylestatic_underline = b_textstylestatic_underline;
    textstylestatic_request_compound_local_var->b_textstylestatic_italic = b_textstylestatic_italic;
    textstylestatic_request_compound_local_var->b_textstylestatic_strikethrough = b_textstylestatic_strikethrough;
    textstylestatic_request_compound_local_var->i_textstylestatic_fontcolor = i_textstylestatic_fontcolor;
    textstylestatic_request_compound_local_var->i_textstylestatic_size = i_textstylestatic_size;

    textstylestatic_request_compound_local_var->_library_owned = 1;
    return textstylestatic_request_compound_local_var;
}

__attribute__((deprecated)) textstylestatic_request_compound_t *textstylestatic_request_compound_create(
    int fki_font_id,
    int b_textstylestatic_bold,
    int b_textstylestatic_underline,
    int b_textstylestatic_italic,
    int b_textstylestatic_strikethrough,
    int i_textstylestatic_fontcolor,
    int i_textstylestatic_size
    ) {
    return textstylestatic_request_compound_create_internal (
        fki_font_id,
        b_textstylestatic_bold,
        b_textstylestatic_underline,
        b_textstylestatic_italic,
        b_textstylestatic_strikethrough,
        i_textstylestatic_fontcolor,
        i_textstylestatic_size
        );
}

void textstylestatic_request_compound_free(textstylestatic_request_compound_t *textstylestatic_request_compound) {
    if(NULL == textstylestatic_request_compound){
        return ;
    }
    if(textstylestatic_request_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "textstylestatic_request_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    free(textstylestatic_request_compound);
}

cJSON *textstylestatic_request_compound_convertToJSON(textstylestatic_request_compound_t *textstylestatic_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // textstylestatic_request_compound->fki_font_id
    if (!textstylestatic_request_compound->fki_font_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiFontID", textstylestatic_request_compound->fki_font_id) == NULL) {
    goto fail; //Numeric
    }


    // textstylestatic_request_compound->b_textstylestatic_bold
    if (!textstylestatic_request_compound->b_textstylestatic_bold) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bTextstylestaticBold", textstylestatic_request_compound->b_textstylestatic_bold) == NULL) {
    goto fail; //Bool
    }


    // textstylestatic_request_compound->b_textstylestatic_underline
    if (!textstylestatic_request_compound->b_textstylestatic_underline) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bTextstylestaticUnderline", textstylestatic_request_compound->b_textstylestatic_underline) == NULL) {
    goto fail; //Bool
    }


    // textstylestatic_request_compound->b_textstylestatic_italic
    if (!textstylestatic_request_compound->b_textstylestatic_italic) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bTextstylestaticItalic", textstylestatic_request_compound->b_textstylestatic_italic) == NULL) {
    goto fail; //Bool
    }


    // textstylestatic_request_compound->b_textstylestatic_strikethrough
    if (!textstylestatic_request_compound->b_textstylestatic_strikethrough) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bTextstylestaticStrikethrough", textstylestatic_request_compound->b_textstylestatic_strikethrough) == NULL) {
    goto fail; //Bool
    }


    // textstylestatic_request_compound->i_textstylestatic_fontcolor
    if (!textstylestatic_request_compound->i_textstylestatic_fontcolor) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iTextstylestaticFontcolor", textstylestatic_request_compound->i_textstylestatic_fontcolor) == NULL) {
    goto fail; //Numeric
    }


    // textstylestatic_request_compound->i_textstylestatic_size
    if (!textstylestatic_request_compound->i_textstylestatic_size) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iTextstylestaticSize", textstylestatic_request_compound->i_textstylestatic_size) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

textstylestatic_request_compound_t *textstylestatic_request_compound_parseFromJSON(cJSON *textstylestatic_request_compoundJSON){

    textstylestatic_request_compound_t *textstylestatic_request_compound_local_var = NULL;

    // textstylestatic_request_compound->fki_font_id
    cJSON *fki_font_id = cJSON_GetObjectItemCaseSensitive(textstylestatic_request_compoundJSON, "fkiFontID");
    if (cJSON_IsNull(fki_font_id)) {
        fki_font_id = NULL;
    }
    if (!fki_font_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_font_id))
    {
    goto end; //Numeric
    }

    // textstylestatic_request_compound->b_textstylestatic_bold
    cJSON *b_textstylestatic_bold = cJSON_GetObjectItemCaseSensitive(textstylestatic_request_compoundJSON, "bTextstylestaticBold");
    if (cJSON_IsNull(b_textstylestatic_bold)) {
        b_textstylestatic_bold = NULL;
    }
    if (!b_textstylestatic_bold) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_textstylestatic_bold))
    {
    goto end; //Bool
    }

    // textstylestatic_request_compound->b_textstylestatic_underline
    cJSON *b_textstylestatic_underline = cJSON_GetObjectItemCaseSensitive(textstylestatic_request_compoundJSON, "bTextstylestaticUnderline");
    if (cJSON_IsNull(b_textstylestatic_underline)) {
        b_textstylestatic_underline = NULL;
    }
    if (!b_textstylestatic_underline) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_textstylestatic_underline))
    {
    goto end; //Bool
    }

    // textstylestatic_request_compound->b_textstylestatic_italic
    cJSON *b_textstylestatic_italic = cJSON_GetObjectItemCaseSensitive(textstylestatic_request_compoundJSON, "bTextstylestaticItalic");
    if (cJSON_IsNull(b_textstylestatic_italic)) {
        b_textstylestatic_italic = NULL;
    }
    if (!b_textstylestatic_italic) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_textstylestatic_italic))
    {
    goto end; //Bool
    }

    // textstylestatic_request_compound->b_textstylestatic_strikethrough
    cJSON *b_textstylestatic_strikethrough = cJSON_GetObjectItemCaseSensitive(textstylestatic_request_compoundJSON, "bTextstylestaticStrikethrough");
    if (cJSON_IsNull(b_textstylestatic_strikethrough)) {
        b_textstylestatic_strikethrough = NULL;
    }
    if (!b_textstylestatic_strikethrough) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_textstylestatic_strikethrough))
    {
    goto end; //Bool
    }

    // textstylestatic_request_compound->i_textstylestatic_fontcolor
    cJSON *i_textstylestatic_fontcolor = cJSON_GetObjectItemCaseSensitive(textstylestatic_request_compoundJSON, "iTextstylestaticFontcolor");
    if (cJSON_IsNull(i_textstylestatic_fontcolor)) {
        i_textstylestatic_fontcolor = NULL;
    }
    if (!i_textstylestatic_fontcolor) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_textstylestatic_fontcolor))
    {
    goto end; //Numeric
    }

    // textstylestatic_request_compound->i_textstylestatic_size
    cJSON *i_textstylestatic_size = cJSON_GetObjectItemCaseSensitive(textstylestatic_request_compoundJSON, "iTextstylestaticSize");
    if (cJSON_IsNull(i_textstylestatic_size)) {
        i_textstylestatic_size = NULL;
    }
    if (!i_textstylestatic_size) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_textstylestatic_size))
    {
    goto end; //Numeric
    }


    textstylestatic_request_compound_local_var = textstylestatic_request_compound_create_internal (
        fki_font_id->valuedouble,
        b_textstylestatic_bold->valueint,
        b_textstylestatic_underline->valueint,
        b_textstylestatic_italic->valueint,
        b_textstylestatic_strikethrough->valueint,
        i_textstylestatic_fontcolor->valuedouble,
        i_textstylestatic_size->valuedouble
        );

    return textstylestatic_request_compound_local_var;
end:
    return NULL;

}
