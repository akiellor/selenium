/* AUTO GENERATED - DO NOT EDIT BY HAND */
#ifndef ATOMS_H__
#define ATOMS_H__

#include <stddef.h>  // For wchar_t.

namespace webdriver {

const wchar_t* const GET_ATTRIBUTE[] = {
    L"function(){var e=this;\nfunction f(a){var c=typeof a;if(c==\"object\")i",
    L"f(a){if(a instanceof Array||!(a instanceof Object)&&Object.prototype.to",
    L"String.call(a)==\"[object Array]\"||typeof a.length==\"number\"&&typeof",
    L" a.splice!=\"undefined\"&&typeof a.propertyIsEnumerable!=\"undefined\"&",
    L"&!a.propertyIsEnumerable(\"splice\"))return\"array\";if(!(a instanceof ",
    L"Object)&&(Object.prototype.toString.call(a)==\"[object Function]\"||typ",
    L"eof a.call!=\"undefined\"&&typeof a.propertyIsEnumerable!=\"undefined\"",
    L"&&!a.propertyIsEnumerable(\"call\")))return\"function\"}else return\"nu",
    L"ll\";else if(c==\n\"function\"&&typeof a.call==\"undefined\")return\"ob",
    L"ject\";return c}function h(a,c){function b(){}b.prototype=c.prototype;a",
    L".g=c.prototype;a.prototype=new b};function i(a){this.stack=Error().stac",
    L"k||\"\";if(a)this.message=String(a)}h(i,Error);function j(a){for(var c=",
    L"1;c<arguments.length;c++){var b=String(arguments[c]).replace(/\\$/g,\"$",
    L"$$$\");a=a.replace(/\\%s/,b)}return a}function k(a){return a.replace(/^",
    L"[\\s\\xa0]+|[\\s\\xa0]+$/g,\"\")}function o(a,c){if(a<c)return-1;else i",
    L"f(a>c)return 1;return 0};function p(a,c){c.unshift(a);i.call(this,j.app",
    L"ly(null,c));c.shift();this.h=a}h(p,i);function q(a,c){if(!a){var b=Arra",
    L"y.prototype.slice.call(arguments,2),d=\"Assertion failed\";if(c){d+=\":",
    L" \"+c;var g=b}throw new p(\"\"+d,g||[]);}return a};var r=Array.prototyp",
    L"e,s=r.indexOf?function(a,c,b){q(a.length!=null);return r.indexOf.call(a",
    L",c,b)}:function(a,c,b){b=b==null?0:b<0?Math.max(0,a.length+b):b;if(type",
    L"of a==\"string\"){if(typeof c!=\"string\"||c.length!=1)return-1;return ",
    L"a.indexOf(c,b)}for(b=b;b<a.length;b++)if(b in a&&a[b]===c)return b;retu",
    L"rn-1};var t,u,v,w;function x(){return e.navigator?e.navigator.userAgent",
    L":null}w=v=u=t=false;var y;if(y=x()){var z=e.navigator;t=y.indexOf(\"Ope",
    L"ra\")==0;u=!t&&y.indexOf(\"MSIE\")!=-1;v=!t&&y.indexOf(\"WebKit\")!=-1;",
    L"w=!t&&!v&&z.product==\"Gecko\"}var A=u,B=w,C=v,D;\na:{var E=\"\",F;if(t",
    L"&&e.opera){var G=e.opera.version;E=typeof G==\"function\"?G():G}else{if",
    L"(B)F=/rv\\:([^\\);]+)(\\)|;)/;else if(A)F=/MSIE\\s+([^\\);]+)(\\)|;)/;e",
    L"lse if(C)F=/WebKit\\/(\\S+)/;if(F){var H=F.exec(x());E=H?H[1]:\"\"}}if(",
    L"A){var I,J=e.document;I=J?J.documentMode:undefined;if(I>parseFloat(E)){",
    L"D=String(I);break a}}D=E}var K={};\nfunction L(a){var c;if(!(c=K[a])){c",
    L"=0;var b=k(String(D)).split(\".\"),d=k(String(a)).split(\".\"),g=Math.m",
    L"ax(b.length,d.length);for(var l=0;c==0&&l<g;l++){var X=b[l]||\"\",Y=d[l",
    L"]||\"\",Z=RegExp(\"(\\\\d*)(\\\\D*)\",\"g\"),$=RegExp(\"(\\\\d*)(\\\\D*",
    L")\",\"g\");do{var m=Z.exec(X)||[\"\",\"\",\"\"],n=$.exec(Y)||[\"\",\"\"",
    L",\"\"];if(m[0].length==0&&n[0].length==0)break;c=o(m[1].length==0?0:par",
    L"seInt(m[1],10),n[1].length==0?0:parseInt(n[1],10))||o(m[2].length==0,n[",
    L"2].length==0)||o(m[2],n[2])}while(c==0)}c=K[a]=c>=0}return c};!A||L(\"9",
    L"\");A&&L(\"9\");var M=\"StopIteration\"in e?e.StopIteration:Error(\"Sto",
    L"pIteration\");function N(){}N.prototype.next=function(){throw M;};funct",
    L"ion O(a,c,b,d,g){this.a=!!c;a&&P(this,a,d);this.d=g!=undefined?g:this.c",
    L"||0;if(this.a)this.d*=-1;this.f=!b}h(O,N);O.prototype.b=null;O.prototyp",
    L"e.c=0;O.prototype.e=false;function P(a,c,b,d){if(a.b=c)a.c=typeof b==\"",
    L"number\"?b:a.b.nodeType!=1?0:a.a?-1:1;if(typeof d==\"number\")a.d=d}\nO",
    L".prototype.next=function(){var a;if(this.e){if(!this.b||this.f&&this.d=",
    L"=0)throw M;a=this.b;var c=this.a?-1:1;if(this.c==c){var b=this.a?a.last",
    L"Child:a.firstChild;b?P(this,b):P(this,a,c*-1)}else(b=this.a?a.previousS",
    L"ibling:a.nextSibling)?P(this,b):P(this,a.parentNode,c*-1);this.d+=this.",
    L"c*(this.a?-1:1)}else this.e=true;a=this.b;if(!this.b)throw M;return a};",
    L"\nO.prototype.splice=function(){var a=this.b,c=this.a?1:-1;if(this.c==c",
    L"){this.c=c*-1;this.d+=this.c*(this.a?-1:1)}this.a=!this.a;O.prototype.n",
    L"ext.call(this);this.a=!this.a;c=arguments[0];var b=f(c);c=b==\"array\"|",
    L"|b==\"object\"&&typeof c.length==\"number\"?arguments[0]:arguments;for(",
    L"b=c.length-1;b>=0;b--)a.parentNode&&a.parentNode.insertBefore(c[b],a.ne",
    L"xtSibling);a&&a.parentNode&&a.parentNode.removeChild(a)};function Q(a,c",
    L",b,d){O.call(this,a,c,b,null,d)}h(Q,O);Q.prototype.next=function(){do Q",
    L".g.next.call(this);while(this.c==-1);return this.b};var aa={\"class\":",
    L"\"className\",readonly:\"readOnly\"},R=[\"async\",\"autofocus\",\"autop",
    L"lay\",\"checked\",\"compact\",\"complete\",\"controls\",\"declare\",\"d",
    L"efaultchecked\",\"defaultselected\",\"defer\",\"disabled\",\"draggable",
    L"\",\"ended\",\"formnovalidate\",\"hidden\",\"indeterminate\",\"isconten",
    L"teditable\",\"ismap\",\"itemscope\",\"loop\",\"multiple\",\"muted\",\"n",
    L"ohref\",\"noresize\",\"noshade\",\"novalidate\",\"nowrap\",\"open\",\"p",
    L"aused\",\"pubdate\",\"readonly\",\"required\",\"reversed\",\"scoped\",",
    L"\"seamless\",\"seeking\",\"selected\",\"spellcheck\",\"truespeed\",\"wi",
    L"llvalidate\"];\nfunction ba(a,c){if(8==a.nodeType)return null;c=c.toLow",
    L"erCase();if(c==\"style\"){var b=k(a.style.cssText).toLowerCase();return",
    L" b.charAt(b.length-1)==\";\"?b:b+\";\"}b=a.getAttributeNode(c);if(A)if(",
    L"!b&&L(8)&&s(R,c)>=0)b=a[c];if(!b)return null;if(s(R,c)>=0)return A&&b.v",
    L"alue==\"false\"?null:\"true\";return b.specified?b.value:null};\nvar ca",
    L"=[\"checkbox\",\"radio\"];function S(a){var c=a.tagName.toUpperCase();i",
    L"f(c==\"OPTION\")return true;if(c==\"INPUT\")if(s(ca,a.type)>=0)return t",
    L"rue;return false};function T(a,c){var b=null;b=c.toLowerCase();if(\"sty",
    L"le\"==c.toLowerCase()){if((b=a.style)&&typeof b!=\"string\")b=b.cssText",
    L";return b}if(\"selected\"==b||\"checked\"==b&&S(a)){var d;if(S(a)){d=\"",
    L"selected\";b=a.type&&a.type.toLowerCase();if(\"checkbox\"==b||\"radio\"",
    L"==b)d=\"checked\";d=!!a[d]}else d=false;return d?\"true\":null}var g=a.",
    L"tagName&&\"A\"==a.tagName.toUpperCase();try{d=a[aa[c]||c]}catch(l){}if(",
    L"!(b=b==\"href\"&&g)){if(!(b=d==null)){b=f(d);b=b==\"object\"||b==\"arra",
    L"y\"||b==\"function\"}b=b}b=b?ba(a,c):d;return b!=null?\nb.toString():nu",
    L"ll}var U=\"_\".split(\".\"),V=e;!(U[0]in V)&&V.execScript&&V.execScript",
    L"(\"var \"+U[0]);for(var W;U.length&&(W=U.shift());)if(!U.length&&T!==un",
    L"defined)V[W]=T;else V=V[W]?V[W]:V[W]={};; return _.apply(null,arguments",
    L");}",
    NULL
};

const wchar_t* const GET_TEXT[] = {
    L"function(){var j=this;\nfunction k(a){var b=typeof a;if(b==\"object\")i",
    L"f(a){if(a instanceof Array||!(a instanceof Object)&&Object.prototype.to",
    L"String.call(a)==\"[object Array]\"||typeof a.length==\"number\"&&typeof",
    L" a.splice!=\"undefined\"&&typeof a.propertyIsEnumerable!=\"undefined\"&",
    L"&!a.propertyIsEnumerable(\"splice\"))return\"array\";if(!(a instanceof ",
    L"Object)&&(Object.prototype.toString.call(a)==\"[object Function]\"||typ",
    L"eof a.call!=\"undefined\"&&typeof a.propertyIsEnumerable!=\"undefined\"",
    L"&&!a.propertyIsEnumerable(\"call\")))return\"function\"}else return\"nu",
    L"ll\";else if(b==\n\"function\"&&typeof a.call==\"undefined\")return\"ob",
    L"ject\";return b}function m(a){var b=k(a);return b==\"array\"||b==\"obje",
    L"ct\"&&typeof a.length==\"number\"}function n(a){return typeof a==\"stri",
    L"ng\"}function o(a,b){function c(){}c.prototype=b.prototype;a.h=b.protot",
    L"ype;a.prototype=new c};function p(a){this.stack=Error().stack||\"\";if(",
    L"a)this.message=String(a)}o(p,Error);p.prototype.name=\"CustomError\";fu",
    L"nction aa(a){for(var b=1;b<arguments.length;b++){var c=String(arguments",
    L"[b]).replace(/\\$/g,\"$$$$\");a=a.replace(/\\%s/,c)}return a}function q",
    L"(a){return a.replace(/[\\s\\xa0]+/g,\" \").replace(/^\\s+|\\s+$/g,\"\")",
    L"}function r(a){return a.replace(/^[\\s\\xa0]+|[\\s\\xa0]+$/g,\"\")}func",
    L"tion s(a,b){if(a<b)return-1;else if(a>b)return 1;return 0};function t(a",
    L",b){b.unshift(a);p.call(this,aa.apply(null,b));b.shift();this.i=a}o(t,p",
    L");t.prototype.name=\"AssertionError\";function u(a,b){if(!a){var c=Arra",
    L"y.prototype.slice.call(arguments,2),d=\"Assertion failed\";if(b){d+=\":",
    L" \"+b;var e=c}throw new t(\"\"+d,e||[]);}return a};var w=Array.prototyp",
    L"e,x=w.indexOf?function(a,b,c){u(a.length!=null);return w.indexOf.call(a",
    L",b,c)}:function(a,b,c){c=c==null?0:c<0?Math.max(0,a.length+c):c;if(n(a)",
    L"){if(!n(b)||b.length!=1)return-1;return a.indexOf(b,c)}for(c=c;c<a.leng",
    L"th;c++)if(c in a&&a[c]===b)return c;return-1},y=w.forEach?function(a,b,",
    L"c){u(a.length!=null);w.forEach.call(a,b,c)}:function(a,b,c){var d=a.len",
    L"gth,e=n(a)?a.split(\"\"):a;for(var f=0;f<d;f++)f in e&&b.call(c,e[f],f,",
    L"a)},ba=w.some?function(a,b,c){u(a.length!=null);return w.some.call(a,\n",
    L"b,c)}:function(a,b,c){var d=a.length,e=n(a)?a.split(\"\"):a;for(var f=0",
    L";f<d;f++)if(f in e&&b.call(c,e[f],f,a))return true;return false};functi",
    L"on z(){return w.concat.apply(w,arguments)}function ca(a){if(k(a)==\"arr",
    L"ay\")return z(a);if(k(a)==\"array\")a=z(a);else{var b=[],c=0;for(var d=",
    L"a.length;c<d;c++)b[c]=a[c];a=b}return a};var A,B,C,D;function da(){retu",
    L"rn j.navigator?j.navigator.userAgent:null}D=C=B=A=false;var E;if(E=da()",
    L"){var ea=j.navigator;A=E.indexOf(\"Opera\")==0;B=!A&&E.indexOf(\"MSIE\"",
    L")!=-1;C=!A&&E.indexOf(\"WebKit\")!=-1;D=!A&&!C&&ea.product==\"Gecko\"}v",
    L"ar fa=A,F=B,ga=D,ha=C,G;\na:{var H=\"\",I;if(fa&&j.opera){var J=j.opera",
    L".version;H=typeof J==\"function\"?J():J}else{if(ga)I=/rv\\:([^\\);]+)(",
    L"\\)|;)/;else if(F)I=/MSIE\\s+([^\\);]+)(\\)|;)/;else if(ha)I=/WebKit\\/",
    L"(\\S+)/;if(I){var ia=I.exec(da());H=ia?ia[1]:\"\"}}if(F){var L,ja=j.doc",
    L"ument;L=ja?ja.documentMode:undefined;if(L>parseFloat(H)){G=String(L);br",
    L"eak a}}G=H}var ka={};\nfunction M(a){var b;if(!(b=ka[a])){b=0;var c=r(S",
    L"tring(G)).split(\".\"),d=r(String(a)).split(\".\"),e=Math.max(c.length,",
    L"d.length);for(var f=0;b==0&&f<e;f++){var i=c[f]||\"\",K=d[f]||\"\",g=Re",
    L"gExp(\"(\\\\d*)(\\\\D*)\",\"g\"),h=RegExp(\"(\\\\d*)(\\\\D*)\",\"g\");d",
    L"o{var l=g.exec(i)||[\"\",\"\",\"\"],v=h.exec(K)||[\"\",\"\",\"\"];if(l[",
    L"0].length==0&&v[0].length==0)break;b=s(l[1].length==0?0:parseInt(l[1],1",
    L"0),v[1].length==0?0:parseInt(v[1],10))||s(l[2].length==0,v[2].length==0",
    L")||s(l[2],v[2])}while(b==0)}b=ka[a]=b>=0}return b};!F||M(\"9\");F&&M(\"",
    L"9\");function N(a,b){this.width=a;this.height=b}N.prototype.toString=fu",
    L"nction(){return\"(\"+this.width+\" x \"+this.height+\")\"};function O(a",
    L"){return a.nodeType==9?a:a.ownerDocument||a.document}function la(a,b){v",
    L"ar c=[];return ma(a,b,c,true)?c[0]:undefined}function ma(a,b,c,d){if(a!",
    L"=null){var e=0;for(var f;f=a.childNodes[e];e++){if(b(f)){c.push(f);if(d",
    L")return true}if(ma(f,b,c,d))return true}}return false}function na(a,b,c",
    L",d){if(!c)a=a.parentNode;c=d==null;for(var e=0;a&&(c||e<=d);){if(b(a))r",
    L"eturn a;a=a.parentNode;e++}return null};function oa(a,b){var c;if(typeo",
    L"f b.selectSingleNode!=\"undefined\"){c=O(b);typeof c.setProperty!=\"und",
    L"efined\"&&c.setProperty(\"SelectionLanguage\",\"XPath\");c=b.selectSing",
    L"leNode(a)}else if(document.implementation.hasFeature(\"XPath\",\"3.0\")",
    L"){c=O(b);var d=c.createNSResolver(c.documentElement);c=c.evaluate(a,b,d",
    L",XPathResult.FIRST_ORDERED_NODE_TYPE,null).singleNodeValue}else c=null;",
    L"if(!c)return null;if(c.nodeType!=1)throw Error(\"Returned node is not a",
    L"n element: \"+a);return c};var P=\"StopIteration\"in j?j.StopIteration:",
    L"Error(\"StopIteration\");function Q(){}Q.prototype.next=function(){thro",
    L"w P;};Q.prototype.e=function(){return this};function pa(a){if(a instanc",
    L"eof Q)return a;if(typeof a.e==\"function\")return a.e(false);if(m(a)){v",
    L"ar b=0,c=new Q;c.next=function(){for(;;){if(b>=a.length)throw P;if(b in",
    L" a)return a[b++];else b++}};return c}throw Error(\"Not implemented\");}",
    L"\nfunction qa(a,b,c){if(m(a))try{y(a,b,c)}catch(d){if(d!==P)throw d;}el",
    L"se{a=pa(a);try{for(;;)b.call(c,a.next(),undefined,a)}catch(e){if(e!==P)",
    L"throw e;}}}function ra(a){if(m(a))return ca(a);a=pa(a);var b=[];qa(a,fu",
    L"nction(c){b.push(c)});return b};function R(a,b,c,d,e){this.a=!!b;a&&S(t",
    L"his,a,d);this.d=e!=undefined?e:this.c||0;if(this.a)this.d*=-1;this.g=!c",
    L"}o(R,Q);R.prototype.b=null;R.prototype.c=0;R.prototype.f=false;function",
    L" S(a,b,c,d){if(a.b=b)a.c=typeof c==\"number\"?c:a.b.nodeType!=1?0:a.a?-",
    L"1:1;if(typeof d==\"number\")a.d=d}\nR.prototype.next=function(){var a;i",
    L"f(this.f){if(!this.b||this.g&&this.d==0)throw P;a=this.b;var b=this.a?-",
    L"1:1;if(this.c==b){var c=this.a?a.lastChild:a.firstChild;c?S(this,c):S(t",
    L"his,a,b*-1)}else(c=this.a?a.previousSibling:a.nextSibling)?S(this,c):S(",
    L"this,a.parentNode,b*-1);this.d+=this.c*(this.a?-1:1)}else this.f=true;a",
    L"=this.b;if(!this.b)throw P;return a};\nR.prototype.splice=function(){va",
    L"r a=this.b,b=this.a?1:-1;if(this.c==b){this.c=b*-1;this.d+=this.c*(this",
    L".a?-1:1)}this.a=!this.a;R.prototype.next.call(this);this.a=!this.a;b=m(",
    L"arguments[0])?arguments[0]:arguments;for(var c=b.length-1;c>=0;c--)a.pa",
    L"rentNode&&a.parentNode.insertBefore(b[c],a.nextSibling);a&&a.parentNode",
    L"&&a.parentNode.removeChild(a)};function T(a,b,c,d){R.call(this,a,b,c,nu",
    L"ll,d)}o(T,R);T.prototype.next=function(){do T.h.next.call(this);while(t",
    L"his.c==-1);return this.b};function sa(a,b){var c=O(a);if(c.defaultView&",
    L"&c.defaultView.getComputedStyle)if(c=c.defaultView.getComputedStyle(a,n",
    L"ull))return c[b]||c.getPropertyValue(b);return\"\"}var ta={};function u",
    L"a(a){return ta[a]||(ta[a]=String(a).replace(/\\-([a-z])/g,function(b,c)",
    L"{return c.toUpperCase()}))};function U(a,b){return!!a&&a.nodeType==1&&(",
    L"!b||a.tagName.toUpperCase()==b)}\nvar va=[\"async\",\"autofocus\",\"aut",
    L"oplay\",\"checked\",\"compact\",\"complete\",\"controls\",\"declare\",",
    L"\"defaultchecked\",\"defaultselected\",\"defer\",\"disabled\",\"draggab",
    L"le\",\"ended\",\"formnovalidate\",\"hidden\",\"indeterminate\",\"iscont",
    L"enteditable\",\"ismap\",\"itemscope\",\"loop\",\"multiple\",\"muted\",",
    L"\"nohref\",\"noresize\",\"noshade\",\"novalidate\",\"nowrap\",\"open\",",
    L"\"paused\",\"pubdate\",\"readonly\",\"required\",\"reversed\",\"scoped",
    L"\",\"seamless\",\"seeking\",\"selected\",\"spellcheck\",\"truespeed\",",
    L"\"willvalidate\"];\nfunction wa(a,b){if(8==a.nodeType)return null;b=b.t",
    L"oLowerCase();if(b==\"style\"){var c=r(a.style.cssText).toLowerCase();re",
    L"turn c.charAt(c.length-1)==\";\"?c:c+\";\"}c=a.getAttributeNode(b);if(F",
    L")if(!c&&M(8)&&x(va,b)>=0)c=a[b];if(!c)return null;if(x(va,b)>=0)return ",
    L"F&&c.value==\"false\"?null:\"true\";return c.specified?c.value:null}fun",
    L"ction V(a){for(a=a.parentNode;a&&a.nodeType!=1&&a.nodeType!=9&&a.nodeTy",
    L"pe!=11;)a=a.parentNode;return U(a)?a:null}function W(a,b){b=ua(b);retur",
    L"n sa(a,b)||xa(a,b)}\nfunction xa(a,b){var c=(a.currentStyle||a.style)[b",
    L"];if(c!=\"inherit\")return c!==undefined?c:null;return(c=V(a))?xa(c,b):",
    L"null}\nfunction ya(a){if(k(a.getBBox)==\"function\")return a.getBBox();",
    L"var b;var c=fa&&!M(\"10\");if((sa(a,\"display\")||(a.currentStyle?a.cur",
    L"rentStyle.display:null)||a.style.display)!=\"none\")b=c?new N(a.offsetW",
    L"idth||a.clientWidth,a.offsetHeight||a.clientHeight):new N(a.offsetWidth",
    L",a.offsetHeight);else{b=a.style;var d=b.display,e=b.visibility,f=b.posi",
    L"tion;b.visibility=\"hidden\";b.position=\"absolute\";b.display=\"inline",
    L"\";if(c){c=a.offsetWidth||a.clientWidth;a=a.offsetHeight||a.clientHeigh",
    L"t}else{c=a.offsetWidth;a=\na.offsetHeight}b.display=d;b.position=f;b.vi",
    L"sibility=e;b=new N(c,a)}return b}\nfunction X(a){function b(e){if(W(e,",
    L"\"display\")==\"none\")return false;e=V(e);return!e||b(e)}function c(e)",
    L"{var f=ya(e);if(f.height>0&&f.width>0)return true;return ha&&ba(e.child",
    L"Nodes,function(i){return U(i)&&c(i)})}if(!U(a))throw Error(\"Argument t",
    L"o isShown must be of type Element\");if(U(a,\"OPTION\")||U(a,\"OPTGROUP",
    L"\")){var d=na(a,function(e){return U(e,\"SELECT\")});return!!d&&X(d)}if",
    L"(U(a,\"MAP\")){if(!a.name)return false;d=O(a);d=d.evaluate?oa('/descend",
    L"ant::*[@usemap = \"#'+a.name+'\"]',d):la(d,function(e){return U(e)&&\nw",
    L"a(e,\"usemap\")==\"#\"+a.name});return!!d&&X(d)}if(U(a,\"AREA\")){d=na(",
    L"a,function(e){return U(e,\"MAP\")});return!!d&&X(d)}if(U(a,\"INPUT\")&&",
    L"a.type.toLowerCase()==\"hidden\")return false;if(W(a,\"visibility\")==",
    L"\"hidden\")return false;if(!b(a))return false;if(za(a)==0)return false;",
    L"if(!c(a))return false;return true}\nfunction Aa(a){var b=\"\",c=Ba(a),d",
    L"=RegExp(String.fromCharCode(160)+\"$\",\"gm\"),e=RegExp(\"^\"+String.fr",
    L"omCharCode(160),\"gm\"),f=false;y(c,function(i,K){if(i.nodeType==3){var",
    L" g;if(i.nodeType!=3)throw Error(\"Cannot extract text from a node whose",
    L" type is not #text\");if(q(i.nodeValue)==\" \")g=\" \";else if((g=V(i))",
    L"&&X(g)){g=i.nodeValue;g=g.replace(RegExp(String.fromCharCode(160),\"gm",
    L"\"),\" \");g=g=q(g)}else g=\"\";g=r(g);if(g.length){var h;a:{for(h=K-1;",
    L"h>=0;h--){var l=c[h];if(l.nodeType!=3){if(U(l,\"BR\"))h=true;else if(U(",
    L"l)){h=\nW(l,\"display\");h=h==\"block\"||h==\"inline-block\"}else h=fal",
    L"se;break a}}h=false}if(h)g=\"\\n\"+g;else if(K!=0){h=i.nodeValue.match(",
    L"/^\\s/)||i.nodeValue.match(e);if(f||h)g=\" \"+g}}f=i.nodeValue.match(/",
    L"\\s$/)||i.nodeValue.match(d);b+=g}});return b=r(b.replace(/ +/g,\" \"))",
    L"}function Ba(a){a=new T(a);try{a.next();return ra(a)}catch(b){}return[]",
    L"}\nfunction za(a){if(F){if(W(a,\"position\")==\"relative\")return 1;a=W",
    L"(a,\"filter\");return(a=a.match(/^alpha\\(opacity=(\\d*)\\)/)||a.match(",
    L"/^progid:DXImageTransform.Microsoft.Alpha\\(Opacity=(\\d*)\\)/))?Number",
    L"(a[1])/100:1}else return Ca(a)}function Ca(a){var b=1,c=W(a,\"opacity\"",
    L");if(c)b=Number(c);if(a=V(a))b*=Ca(a);return b};\nfunction Da(a){for(;a",
    L";){if(a.tagName&&a.tagName.toLowerCase()==\"head\")return true;try{a=a.",
    L"parentNode}catch(b){return false}}return false};function Ea(a){if(Da(a)",
    L"){var b=O(a);if(a.tagName.toUpperCase()==\"TITLE\"&&(b?b.parentWindow||",
    L"b.defaultView:window)==j.top)return r(b.title);return\"\"}return Aa(a)}",
    L"var Y=\"_\".split(\".\"),Z=j;!(Y[0]in Z)&&Z.execScript&&Z.execScript(\"",
    L"var \"+Y[0]);for(var $;Y.length&&($=Y.shift());)if(!Y.length&&Ea!==unde",
    L"fined)Z[$]=Ea;else Z=Z[$]?Z[$]:Z[$]={};; return _.apply(null,arguments)",
    L";}",
    NULL
};
}
#endif  // ATOMS_H__