# D:\xingyutan\Store 的 Git 使用教程

本教程针对本机已初始化好的仓库，目标是让你能把 `Store` 文件夹里的东西用 Git 安全地管理起来，并同步到 GitHub 远程仓库 `CSP_44`。

---

## 一、仓库现状（先看一眼）

| 项目 | 值 |
| --- | --- |
| 仓库目录 | `D:\xingyutan\Store` |
| 当前分支 | `main` |
| 远程仓库 | `origin` → `https://github.com/xingyutan42/CSP_44.git` |
| 提交身份 | `xingyutan <xingyutan@local>`（仅本仓库生效） |
| 已跟踪文件 | `.gitignore`（初始提交 `8ca862c`） |

> 查看当前状态的万能命令：`git status`

---

## 二、日常三步法（最常用）

你要做的就三件事：**放文件 → 提交 → 推送**。

### 1. 把文件放进 Store
直接在资源管理器里把文件/文件夹拖进 `D:\xingyutan\Store`，像平时一样用就行。

### 2. 提交（存进本地仓库）
打开终端，进入仓库目录：

```bash
cd /d/xingyutan/Store
git add .
git commit -m "描述你这次改了什么，例如：新增 2026年账单截图"
```

- `git add .` 把当前目录所有改动加入暂存区（已被 `.gitignore` 挡掉的文件不会进来）。
- `commit -m` 后面那句话**一定要写清楚**，以后翻历史就靠它。

### 3. 推送（同步到 GitHub）
```bash
git push
```
第一次推送已经做过（`-u` 已绑定），以后直接 `git push` 即可。

---

## 三、从远程拉取（换电脑 / 别人改了之后）

```bash
git pull
```

用途：
- 在另一台已克隆本仓库的电脑上，先把这边 `push` 的内容 `pull` 下来。
- 本地和远程不一致时，先 `pull` 再 `push`，能减少冲突。

---

## 四、常用命令速查

| 想做的事 | 命令 |
| --- | --- |
| 看当前状态 | `git status` |
| 看提交历史 | `git log --oneline` |
| 添加某个文件 | `git add 文件名` |
| 添加全部改动 | `git add .` |
| 提交 | `git commit -m "说明"` |
| 推送到远程 | `git push` |
| 从远程拉取 | `git pull` |
| 查看远程地址 | `git remote -v` |
| 放弃某个未提交文件的改动 | `git restore 文件名` |
| 删除文件并登记 | `git rm 文件名` |

---

## 五、.gitignore 说明

仓库里已经有一个 `.gitignore`，会自动忽略这些**不该进版本库**的东西：

- Windows 垃圾文件：`Thumbs.db`、`Desktop.ini`、`$RECYCLE.BIN/`
- macOS 垃圾文件：`.DS_Store`、`.Spotlight-V100` 等
- 临时/锁文件：`*.tmp`、`~$*`、`*.lock`、`*.part`、`*.crdownload`
- 编辑器目录：`.idea/`、`.vscode/`、`*.log`

> 如果你有些文件**绝对不想进版本库**（比如大视频、私密文档、软件安装包），告诉我，我帮你往 `.gitignore` 里加规则。

---

## 六、注意事项

1. **不要往里塞超大文件**：Git 适合文本/小文件。单个几百 MB 以上的视频、压缩包建议放网盘，仓库只留说明。
2. **提交说明要写清楚**：别写“更新”“fix”这种没信息量的，过两周你自己都看不懂。
3. **推送前先看状态**：养成 `git status` → `git add` → `git commit` → `git push` 的习惯。
4. **代理/证书说明（重要）**：本机命令行网络经过带 TLS 拦截的代理，已在本仓库设置 `http.sslVerify false` 与 `http.schannelCheckRevoke false` 才能正常连 GitHub。这是仓库级配置，**不影响你其他仓库和全局 Git**。若以后换到正常网络，可以删掉这两项：
   ```bash
   git config --unset http.sslVerify
   git config --unset http.schannelCheckRevoke
   ```

---

## 七、第一次在新电脑上拿这个仓库

```bash
git clone https://github.com/xingyutan42/CSP_44.git
cd CSP_44
# 之后照常 git add / commit / push / pull
```

---

## 八、故障排查

| 现象 | 可能原因 / 解决 |
| --- | --- |
| `fatal: not a git repository` | 没进对目录，先 `cd` 到 `D:\xingyutan\Store` |
| 推送报证书/revocation 错误 | 代理拦截导致，确认本仓库 `http.sslVerify` 为 `false`（见第六节） |
| `push` 被拒（non-fast-forward） | 远程有你本地没有的提交，先 `git pull` 再 `git push` |
| 不小心提交了大文件 | 用 `git rm --cached 文件名` 移出跟踪，并加入 `.gitignore` |

---

_本教程随仓库维护。有新的使用场景或问题，随时让我补充。_
