//----------------------------------------------------------------------
// 型宣言（Type declaration） 
//----------------------------------------------------------------------

typedef enum {
  TK_RESERVED, // 記号
  TK_NUM,      // 整数トークン
  TK_EOF,      // 入力の終わりを表すトークン
} TokenKind;

typedef struct Token Token;

// トークン型
struct Token {
  TokenKind kind; // トークンの型
  Token *next;    // 次の入力トークン
  int val;        // kindがTK_NUMの場合、その数値
  char *str;      // トークン文字列
  int len;        // トークンの長さ
};

// 抽象構文木のノードの種類
typedef enum {
  ND_ADD, // +
  ND_SUB, // -
  ND_MUL, // *
  ND_DIV, // /
  ND_EQ,  // ==
  ND_NE,  // !=
  ND_LT,  // <
  ND_LE,  // <=
  ND_NUM, // integer
} NodeKind;

typedef struct Node Node;

struct Node {
  NodeKind kind; // ノードの型
  Node *lhs;     // 左辺 left-hand side
  Node *rhs;     // 右辺 right-hand side
  int val;       // kindがND_NUMの場合のみ使う
};

// 現在着目しているトークン
Token *token;
char *user_input;

//----------------------------------------------------------------------
// プロトタイプ宣言（Prototype declaration）
//----------------------------------------------------------------------
void error_at(char *loc, char *fmt, ...);
