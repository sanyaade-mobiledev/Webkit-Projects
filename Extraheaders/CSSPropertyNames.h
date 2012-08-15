/* This file is automatically generated from CSSPropertyNames.in by makeprop, do not edit */

#ifndef CSSPropertyNames_h
#define CSSPropertyNames_h

#include <string.h>
#include <wtf/HashFunctions.h>
#include <wtf/HashTraits.h>

namespace WTF {
class String;
}

namespace WebCore {

enum CSSPropertyID {
    CSSPropertyInvalid = 0,
    CSSPropertyColor = 1001,
    CSSPropertyDirection = 1002,
    CSSPropertyDisplay = 1003,
    CSSPropertyFont = 1004,
    CSSPropertyFontFamily = 1005,
    CSSPropertyFontSize = 1006,
    CSSPropertyFontStyle = 1007,
    CSSPropertyFontVariant = 1008,
    CSSPropertyFontWeight = 1009,
    CSSPropertyTextRendering = 1010,
    CSSPropertyWebkitFontFeatureSettings = 1011,
    CSSPropertyWebkitFontKerning = 1012,
    CSSPropertyWebkitFontSmoothing = 1013,
    CSSPropertyWebkitFontVariantLigatures = 1014,
    CSSPropertyWebkitLocale = 1015,
    CSSPropertyWebkitTextOrientation = 1016,
    CSSPropertyWebkitTextSizeAdjust = 1017,
    CSSPropertyWebkitWritingMode = 1018,
    CSSPropertyZoom = 1019,
    CSSPropertyLineHeight = 1020,
    CSSPropertyBackground = 1021,
    CSSPropertyBackgroundAttachment = 1022,
    CSSPropertyBackgroundClip = 1023,
    CSSPropertyBackgroundColor = 1024,
    CSSPropertyBackgroundImage = 1025,
    CSSPropertyBackgroundOrigin = 1026,
    CSSPropertyBackgroundPosition = 1027,
    CSSPropertyBackgroundPositionX = 1028,
    CSSPropertyBackgroundPositionY = 1029,
    CSSPropertyBackgroundRepeat = 1030,
    CSSPropertyBackgroundRepeatX = 1031,
    CSSPropertyBackgroundRepeatY = 1032,
    CSSPropertyBackgroundSize = 1033,
    CSSPropertyBorder = 1034,
    CSSPropertyBorderBottom = 1035,
    CSSPropertyBorderBottomColor = 1036,
    CSSPropertyBorderBottomLeftRadius = 1037,
    CSSPropertyBorderBottomRightRadius = 1038,
    CSSPropertyBorderBottomStyle = 1039,
    CSSPropertyBorderBottomWidth = 1040,
    CSSPropertyBorderCollapse = 1041,
    CSSPropertyBorderColor = 1042,
    CSSPropertyBorderImage = 1043,
    CSSPropertyBorderImageOutset = 1044,
    CSSPropertyBorderImageRepeat = 1045,
    CSSPropertyBorderImageSlice = 1046,
    CSSPropertyBorderImageSource = 1047,
    CSSPropertyBorderImageWidth = 1048,
    CSSPropertyBorderLeft = 1049,
    CSSPropertyBorderLeftColor = 1050,
    CSSPropertyBorderLeftStyle = 1051,
    CSSPropertyBorderLeftWidth = 1052,
    CSSPropertyBorderRadius = 1053,
    CSSPropertyBorderRight = 1054,
    CSSPropertyBorderRightColor = 1055,
    CSSPropertyBorderRightStyle = 1056,
    CSSPropertyBorderRightWidth = 1057,
    CSSPropertyBorderSpacing = 1058,
    CSSPropertyBorderStyle = 1059,
    CSSPropertyBorderTop = 1060,
    CSSPropertyBorderTopColor = 1061,
    CSSPropertyBorderTopLeftRadius = 1062,
    CSSPropertyBorderTopRightRadius = 1063,
    CSSPropertyBorderTopStyle = 1064,
    CSSPropertyBorderTopWidth = 1065,
    CSSPropertyBorderWidth = 1066,
    CSSPropertyBottom = 1067,
    CSSPropertyBoxShadow = 1068,
    CSSPropertyBoxSizing = 1069,
    CSSPropertyCaptionSide = 1070,
    CSSPropertyClear = 1071,
    CSSPropertyClip = 1072,
    CSSPropertyContent = 1073,
    CSSPropertyCounterIncrement = 1074,
    CSSPropertyCounterReset = 1075,
    CSSPropertyCursor = 1076,
    CSSPropertyEmptyCells = 1077,
    CSSPropertyFloat = 1078,
    CSSPropertyFontStretch = 1079,
    CSSPropertyHeight = 1080,
    CSSPropertyImageRendering = 1081,
    CSSPropertyLeft = 1082,
    CSSPropertyLetterSpacing = 1083,
    CSSPropertyListStyle = 1084,
    CSSPropertyListStyleImage = 1085,
    CSSPropertyListStylePosition = 1086,
    CSSPropertyListStyleType = 1087,
    CSSPropertyMargin = 1088,
    CSSPropertyMarginBottom = 1089,
    CSSPropertyMarginLeft = 1090,
    CSSPropertyMarginRight = 1091,
    CSSPropertyMarginTop = 1092,
    CSSPropertyMaxHeight = 1093,
    CSSPropertyMaxWidth = 1094,
    CSSPropertyMinHeight = 1095,
    CSSPropertyMinWidth = 1096,
    CSSPropertyOpacity = 1097,
    CSSPropertyOrphans = 1098,
    CSSPropertyOutline = 1099,
    CSSPropertyOutlineColor = 1100,
    CSSPropertyOutlineOffset = 1101,
    CSSPropertyOutlineStyle = 1102,
    CSSPropertyOutlineWidth = 1103,
    CSSPropertyOverflow = 1104,
    CSSPropertyOverflowX = 1105,
    CSSPropertyOverflowY = 1106,
    CSSPropertyPadding = 1107,
    CSSPropertyPaddingBottom = 1108,
    CSSPropertyPaddingLeft = 1109,
    CSSPropertyPaddingRight = 1110,
    CSSPropertyPaddingTop = 1111,
    CSSPropertyPage = 1112,
    CSSPropertyPageBreakAfter = 1113,
    CSSPropertyPageBreakBefore = 1114,
    CSSPropertyPageBreakInside = 1115,
    CSSPropertyPointerEvents = 1116,
    CSSPropertyPosition = 1117,
    CSSPropertyQuotes = 1118,
    CSSPropertyResize = 1119,
    CSSPropertyRight = 1120,
    CSSPropertySize = 1121,
    CSSPropertySrc = 1122,
    CSSPropertySpeak = 1123,
    CSSPropertyTableLayout = 1124,
    CSSPropertyTabSize = 1125,
    CSSPropertyTextAlign = 1126,
    CSSPropertyTextDecoration = 1127,
    CSSPropertyTextIndent = 1128,
    CSSPropertyTextLineThrough = 1129,
    CSSPropertyTextLineThroughColor = 1130,
    CSSPropertyTextLineThroughMode = 1131,
    CSSPropertyTextLineThroughStyle = 1132,
    CSSPropertyTextLineThroughWidth = 1133,
    CSSPropertyTextOverflow = 1134,
    CSSPropertyTextOverline = 1135,
    CSSPropertyTextOverlineColor = 1136,
    CSSPropertyTextOverlineMode = 1137,
    CSSPropertyTextOverlineStyle = 1138,
    CSSPropertyTextOverlineWidth = 1139,
    CSSPropertyTextShadow = 1140,
    CSSPropertyTextTransform = 1141,
    CSSPropertyTextUnderline = 1142,
    CSSPropertyTextUnderlineColor = 1143,
    CSSPropertyTextUnderlineMode = 1144,
    CSSPropertyTextUnderlineStyle = 1145,
    CSSPropertyTextUnderlineWidth = 1146,
    CSSPropertyTop = 1147,
    CSSPropertyUnicodeBidi = 1148,
    CSSPropertyUnicodeRange = 1149,
    CSSPropertyVerticalAlign = 1150,
    CSSPropertyVisibility = 1151,
    CSSPropertyWhiteSpace = 1152,
    CSSPropertyWidows = 1153,
    CSSPropertyWidth = 1154,
    CSSPropertyWordBreak = 1155,
    CSSPropertyWordSpacing = 1156,
    CSSPropertyWordWrap = 1157,
    CSSPropertyZIndex = 1158,
    CSSPropertyWebkitAnimation = 1159,
    CSSPropertyWebkitAnimationDelay = 1160,
    CSSPropertyWebkitAnimationDirection = 1161,
    CSSPropertyWebkitAnimationDuration = 1162,
    CSSPropertyWebkitAnimationFillMode = 1163,
    CSSPropertyWebkitAnimationIterationCount = 1164,
    CSSPropertyWebkitAnimationName = 1165,
    CSSPropertyWebkitAnimationPlayState = 1166,
    CSSPropertyWebkitAnimationTimingFunction = 1167,
    CSSPropertyWebkitAppearance = 1168,
    CSSPropertyWebkitAspectRatio = 1169,
    CSSPropertyWebkitBackfaceVisibility = 1170,
    CSSPropertyWebkitBackgroundClip = 1171,
    CSSPropertyWebkitBackgroundComposite = 1172,
    CSSPropertyWebkitBackgroundOrigin = 1173,
    CSSPropertyWebkitBackgroundSize = 1174,
    CSSPropertyWebkitBorderAfter = 1175,
    CSSPropertyWebkitBorderAfterColor = 1176,
    CSSPropertyWebkitBorderAfterStyle = 1177,
    CSSPropertyWebkitBorderAfterWidth = 1178,
    CSSPropertyWebkitBorderBefore = 1179,
    CSSPropertyWebkitBorderBeforeColor = 1180,
    CSSPropertyWebkitBorderBeforeStyle = 1181,
    CSSPropertyWebkitBorderBeforeWidth = 1182,
    CSSPropertyWebkitBorderEnd = 1183,
    CSSPropertyWebkitBorderEndColor = 1184,
    CSSPropertyWebkitBorderEndStyle = 1185,
    CSSPropertyWebkitBorderEndWidth = 1186,
    CSSPropertyWebkitBorderFit = 1187,
    CSSPropertyWebkitBorderHorizontalSpacing = 1188,
    CSSPropertyWebkitBorderImage = 1189,
    CSSPropertyWebkitBorderRadius = 1190,
    CSSPropertyWebkitBorderStart = 1191,
    CSSPropertyWebkitBorderStartColor = 1192,
    CSSPropertyWebkitBorderStartStyle = 1193,
    CSSPropertyWebkitBorderStartWidth = 1194,
    CSSPropertyWebkitBorderVerticalSpacing = 1195,
    CSSPropertyWebkitBoxAlign = 1196,
    CSSPropertyWebkitBoxDirection = 1197,
    CSSPropertyWebkitBoxFlex = 1198,
    CSSPropertyWebkitBoxFlexGroup = 1199,
    CSSPropertyWebkitBoxLines = 1200,
    CSSPropertyWebkitBoxOrdinalGroup = 1201,
    CSSPropertyWebkitBoxOrient = 1202,
    CSSPropertyWebkitBoxPack = 1203,
    CSSPropertyWebkitBoxReflect = 1204,
    CSSPropertyWebkitBoxShadow = 1205,
    CSSPropertyWebkitColorCorrection = 1206,
    CSSPropertyWebkitColumnAxis = 1207,
    CSSPropertyWebkitColumnBreakAfter = 1208,
    CSSPropertyWebkitColumnBreakBefore = 1209,
    CSSPropertyWebkitColumnBreakInside = 1210,
    CSSPropertyWebkitColumnCount = 1211,
    CSSPropertyWebkitColumnGap = 1212,
    CSSPropertyWebkitColumnRule = 1213,
    CSSPropertyWebkitColumnRuleColor = 1214,
    CSSPropertyWebkitColumnRuleStyle = 1215,
    CSSPropertyWebkitColumnRuleWidth = 1216,
    CSSPropertyWebkitColumnSpan = 1217,
    CSSPropertyWebkitColumnWidth = 1218,
    CSSPropertyWebkitColumns = 1219,
    CSSPropertyWebkitBoxDecorationBreak = 1220,
    CSSPropertyWebkitFilter = 1221,
    CSSPropertyWebkitAlignContent = 1222,
    CSSPropertyWebkitAlignItems = 1223,
    CSSPropertyWebkitAlignSelf = 1224,
    CSSPropertyWebkitFlex = 1225,
    CSSPropertyWebkitFlexDirection = 1226,
    CSSPropertyWebkitFlexFlow = 1227,
    CSSPropertyWebkitFlexWrap = 1228,
    CSSPropertyWebkitJustifyContent = 1229,
    CSSPropertyWebkitFontSizeDelta = 1230,
    CSSPropertyWebkitGridColumns = 1231,
    CSSPropertyWebkitGridRows = 1232,
    CSSPropertyWebkitGridColumn = 1233,
    CSSPropertyWebkitGridRow = 1234,
    CSSPropertyWebkitHighlight = 1235,
    CSSPropertyWebkitHyphenateCharacter = 1236,
    CSSPropertyWebkitHyphenateLimitAfter = 1237,
    CSSPropertyWebkitHyphenateLimitBefore = 1238,
    CSSPropertyWebkitHyphenateLimitLines = 1239,
    CSSPropertyWebkitHyphens = 1240,
    CSSPropertyWebkitLineBoxContain = 1241,
    CSSPropertyWebkitLineAlign = 1242,
    CSSPropertyWebkitLineBreak = 1243,
    CSSPropertyWebkitLineClamp = 1244,
    CSSPropertyWebkitLineGrid = 1245,
    CSSPropertyWebkitLineSnap = 1246,
    CSSPropertyWebkitLogicalWidth = 1247,
    CSSPropertyWebkitLogicalHeight = 1248,
    CSSPropertyWebkitMarginAfterCollapse = 1249,
    CSSPropertyWebkitMarginBeforeCollapse = 1250,
    CSSPropertyWebkitMarginBottomCollapse = 1251,
    CSSPropertyWebkitMarginTopCollapse = 1252,
    CSSPropertyWebkitMarginCollapse = 1253,
    CSSPropertyWebkitMarginAfter = 1254,
    CSSPropertyWebkitMarginBefore = 1255,
    CSSPropertyWebkitMarginEnd = 1256,
    CSSPropertyWebkitMarginStart = 1257,
    CSSPropertyWebkitMarquee = 1258,
    CSSPropertyWebkitMarqueeDirection = 1259,
    CSSPropertyWebkitMarqueeIncrement = 1260,
    CSSPropertyWebkitMarqueeRepetition = 1261,
    CSSPropertyWebkitMarqueeSpeed = 1262,
    CSSPropertyWebkitMarqueeStyle = 1263,
    CSSPropertyWebkitMask = 1264,
    CSSPropertyWebkitMaskAttachment = 1265,
    CSSPropertyWebkitMaskBoxImage = 1266,
    CSSPropertyWebkitMaskBoxImageOutset = 1267,
    CSSPropertyWebkitMaskBoxImageRepeat = 1268,
    CSSPropertyWebkitMaskBoxImageSlice = 1269,
    CSSPropertyWebkitMaskBoxImageSource = 1270,
    CSSPropertyWebkitMaskBoxImageWidth = 1271,
    CSSPropertyWebkitMaskClip = 1272,
    CSSPropertyWebkitMaskComposite = 1273,
    CSSPropertyWebkitMaskImage = 1274,
    CSSPropertyWebkitMaskOrigin = 1275,
    CSSPropertyWebkitMaskPosition = 1276,
    CSSPropertyWebkitMaskPositionX = 1277,
    CSSPropertyWebkitMaskPositionY = 1278,
    CSSPropertyWebkitMaskRepeat = 1279,
    CSSPropertyWebkitMaskRepeatX = 1280,
    CSSPropertyWebkitMaskRepeatY = 1281,
    CSSPropertyWebkitMaskSize = 1282,
    CSSPropertyWebkitMatchNearestMailBlockquoteColor = 1283,
    CSSPropertyWebkitMaxLogicalWidth = 1284,
    CSSPropertyWebkitMaxLogicalHeight = 1285,
    CSSPropertyWebkitMinLogicalWidth = 1286,
    CSSPropertyWebkitMinLogicalHeight = 1287,
    CSSPropertyWebkitNbspMode = 1288,
    CSSPropertyWebkitOrder = 1289,
    CSSPropertyWebkitPaddingAfter = 1290,
    CSSPropertyWebkitPaddingBefore = 1291,
    CSSPropertyWebkitPaddingEnd = 1292,
    CSSPropertyWebkitPaddingStart = 1293,
    CSSPropertyWebkitPerspective = 1294,
    CSSPropertyWebkitPerspectiveOrigin = 1295,
    CSSPropertyWebkitPerspectiveOriginX = 1296,
    CSSPropertyWebkitPerspectiveOriginY = 1297,
    CSSPropertyWebkitPrintColorAdjust = 1298,
    CSSPropertyWebkitRtlOrdering = 1299,
    CSSPropertyWebkitTextCombine = 1300,
    CSSPropertyWebkitTextDecorationsInEffect = 1301,
    CSSPropertyWebkitTextEmphasis = 1302,
    CSSPropertyWebkitTextEmphasisColor = 1303,
    CSSPropertyWebkitTextEmphasisPosition = 1304,
    CSSPropertyWebkitTextEmphasisStyle = 1305,
    CSSPropertyWebkitTextFillColor = 1306,
    CSSPropertyWebkitTextSecurity = 1307,
    CSSPropertyWebkitTextStroke = 1308,
    CSSPropertyWebkitTextStrokeColor = 1309,
    CSSPropertyWebkitTextStrokeWidth = 1310,
    CSSPropertyWebkitTransform = 1311,
    CSSPropertyWebkitTransformOrigin = 1312,
    CSSPropertyWebkitTransformOriginX = 1313,
    CSSPropertyWebkitTransformOriginY = 1314,
    CSSPropertyWebkitTransformOriginZ = 1315,
    CSSPropertyWebkitTransformStyle = 1316,
    CSSPropertyWebkitTransition = 1317,
    CSSPropertyWebkitTransitionDelay = 1318,
    CSSPropertyWebkitTransitionDuration = 1319,
    CSSPropertyWebkitTransitionProperty = 1320,
    CSSPropertyWebkitTransitionTimingFunction = 1321,
    CSSPropertyWebkitUserDrag = 1322,
    CSSPropertyWebkitUserModify = 1323,
    CSSPropertyWebkitUserSelect = 1324,
    CSSPropertyWebkitFlowInto = 1325,
    CSSPropertyWebkitFlowFrom = 1326,
    CSSPropertyWebkitRegionOverflow = 1327,
    CSSPropertyWebkitRegionBreakAfter = 1328,
    CSSPropertyWebkitRegionBreakBefore = 1329,
    CSSPropertyWebkitRegionBreakInside = 1330,
    CSSPropertyWebkitShapeInside = 1331,
    CSSPropertyWebkitShapeOutside = 1332,
    CSSPropertyWebkitWrapMargin = 1333,
    CSSPropertyWebkitWrapPadding = 1334,
    CSSPropertyWebkitWrapFlow = 1335,
    CSSPropertyWebkitWrapThrough = 1336,
    CSSPropertyWebkitWrap = 1337,
    CSSPropertyWebkitDashboardRegion = 1338,
    CSSPropertyClipPath = 1339,
    CSSPropertyClipRule = 1340,
    CSSPropertyMask = 1341,
    CSSPropertyEnableBackground = 1342,
    CSSPropertyFilter = 1343,
    CSSPropertyFloodColor = 1344,
    CSSPropertyFloodOpacity = 1345,
    CSSPropertyLightingColor = 1346,
    CSSPropertyStopColor = 1347,
    CSSPropertyStopOpacity = 1348,
    CSSPropertyColorInterpolation = 1349,
    CSSPropertyColorInterpolationFilters = 1350,
    CSSPropertyColorProfile = 1351,
    CSSPropertyColorRendering = 1352,
    CSSPropertyFill = 1353,
    CSSPropertyFillOpacity = 1354,
    CSSPropertyFillRule = 1355,
    CSSPropertyMarker = 1356,
    CSSPropertyMarkerEnd = 1357,
    CSSPropertyMarkerMid = 1358,
    CSSPropertyMarkerStart = 1359,
    CSSPropertyShapeRendering = 1360,
    CSSPropertyStroke = 1361,
    CSSPropertyStrokeDasharray = 1362,
    CSSPropertyStrokeDashoffset = 1363,
    CSSPropertyStrokeLinecap = 1364,
    CSSPropertyStrokeLinejoin = 1365,
    CSSPropertyStrokeMiterlimit = 1366,
    CSSPropertyStrokeOpacity = 1367,
    CSSPropertyStrokeWidth = 1368,
    CSSPropertyAlignmentBaseline = 1369,
    CSSPropertyBaselineShift = 1370,
    CSSPropertyDominantBaseline = 1371,
    CSSPropertyGlyphOrientationHorizontal = 1372,
    CSSPropertyGlyphOrientationVertical = 1373,
    CSSPropertyKerning = 1374,
    CSSPropertyTextAnchor = 1375,
    CSSPropertyVectorEffect = 1376,
    CSSPropertyWritingMode = 1377,
    CSSPropertyWebkitSvgShadow = 1378,
};

const int firstCSSProperty = 1001;
const int numCSSProperties = 378;
const int lastCSSProperty = 1378;
const size_t maxCSSPropertyNameLength = 43;
const char* const propertyNameStrings[378] = {
"color",
"direction",
"display",
"font",
"font-family",
"font-size",
"font-style",
"font-variant",
"font-weight",
"text-rendering",
"-webkit-font-feature-settings",
"-webkit-font-kerning",
"-webkit-font-smoothing",
"-webkit-font-variant-ligatures",
"-webkit-locale",
"-webkit-text-orientation",
"-webkit-text-size-adjust",
"-webkit-writing-mode",
"zoom",
"line-height",
"background",
"background-attachment",
"background-clip",
"background-color",
"background-image",
"background-origin",
"background-position",
"background-position-x",
"background-position-y",
"background-repeat",
"background-repeat-x",
"background-repeat-y",
"background-size",
"border",
"border-bottom",
"border-bottom-color",
"border-bottom-left-radius",
"border-bottom-right-radius",
"border-bottom-style",
"border-bottom-width",
"border-collapse",
"border-color",
"border-image",
"border-image-outset",
"border-image-repeat",
"border-image-slice",
"border-image-source",
"border-image-width",
"border-left",
"border-left-color",
"border-left-style",
"border-left-width",
"border-radius",
"border-right",
"border-right-color",
"border-right-style",
"border-right-width",
"border-spacing",
"border-style",
"border-top",
"border-top-color",
"border-top-left-radius",
"border-top-right-radius",
"border-top-style",
"border-top-width",
"border-width",
"bottom",
"box-shadow",
"box-sizing",
"caption-side",
"clear",
"clip",
"content",
"counter-increment",
"counter-reset",
"cursor",
"empty-cells",
"float",
"font-stretch",
"height",
"image-rendering",
"left",
"letter-spacing",
"list-style",
"list-style-image",
"list-style-position",
"list-style-type",
"margin",
"margin-bottom",
"margin-left",
"margin-right",
"margin-top",
"max-height",
"max-width",
"min-height",
"min-width",
"opacity",
"orphans",
"outline",
"outline-color",
"outline-offset",
"outline-style",
"outline-width",
"overflow",
"overflow-x",
"overflow-y",
"padding",
"padding-bottom",
"padding-left",
"padding-right",
"padding-top",
"page",
"page-break-after",
"page-break-before",
"page-break-inside",
"pointer-events",
"position",
"quotes",
"resize",
"right",
"size",
"src",
"speak",
"table-layout",
"tab-size",
"text-align",
"text-decoration",
"text-indent",
"text-line-through",
"text-line-through-color",
"text-line-through-mode",
"text-line-through-style",
"text-line-through-width",
"text-overflow",
"text-overline",
"text-overline-color",
"text-overline-mode",
"text-overline-style",
"text-overline-width",
"text-shadow",
"text-transform",
"text-underline",
"text-underline-color",
"text-underline-mode",
"text-underline-style",
"text-underline-width",
"top",
"unicode-bidi",
"unicode-range",
"vertical-align",
"visibility",
"white-space",
"widows",
"width",
"word-break",
"word-spacing",
"word-wrap",
"z-index",
"-webkit-animation",
"-webkit-animation-delay",
"-webkit-animation-direction",
"-webkit-animation-duration",
"-webkit-animation-fill-mode",
"-webkit-animation-iteration-count",
"-webkit-animation-name",
"-webkit-animation-play-state",
"-webkit-animation-timing-function",
"-webkit-appearance",
"-webkit-aspect-ratio",
"-webkit-backface-visibility",
"-webkit-background-clip",
"-webkit-background-composite",
"-webkit-background-origin",
"-webkit-background-size",
"-webkit-border-after",
"-webkit-border-after-color",
"-webkit-border-after-style",
"-webkit-border-after-width",
"-webkit-border-before",
"-webkit-border-before-color",
"-webkit-border-before-style",
"-webkit-border-before-width",
"-webkit-border-end",
"-webkit-border-end-color",
"-webkit-border-end-style",
"-webkit-border-end-width",
"-webkit-border-fit",
"-webkit-border-horizontal-spacing",
"-webkit-border-image",
"-webkit-border-radius",
"-webkit-border-start",
"-webkit-border-start-color",
"-webkit-border-start-style",
"-webkit-border-start-width",
"-webkit-border-vertical-spacing",
"-webkit-box-align",
"-webkit-box-direction",
"-webkit-box-flex",
"-webkit-box-flex-group",
"-webkit-box-lines",
"-webkit-box-ordinal-group",
"-webkit-box-orient",
"-webkit-box-pack",
"-webkit-box-reflect",
"-webkit-box-shadow",
"-webkit-color-correction",
"-webkit-column-axis",
"-webkit-column-break-after",
"-webkit-column-break-before",
"-webkit-column-break-inside",
"-webkit-column-count",
"-webkit-column-gap",
"-webkit-column-rule",
"-webkit-column-rule-color",
"-webkit-column-rule-style",
"-webkit-column-rule-width",
"-webkit-column-span",
"-webkit-column-width",
"-webkit-columns",
"-webkit-box-decoration-break",
"-webkit-filter",
"-webkit-align-content",
"-webkit-align-items",
"-webkit-align-self",
"-webkit-flex",
"-webkit-flex-direction",
"-webkit-flex-flow",
"-webkit-flex-wrap",
"-webkit-justify-content",
"-webkit-font-size-delta",
"-webkit-grid-columns",
"-webkit-grid-rows",
"-webkit-grid-column",
"-webkit-grid-row",
"-webkit-highlight",
"-webkit-hyphenate-character",
"-webkit-hyphenate-limit-after",
"-webkit-hyphenate-limit-before",
"-webkit-hyphenate-limit-lines",
"-webkit-hyphens",
"-webkit-line-box-contain",
"-webkit-line-align",
"-webkit-line-break",
"-webkit-line-clamp",
"-webkit-line-grid",
"-webkit-line-snap",
"-webkit-logical-width",
"-webkit-logical-height",
"-webkit-margin-after-collapse",
"-webkit-margin-before-collapse",
"-webkit-margin-bottom-collapse",
"-webkit-margin-top-collapse",
"-webkit-margin-collapse",
"-webkit-margin-after",
"-webkit-margin-before",
"-webkit-margin-end",
"-webkit-margin-start",
"-webkit-marquee",
"-webkit-marquee-direction",
"-webkit-marquee-increment",
"-webkit-marquee-repetition",
"-webkit-marquee-speed",
"-webkit-marquee-style",
"-webkit-mask",
"-webkit-mask-attachment",
"-webkit-mask-box-image",
"-webkit-mask-box-image-outset",
"-webkit-mask-box-image-repeat",
"-webkit-mask-box-image-slice",
"-webkit-mask-box-image-source",
"-webkit-mask-box-image-width",
"-webkit-mask-clip",
"-webkit-mask-composite",
"-webkit-mask-image",
"-webkit-mask-origin",
"-webkit-mask-position",
"-webkit-mask-position-x",
"-webkit-mask-position-y",
"-webkit-mask-repeat",
"-webkit-mask-repeat-x",
"-webkit-mask-repeat-y",
"-webkit-mask-size",
"-webkit-match-nearest-mail-blockquote-color",
"-webkit-max-logical-width",
"-webkit-max-logical-height",
"-webkit-min-logical-width",
"-webkit-min-logical-height",
"-webkit-nbsp-mode",
"-webkit-order",
"-webkit-padding-after",
"-webkit-padding-before",
"-webkit-padding-end",
"-webkit-padding-start",
"-webkit-perspective",
"-webkit-perspective-origin",
"-webkit-perspective-origin-x",
"-webkit-perspective-origin-y",
"-webkit-print-color-adjust",
"-webkit-rtl-ordering",
"-webkit-text-combine",
"-webkit-text-decorations-in-effect",
"-webkit-text-emphasis",
"-webkit-text-emphasis-color",
"-webkit-text-emphasis-position",
"-webkit-text-emphasis-style",
"-webkit-text-fill-color",
"-webkit-text-security",
"-webkit-text-stroke",
"-webkit-text-stroke-color",
"-webkit-text-stroke-width",
"-webkit-transform",
"-webkit-transform-origin",
"-webkit-transform-origin-x",
"-webkit-transform-origin-y",
"-webkit-transform-origin-z",
"-webkit-transform-style",
"-webkit-transition",
"-webkit-transition-delay",
"-webkit-transition-duration",
"-webkit-transition-property",
"-webkit-transition-timing-function",
"-webkit-user-drag",
"-webkit-user-modify",
"-webkit-user-select",
"-webkit-flow-into",
"-webkit-flow-from",
"-webkit-region-overflow",
"-webkit-region-break-after",
"-webkit-region-break-before",
"-webkit-region-break-inside",
"-webkit-shape-inside",
"-webkit-shape-outside",
"-webkit-wrap-margin",
"-webkit-wrap-padding",
"-webkit-wrap-flow",
"-webkit-wrap-through",
"-webkit-wrap",
"-webkit-dashboard-region",
"clip-path",
"clip-rule",
"mask",
"enable-background",
"filter",
"flood-color",
"flood-opacity",
"lighting-color",
"stop-color",
"stop-opacity",
"color-interpolation",
"color-interpolation-filters",
"color-profile",
"color-rendering",
"fill",
"fill-opacity",
"fill-rule",
"marker",
"marker-end",
"marker-mid",
"marker-start",
"shape-rendering",
"stroke",
"stroke-dasharray",
"stroke-dashoffset",
"stroke-linecap",
"stroke-linejoin",
"stroke-miterlimit",
"stroke-opacity",
"stroke-width",
"alignment-baseline",
"baseline-shift",
"dominant-baseline",
"glyph-orientation-horizontal",
"glyph-orientation-vertical",
"kerning",
"text-anchor",
"vector-effect",
"writing-mode",
"-webkit-svg-shadow",
};

const char* getPropertyName(CSSPropertyID);
WTF::String getJSPropertyName(CSSPropertyID);

inline CSSPropertyID convertToCSSPropertyID(int value)
{
    ASSERT((value >= firstCSSProperty && value <= lastCSSProperty) || value == CSSPropertyInvalid);
    return static_cast<CSSPropertyID>(value);
}

} // namespace WebCore

namespace WTF {
template<> struct DefaultHash<WebCore::CSSPropertyID> { typedef IntHash<unsigned> Hash; };
template<> struct HashTraits<WebCore::CSSPropertyID> : GenericHashTraits<WebCore::CSSPropertyID> {
    static const bool emptyValueIsZero = true;
    static const bool needsDestruction = false;
    static void constructDeletedValue(WebCore::CSSPropertyID& slot) { slot = static_cast<WebCore::CSSPropertyID>(WebCore::lastCSSProperty + 1); }
    static bool isDeletedValue(WebCore::CSSPropertyID value) { return value == (WebCore::lastCSSProperty + 1); }
};
}

#endif // CSSPropertyNames_h

