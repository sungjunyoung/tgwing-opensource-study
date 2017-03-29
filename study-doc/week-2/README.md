## 스터디 2주차


1. **한학기 동안 진행할 일들**
    - 신입생
        - 학교 실습 파일들 푸시하기
        - 개인별 저장소 관리
    - 재학생
        - 티지윙 날적이 만들기
        - 역할분담
            - server
                - node.js
            - client
                - ios
                - android
                - web
2. **Pull / Fetch**
    - 업데이트된 tgwing-opensource-study pull 받아보기
        - `git add junyoung https://github.com/sungjunyoung/tgwing-opensource-study.git`
        > junyoung 이라는 단축 이름으로 <url> 의 리모트 저장소를 추가합니다
        - `git pull junyoung master`
        > junyoung 이라는 단축 이름을 가진 리모트 저장소에서 로컬 master 브랜치로 소스를 받아오고, merge 시킵니다.
        이 명령어는 로컬에서 작업할 떄마다 해주는 게 좋습니다. (소스를 원본과 싱크를 맞춰줍니다.)
    - Fetch 해보기
        
3. **Opensource WorkFlow**
    > 실제 오픈소스에 기여할 때의 간단한 작업 순서를 실습합니다. / 학기중 스터디는 항상 다음과 같이 진행됩니다.
  
    - 브랜치 만들기
        - `git branch question`
        > question 라는 브랜치를 만듭니다. 브랜치는 이슈, 즉 버그를 수정하거나 / 기능을 추가하는 등 어떤 작업을 할 때마다 만들는 것이 좋습니다.
        - `git checkout question`
    - 질문 올려보기
        - `<project path>/questions/` 에 질문 폴더를 생성합니다.
        > 질문 폴더의 형식은 `<nickname>-YYYY-MM-DD-<title>` 입니다.
        - 만든 폴더 내에 텍스트 파일을 만들어 하고싶은 말 / 질문사항 을 적습니다.
    - 변경사항 인덱스 등록, 커밋, 푸시하기
        - `git add .`
        - `git commit -m "<message>"`
        - `git push`
    - junyoung/master 브랜치로 origin/question 브랜치에 대한 pull-request 보내기
    - 프로젝트 관리자의 코드 수정 요청
        - "질문파일 포맷을 .txt 로 바꿔주세요"
    - 파일 수정하기
    - 다시 푸시하기
        - `git add .`
        - `git commit -m ".txt 로 파일 포맷 변경"`
        - `git push`
        
4. 2주차 끗
    

