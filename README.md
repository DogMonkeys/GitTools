#Git Tools - 一个用c++简化命令的小程序

目前实现了以下四个功能: `gc.exe`, `st.exe`, `ad.exe`, `gp.exe`

```c++
ad //对应  git add ./*
gc //对应  git commit -m "Git Tools commit"
st //对应  git status
gp //对应  git push
```

使用前应将四个程序放在环境变量下, 并保证执行目录是包含`.git`目录的.

