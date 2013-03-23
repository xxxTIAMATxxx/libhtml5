#ifndef __HTML5_H
#define __HTML5_H

#define HTML5_EVENT_INIT_EVERYTHING 0x00000001
#define HTML5_EVENT_INIT_MEDIA 0x00000002
#define HTML5_EVENT_INIT_MOUSE 0x00000004
#define HTML5_EVENT_INIT_WINDOW 0x00000008
#define HTML5_EVENT_INIT_FORM 0x00000010

typedef struct
{
	char *accesskey;
	char *cssclass;
	char *contenteditable;
	char *contextmenu;
	char *dir;
	char *draggable;
	char *dropzone;
	char *hidden;
	char *id;
	char *lang;
	char *spellcheck;
	char *style;
	char *tabindex;
	char *title;
}html5_attributes_global;

typedef struct
{
	char *onafterprint;
	char *onbeforeprint;
	char *onbeforeonload;
	char *onblur;
	char *onerror;
	char *onfocus;
	char *onhaschange;
	char *onload;
	char *onmessage;
	char *onoffline;
	char *ononline;
	char *onpagehide;
	char *onpageshow;
	char *onpopstate;
	char *onredo;
	char *onresize;
	char *onstorage;
	char *onundo;
	char *onunload;	
}html5_event_attributes_window;

typedef struct
{
	char *onblur;
	char *onchange;
	char *oncontextmenu;
	char *onfocus;
	char *onhaschange;
	char *onforminput;
	char *oninput;
	char *oninvalid;
	char *onreset;
	char *onselect;
	char *onsubmit;
}html5_event_attributes_form;

typedef struct
{
	char *onclick;
	char *ondbclick;
	char *ondrag;
	char *ondragend;
	char *ondragenter;
	char *ondragleave;
	char *ondragover;
	char *ondragstart;
	char *ondrop;
	char *onmousedown;
	char *onmousemove;
	char *onmouseout;
	char *onmouseover;
	char *onmouseup;
	char *inmousewheel;
	char *onscroll;
}html5_event_attributes_mouse;

typedef struct
{
	char *onabort;
	char *oncanplay;
	char *oncanplaythrough;
	char *ondurationchange;
	char *onemptied;
	char *onended;
	char *onerror;
	char *onloaddata;
	char *onloadedmetadata;
	char *onloadstart;
	char *onpause;
	char *onplay;
	char *onplaying;
	char *onprogress;
	char *onratechange;
	char *onreadystatechange;
	char *onseeked;
	char *onstalled;
	char *onsuspend;
	char *ontimeupdate;
	char *onvolumechange;
	char *onwaiting;
}html5_event_attributes_media;

typedef struct
{
	char everything;
	html5_event_attributes_form *event_attr_form;
	html5_event_attributes_media *event_attr_media;
	html5_event_attributes_mouse *event_attr_mouse;
	html5_event_attributes_window *event_attr_window;
}html5_event_attributes;

typedef struct
{
	char *href;
	char *hreflang;
	char *media;
	char *rel;
	char *target;
	char *type;
	char *_ext; //for custom attributes or extra attributes
}html5_attributes_a;

typedef struct
{
	char *manifest;
	char *xmlns;
}html5_attributes_body;

typedef struct
{
	char *autoplay;
	char *controls;
	char *loop;
	char *preload;
	char *src;
}html5_attributes_audio;

typedef struct
{
	char *alt;
	char *coords;
	char *href;
	char *hreflang;
	char *media;
	char *rel;
	char *shape;
	char *target;
	char *type;
}html5_attributes_area;

typedef struct
{
	char *autoplay;
	char *controls;
	char *loop;
	char *preload;
	char *src;
}html5_attributes_aside;

typedef struct
{
	char *href;
	char *target;
}html5_attributes_base;

typedef struct
{
	char *dir;
}html5_attributes_bdo;

typedef struct
{
	char *cite;
}html5_attributes_blockquote;

typedef struct
{
	char *autofocus;
	char *disabled;
	char *form;
	char *formaction;
	char *formenctype;
	char *formmethod;
	char *formnovalidate;
	char *fortarget;
	char *name;
	char *type;
	char *value;
}html5_attributes_button;

typedef struct
{
	char *height;
	char *width;
}html5_attributes_canvas;

typedef struct
{
	char *span;
}html5_attributes_col;

typedef struct
{
	char *span;
}html5_attributes_colgroup;

typedef struct
{
	char *checked;
	char *disabled;
	char *icon;
	char *label;
	char *radiogroup;
	char *type;
}html5_attributes_command;

typedef struct
{
	char *cite;
	char *datetime;
}html5_attributes_del;

typedef struct
{
	char *open;
}html5_attributes_details;

typedef struct
{
	char *height;
	char *src;
	char *type;
	char *width;
}html5_attributes_embed;

typedef struct
{
	char *disabled;
	char *form;
	char *name;
}html5_attributes_fieldset;

typedef struct
{
	char *accept;
	char *accept_charset;
	char *action;
	char *autocomplete;
	char *enctype;
	char *method;
	char *name;
	char *novalidate;
	char *target;
}html5_attributes_form;

typedef struct
{
	char *manifest;
	char *xmlns;
}html5_attributes_html;

typedef struct
{
	char *height;
	char *name;
	char *sandbox;
	char *seamless;
	char *src;
	char *srcdoc;
	char *width;
}html5_attributes_iframe;

typedef struct
{
	char *src;
	char *alt;
	char *height;
	char *ismap;
	char *usemap;
	char *width;
}html5_attributes_img;

typedef struct
{
	char *accept;
	char *alt;
	char *autocomplete;
	char *autofocus;
	char *checked;
	char *disabled;
	char *form;
	char *formaction;
	char *formenctype;
	char *formmethod;
	char *formnovalidate;
	char *fortarget;
	char *height;
	char *list;
	char *max;
	char *maxlength;
	char *min;
	char *multiple;
	char *name;
	char *pattern;
	char *placeholder;
	char *readonly;
	char *required;
	char *size;
	char *src;
	char *step;
	char *type;
	char *value;
	char *width;
}html5_attributes_input;

typedef struct
{
	char *cite;
	char *datetime;
}html5_attributes_ins;

typedef struct
{
	char *autofocus;
	char *challenge;
	char *disabled;
	char *form;
	char *keytype;
	char *name;
}html5_attributes_keygen;

typedef struct
{
	char *for_;
	char *form;
}html5_attributes_label;

typedef struct
{
	char *value;
}html5_attributes_li;

typedef struct
{
	char *href;
	char *hreflang;
	char *media;
	char *rel;
	char *sizes;
	char *type;
}html5_attributes_link;

typedef struct
{
	char *name;
}html5_attributes_map;

typedef struct
{
	char *label;
	char *type;
}html5_attributes_menu;

typedef struct
{
	char *charset;
	char *content;
	char *http_equiv;
	char *name;
}html5_attributes_meta;

typedef struct
{
	char *form;
	char *high;
	char *low;
	char *max;
	char *min;
	char *optimum;
	char *value;
	
}html5_attributes_meter;

typedef struct
{
	char *data;
	char *form;
	char *height;
	char *name;
	char *type;
	char *usemap;
	char *width;
}html5_attributes_object;

typedef struct
{
	char *reversed;
	char *start;
	char *type;
}html5_attributes_ol;

typedef struct
{
	char *label;
	char *disabled;
}html5_attributes_optgroup;

typedef struct
{
	char *disabled;
	char *label;
	char *selected;
	char *value;
}html5_attributes_option;

typedef struct
{
	char *for_;
	char *form;
	char *name;
}html5_attributes_output;

typedef struct
{
	char *name;
	char *value;
}html5_attributes_param;

typedef struct
{
	char *max;
	char *value;
}html5_attributes_progress;

typedef struct
{
	char *cite;
}html5_attributes_q;

typedef struct
{
	char *async;
	char *defer;
	char *type;
	char *charset;
	char *src;
}html5_attributes_script;

typedef struct
{
	char *autofocus;
	char *disabled;
	char *form;
	char *multiple;
	char *name;
	char *size;
}html5_attributes_select;

typedef struct
{
	char *media;
	char *src;
	char *type;
}html5_attributes_source;

typedef struct
{
	char *type;
	char *media;
	char *scorped;
}html5_attributes_style;

typedef struct
{
	char *border;
}html5_attributes_table;

typedef struct
{
	char *colspan;
	char *headers;
	char *rowspan;
}html5_attributes_td;

typedef struct
{
	char *autofocus;
	char *cols;
	char *disabled;
	char *form;
	char *maxlength;
	char *name;
	char *placeholder;
	char *readonly;
	char *required;
	char *rows;
	char *wrap;
}html5_attributes_textarea;

typedef struct
{
	char *colspan;
	char *headers;
	char *rowspan;
	char *scope;
}html5_attributes_th;

typedef struct
{
	char *datetime;
	char *pubdate;
}html5_attributes_time;

typedef struct
{
	char *default_;
	char *kind;
	char *label;
	char *src;
	char *srclang;
}html5_attributes_track;

typedef struct
{
	char *autoplay;
	char *controls;
	char *height;
	char *loop;
	char *muted;
	char *poster;
	char *preload;
	char *src;
	char *width;
}html5_attributes_video;


//tools
extern void html5_tag_end(const char *tagname);


//html5
extern void html5_doctype(void);
extern void html5_comment(const char *comment);
extern void html5_acronym(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_address(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_applet(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_article(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_aside(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_b(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_basefont(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_bdi(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_big(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_br(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_caption(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_center(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_cite(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_code(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_datalist(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_dd(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_dfn(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_dir(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_div(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_dl(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_dt(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_em(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_figcaption(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_figure(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_font(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_footer(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_frame(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_frameset(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_h1(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_h2(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_h3(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_h4(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_h5(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_h6(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_head(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_header(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_hgroup(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_hr(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_i(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_kbd(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_legend(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_mark(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_nav(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_noframes(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_noscript(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_p(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_pre(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_rp(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_rt(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_ruby(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_s(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_samp(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_section(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_small(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_span(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_strike(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_strong(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_sub(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_summary(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_sup(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_tbody(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_tfoot(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_thead(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_title(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_tr(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_tt(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_u(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_ul(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_var(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_wbr(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event);
extern void html5_a(html5_attributes_global *html5_attr_global, html5_attributes_a *html5_attr_a, html5_event_attributes *html5_event_attr);
extern void html5_abbr(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_event_attr);
extern void html5_area(html5_attributes_global *html5_attr_global, html5_attributes_area *html5_attr_area, html5_event_attributes *html5_event_attr);
extern void html5_audio(html5_attributes_global *html5_attr_global, html5_attributes_audio *html5_attr_audio, html5_event_attributes *html5_event_attr);
extern void html5_base(html5_attributes_global *html5_attr_global, html5_attributes_base *html5_attr_base, html5_event_attributes *html5_event_attr);
extern void html5_bdo(html5_attributes_global *html5_attr_global, html5_attributes_bdo *html5_attr_bdo, html5_event_attributes *html5_event_attr);
extern void html5_blockquote(html5_attributes_global *html5_attr_global, html5_attributes_blockquote *html5_attr_blockquote, html5_event_attributes *html5_event_attr);
extern void html5_body(html5_attributes_global *html5_attr_global, html5_attributes_body *html5_attr_body, html5_event_attributes *html5_event_attr);
extern void html5_button(html5_attributes_global *html5_attr_global, html5_attributes_button *html5_attr_button, html5_event_attributes *html5_event_attr);
extern void html5_canvas(html5_attributes_global *html5_attr_global, html5_attributes_canvas *html5_attr_canvas, html5_event_attributes *html5_event_attr);
extern void html5_col(html5_attributes_global *html5_attr_global, html5_attributes_col *html5_attr_col, html5_event_attributes *html5_event_attr);
extern void html5_colgroup(html5_attributes_global *html5_attr_global, html5_attributes_colgroup *html5_attr_colgroup, html5_event_attributes *html5_event_attr);
extern void html5_command(html5_attributes_global *html5_attr_global, html5_attributes_command *html5_attr_command, html5_event_attributes *html5_event_attr);
extern void html5_del(html5_attributes_global *html5_attr_global, html5_attributes_del *html5_attr_del, html5_event_attributes *html5_event_attr);
extern void html5_details(html5_attributes_global *html5_attr_global, html5_attributes_details *html5_attr_details, html5_event_attributes *html5_event_attr);
extern void html5_embed(html5_attributes_global *html5_attr_global, html5_attributes_embed *html5_attr_embed, html5_event_attributes *html5_event_attr);
extern void html5_fieldset(html5_attributes_global *html5_attr_global, html5_attributes_fieldset *html5_attr_fieldset, html5_event_attributes *html5_event_attr);
extern void html5_form(html5_attributes_global *html5_attr_global, html5_attributes_form *html5_attr_form, html5_event_attributes *html5_event_attr);
extern void html5_html(html5_attributes_global *html5_attr_global, html5_attributes_html *html5_attr_html, html5_event_attributes *html5_event_attr);
extern void html5_iframe(html5_attributes_global *html5_attr_global, html5_attributes_iframe *html5_attr_iframe, html5_event_attributes *html5_event_attr);
extern void html5_img(html5_attributes_global *html5_attr_global, html5_attributes_img *html5_attr_img, html5_event_attributes *html5_event_attr);
extern void html5_input(html5_attributes_global *html5_attr_global, html5_attributes_input *html5_attr_input, html5_event_attributes *html5_event_attr);
extern void html5_ins(html5_attributes_global *html5_attr_global, html5_attributes_ins *html5_attr_ins, html5_event_attributes *html5_event_attr);
extern void html5_keygen(html5_attributes_global *html5_attr_global, html5_attributes_keygen *html5_attr_keygen, html5_event_attributes *html5_event_attr);
extern void html5_label(html5_attributes_global *html5_attr_global, html5_attributes_label *html5_attr_label, html5_event_attributes *html5_event_attr);
extern void html5_li(html5_attributes_global *html5_attr_global, html5_attributes_li *html5_attr_li, html5_event_attributes *html5_event_attr);
extern void html5_link(html5_attributes_global *html5_attr_global, html5_attributes_link *html5_attr_link, html5_event_attributes *html5_event_attr);
extern void html5_map(html5_attributes_global *html5_attr_global, html5_attributes_map *html5_attr_map, html5_event_attributes *html5_event_attr);
extern void html5_menu(html5_attributes_global *html5_attr_global, html5_attributes_menu *html5_attr_menu, html5_event_attributes *html5_event_attr);
extern void html5_meta(html5_attributes_global *html5_attr_global, html5_attributes_meta *html5_attr_meta, html5_event_attributes *html5_event_attr);
extern void html5_meter(html5_attributes_global *html5_attr_global, html5_attributes_meter *html5_attr_meter, html5_event_attributes *html5_event_attr);
extern void html5_object(html5_attributes_global *html5_attr_global, html5_attributes_object *html5_attr_object, html5_event_attributes *html5_event_attr);
extern void html5_ol(html5_attributes_global *html5_attr_global, html5_attributes_ol *html5_attr_ol, html5_event_attributes *html5_event_attr);
extern void html5_optgroup(html5_attributes_global *html5_attr_global, html5_attributes_optgroup *html5_attr_optgroup, html5_event_attributes *html5_event_attr);
extern void html5_option(html5_attributes_global *html5_attr_global, html5_attributes_option *html5_attr_option, html5_event_attributes *html5_event_attr);
extern void html5_output(html5_attributes_global *html5_attr_global, html5_attributes_output *html5_attr_output, html5_event_attributes *html5_event_attr);
extern void html5_param(html5_attributes_global *html5_attr_global, html5_attributes_param *html5_attr_param, html5_event_attributes *html5_event_attr);
extern void html5_progress(html5_attributes_global *html5_attr_global, html5_attributes_progress *html5_attr_progress, html5_event_attributes *html5_event_attr);
extern void html5_q(html5_attributes_global *html5_attr_global, html5_attributes_q *html5_attr_q, html5_event_attributes *html5_event_attr);
extern void html5_script(html5_attributes_global *html5_attr_global, html5_attributes_script *html5_attr_script, html5_event_attributes *html5_event_attr);
extern void html5_select(html5_attributes_global *html5_attr_global, html5_attributes_select *html5_attr_select, html5_event_attributes *html5_event_attr);
extern void html5_source(html5_attributes_global *html5_attr_global, html5_attributes_source *html5_attr_source, html5_event_attributes *html5_event_attr);
extern void html5_style(html5_attributes_global *html5_attr_global, html5_attributes_style *html5_attr_style, html5_event_attributes *html5_event_attr);
extern void html5_table(html5_attributes_global *html5_attr_global, html5_attributes_table *html5_attr_table, html5_event_attributes *html5_event_attr);
extern void html5_td(html5_attributes_global *html5_attr_global, html5_attributes_td *html5_attr_td, html5_event_attributes *html5_event_attr);
extern void html5_textarea(html5_attributes_global *html5_attr_global, html5_attributes_textarea *html5_attr_textarea, html5_event_attributes *html5_event_attr);
extern void html5_th(html5_attributes_global *html5_attr_global, html5_attributes_th *html5_attr_th, html5_event_attributes *html5_event_attr);
extern void html5_time(html5_attributes_global *html5_attr_global, html5_attributes_time *html5_attr_time, html5_event_attributes *html5_event_attr);
extern void html5_track(html5_attributes_global *html5_attr_global, html5_attributes_track *html5_attr_track, html5_event_attributes *html5_event_attr);
extern void html5_video(html5_attributes_global *html5_attr_global, html5_attributes_video *html5_attr_video, html5_event_attributes *html5_event_attr);


//outset attributes
extern void html5_attributes_global_outset(html5_attributes_global *html5_attr_global);
extern void html5_attributes_body_outset(html5_attributes_body *html5_attr_body);
extern void html5_attributes_a_outset(html5_attributes_a *attr_a);
extern void html5_attributes_area_outset(html5_attributes_area *attr_area);
extern void html5_attributes_audio_outset(html5_attributes_audio *attr_audio);
extern void html5_attributes_base_outset(html5_attributes_base *attr_base);
extern void html5_attributes_bdo_outset(html5_attributes_bdo *attr_bdo);
extern void html5_attributes_blockquote_outset(html5_attributes_blockquote *attr_blockquote);
extern void html5_attributes_body_outset(html5_attributes_body *attr_body);
extern void html5_attributes_button_outset(html5_attributes_button *attr_button);
extern void html5_attributes_canvas_outset(html5_attributes_canvas *attr_canvas);
extern void html5_attributes_col_outset(html5_attributes_col *attr_col);
extern void html5_attributes_colgroup_outset(html5_attributes_colgroup *attr_colgroup);
extern void html5_attributes_command_outset(html5_attributes_command *attr_command);
extern void html5_attributes_del_outset(html5_attributes_del *attr_del);
extern void html5_attributes_details_outset(html5_attributes_details *attr_details);
extern void html5_attributes_embed_outset(html5_attributes_embed *attr_embed);
extern void html5_attributes_fieldset_outset(html5_attributes_fieldset *attr_fieldset);
extern void html5_attributes_form_outset(html5_attributes_form *attr_form);
extern void html5_attributes_html_outset(html5_attributes_html *attr_html);
extern void html5_attributes_iframe_outset(html5_attributes_iframe *attr_iframe);
extern void html5_attributes_img_outset(html5_attributes_img *attr_img);
extern void html5_attributes_input_outset(html5_attributes_input *attr_input);
extern void html5_attributes_ins_outset(html5_attributes_ins *attr_ins);
extern void html5_attributes_keygen_outset(html5_attributes_keygen *attr_keygen);
extern void html5_attributes_label_outset(html5_attributes_label *attr_label);
extern void html5_attributes_li_outset(html5_attributes_li *attr_li);
extern void html5_attributes_link_outset(html5_attributes_link *attr_link);
extern void html5_attributes_map_outset(html5_attributes_map *attr_map);
extern void html5_attributes_menu_outset(html5_attributes_menu *attr_menu);
extern void html5_attributes_meta_outset(html5_attributes_meta *attr_meta);
extern void html5_attributes_meter_outset(html5_attributes_meter *attr_meter);
extern void html5_attributes_object_outset(html5_attributes_object *attr_object);
extern void html5_attributes_ol_outset(html5_attributes_ol *attr_ol);
extern void html5_attributes_optgroup_outset(html5_attributes_optgroup *attr_optgroup);
extern void html5_attributes_option_outset(html5_attributes_option *attr_option);
extern void html5_attributes_output_outset(html5_attributes_output *attr_output);
extern void html5_attributes_param_outset(html5_attributes_param *attr_param);
extern void html5_attributes_progress_outset(html5_attributes_progress *attr_progress);
extern void html5_attributes_q_outset(html5_attributes_q *attr_q);
extern void html5_attributes_script_outset(html5_attributes_script *attr_script);
extern void html5_attributes_select_outset(html5_attributes_select *attr_select);
extern void html5_attributes_source_outset(html5_attributes_source *attr_source);
extern void html5_attributes_style_outset(html5_attributes_style *attr_style);
extern void html5_attributes_table_outset(html5_attributes_table *attr_table);
extern void html5_attributes_td_outset(html5_attributes_td *attr_td);
extern void html5_attributes_textarea_outset(html5_attributes_textarea *attr_textarea);
extern void html5_attributes_th_outset(html5_attributes_th *attr_th);
extern void html5_attributes_time_outset(html5_attributes_time *attr_time);
extern void html5_attributes_track_outset(html5_attributes_track *attr_track);
extern void html5_attributes_video_outset(html5_attributes_video *attr_video);

extern void html5_event_attributes_outset(html5_event_attributes *evattr);
extern void html5_event_attribute_form_outset(html5_event_attributes_form *event_attr_form);
extern void html5_event_attribute_media_outset(html5_event_attributes_media *event_attr_media);
extern void html5_event_attribute_mouse_outset(html5_event_attributes_mouse *event_attr_mouse);
extern void html5_event_attribute_window_outset(html5_event_attributes_window *event_attr_window);

#endif // __HTML5_H
