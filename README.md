<!-- ═══════════════════════════════════════════════════════ -->
<!--                  CUSTOM SVG HEADER                     -->
<!-- ═══════════════════════════════════════════════════════ -->
<div align="center">

<svg width="860" height="220" viewBox="0 0 860 220" fill="none" xmlns="http://www.w3.org/2000/svg">
  <defs>
    <linearGradient id="bg" x1="0" y1="0" x2="860" y2="220" gradientUnits="userSpaceOnUse">
      <stop stop-color="#0d0d16"/>
      <stop offset="1" stop-color="#0f0e22"/>
    </linearGradient>
    <radialGradient id="glow1" cx="20%" cy="30%" r="40%">
      <stop stop-color="#7c3aed" stop-opacity="0.35"/>
      <stop offset="1" stop-color="#7c3aed" stop-opacity="0"/>
    </radialGradient>
    <radialGradient id="glow2" cx="80%" cy="70%" r="40%">
      <stop stop-color="#06b6d4" stop-opacity="0.25"/>
      <stop offset="1" stop-color="#06b6d4" stop-opacity="0"/>
    </radialGradient>
    <radialGradient id="glow3" cx="55%" cy="50%" r="30%">
      <stop stop-color="#a855f7" stop-opacity="0.12"/>
      <stop offset="1" stop-color="#a855f7" stop-opacity="0"/>
    </radialGradient>
    <linearGradient id="textGrad" x1="0%" y1="0%" x2="100%" y2="0%">
      <stop stop-color="#e2d9ff"/>
      <stop offset="0.5" stop-color="#c4b5fd"/>
      <stop offset="1" stop-color="#67e8f9"/>
    </linearGradient>
    <linearGradient id="lineGrad" x1="0%" y1="0%" x2="100%" y2="0%">
      <stop stop-color="#7c3aed" stop-opacity="0"/>
      <stop offset="0.3" stop-color="#7c3aed"/>
      <stop offset="0.7" stop-color="#06b6d4"/>
      <stop offset="1" stop-color="#06b6d4" stop-opacity="0"/>
    </linearGradient>
  </defs>

  <!-- Background -->
  <rect width="860" height="220" rx="20" fill="url(#bg)"/>
  <rect width="860" height="220" rx="20" fill="url(#glow1)"/>
  <rect width="860" height="220" rx="20" fill="url(#glow2)"/>
  <rect width="860" height="220" rx="20" fill="url(#glow3)"/>

  <!-- Border -->
  <rect x="1" y="1" width="858" height="218" rx="19" stroke="#1e1b4b" stroke-width="1.5" fill="none"/>

  <!-- Decorative dot grid -->
  <g opacity="0.06">
    <circle cx="50" cy="40" r="1.5" fill="white"/><circle cx="90" cy="40" r="1.5" fill="white"/>
    <circle cx="130" cy="40" r="1.5" fill="white"/><circle cx="170" cy="40" r="1.5" fill="white"/>
    <circle cx="50" cy="80" r="1.5" fill="white"/><circle cx="90" cy="80" r="1.5" fill="white"/>
    <circle cx="130" cy="80" r="1.5" fill="white"/><circle cx="170" cy="80" r="1.5" fill="white"/>
    <circle cx="50" cy="120" r="1.5" fill="white"/><circle cx="90" cy="120" r="1.5" fill="white"/>
    <circle cx="690" cy="100" r="1.5" fill="white"/><circle cx="730" cy="100" r="1.5" fill="white"/>
    <circle cx="770" cy="100" r="1.5" fill="white"/><circle cx="810" cy="100" r="1.5" fill="white"/>
    <circle cx="690" cy="140" r="1.5" fill="white"/><circle cx="730" cy="140" r="1.5" fill="white"/>
    <circle cx="770" cy="140" r="1.5" fill="white"/><circle cx="810" cy="140" r="1.5" fill="white"/>
    <circle cx="690" cy="180" r="1.5" fill="white"/><circle cx="730" cy="180" r="1.5" fill="white"/>
  </g>

  <!-- Left circuit decorations -->
  <g stroke="#7c3aed" stroke-width="1.2" stroke-opacity="0.4" stroke-linecap="round">
    <path d="M 60 170 L 60 130 L 100 130"/>
    <circle cx="100" cy="130" r="3" fill="#7c3aed" fill-opacity="0.5"/>
    <path d="M 140 160 L 140 110 L 180 110"/>
    <circle cx="140" cy="160" r="2" fill="#7c3aed" fill-opacity="0.3"/>
  </g>

  <!-- Right circuit decorations -->
  <g stroke="#06b6d4" stroke-width="1.2" stroke-opacity="0.35" stroke-linecap="round">
    <path d="M 760 50 L 760 90 L 720 90"/>
    <circle cx="720" cy="90" r="3" fill="#06b6d4" fill-opacity="0.5"/>
    <path d="M 800 60 L 800 120"/>
    <circle cx="800" cy="120" r="2" fill="#06b6d4" fill-opacity="0.3"/>
  </g>

  <!-- Accent separator line -->
  <line x1="180" y1="148" x2="680" y2="148" stroke="url(#lineGrad)" stroke-width="1" opacity="0.6"/>

  <!-- Main name text -->
  <text
    x="430" y="96"
    font-family="-apple-system, BlinkMacSystemFont, 'Segoe UI', sans-serif"
    font-weight="800"
    font-size="46"
    fill="url(#textGrad)"
    text-anchor="middle"
    letter-spacing="4"
  >ANMOL AGARWAL</text>

  <!-- Role line -->
  <text
    x="430" y="132"
    font-family="-apple-system, BlinkMacSystemFont, 'Segoe UI', sans-serif"
    font-weight="500"
    font-size="13"
    fill="#8b8fbb"
    text-anchor="middle"
    letter-spacing="7"
  >FRONTEND ENGINEER  ·  BROWSER EXTENSION BUILDER  ·  BERLIN 🇩🇪</text>

  <!-- Status badge -->
  <rect x="330" y="160" width="200" height="28" rx="14" fill="#7c3aed" fill-opacity="0.15" stroke="#7c3aed" stroke-opacity="0.4" stroke-width="1"/>
  <circle cx="352" cy="174" r="5" fill="#4ade80"/>
  <circle cx="352" cy="174" r="5" fill="#4ade80" fill-opacity="0.4">
    <animate attributeName="r" from="5" to="10" dur="1.5s" repeatCount="indefinite"/>
    <animate attributeName="fill-opacity" from="0.4" to="0" dur="1.5s" repeatCount="indefinite"/>
  </circle>
  <text
    x="430" y="179"
    font-family="-apple-system, BlinkMacSystemFont, 'Segoe UI', sans-serif"
    font-weight="500"
    font-size="12"
    fill="#a78bfa"
    text-anchor="middle"
    letter-spacing="1.5"
  >Open to Opportunities</text>
</svg>

</div>

<br/>

<!-- ═══════════════════════════════════════════════════════ -->
<!--                  TYPING ANIMATION                      -->
<!-- ═══════════════════════════════════════════════════════ -->
<p align="center">
  <img src="https://readme-typing-svg.demolab.com?font=Fira+Code&weight=700&size=20&duration=3000&pause=800&color=7C3AED&center=true&vCenter=true&width=640&height=48&lines=Crafting+beautiful+UIs+since+day+one+%F0%9F%8E%A8;React+%7C+TypeScript+%7C+Chrome+Extensions;Turning+ideas+into+pixel-perfect+products+%E2%9C%A8;Writing+code+that+humans+love+to+use+%F0%9F%92%9C" alt="Typing SVG" />
</p>

<!-- ═══════════════════════════════════════════════════════ -->
<!--                  SOCIAL LINKS                          -->
<!-- ═══════════════════════════════════════════════════════ -->
<p align="center">
  <a href="https://www.linkedin.com/in/fineanmol/" target="_blank">
    <img src="https://img.shields.io/badge/LinkedIn-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white" />
  </a>
  <a href="https://twitter.com/fineanmol" target="_blank">
    <img src="https://img.shields.io/badge/Twitter-1DA1F2?style=for-the-badge&logo=twitter&logoColor=white" />
  </a>
  <a href="https://fineanmol.github.io/" target="_blank">
    <img src="https://img.shields.io/badge/Portfolio-7C3AED?style=for-the-badge&logo=googlechrome&logoColor=white" />
  </a>
  <a href="https://t.me/fineanmol" target="_blank">
    <img src="https://img.shields.io/badge/Telegram-229ED9?style=for-the-badge&logo=telegram&logoColor=white" />
  </a>
  <a href="https://www.instagram.com/fineanmol/" target="_blank">
    <img src="https://img.shields.io/badge/Instagram-E4405F?style=for-the-badge&logo=instagram&logoColor=white" />
  </a>
  <a href="https://topmate.io/fineanmol" target="_blank">
    <img src="https://img.shields.io/badge/Topmate-2cb67d?style=for-the-badge&logo=calendar&logoColor=white" />
  </a>
</p>

<br/>

---

## 🧠 What I Do

```
const anmol = {
  role      : "Frontend Engineer & Browser Extension Developer",
  location  : "Berlin, Germany 🇩🇪",
  passion   : "Building tools that make the web better for developers",
  focus     : ["React", "TypeScript", "Chrome Extensions", "UI/UX", "Node.js"],
  currentlyBuilding : "Next-gen DevTools Chrome extensions",
  openTo    : ["Full-time Roles", "Freelance", "Open Source Collabs"],
};
```

<br/>

---

## ⚡ Tech Stack

<div align="center">

### 🎨 Frontend — My Home Turf
![React](https://img.shields.io/badge/React-20232A?style=for-the-badge&logo=react&logoColor=61DAFB)
![TypeScript](https://img.shields.io/badge/TypeScript-1e2030?style=for-the-badge&logo=typescript&logoColor=3178C6)
![JavaScript](https://img.shields.io/badge/JavaScript-1e2030?style=for-the-badge&logo=javascript&logoColor=F7DF1E)
![HTML5](https://img.shields.io/badge/HTML5-1e2030?style=for-the-badge&logo=html5&logoColor=E34F26)
![CSS3](https://img.shields.io/badge/CSS3-1e2030?style=for-the-badge&logo=css3&logoColor=1572B6)
![Vue.js](https://img.shields.io/badge/Vue.js-1e2030?style=for-the-badge&logo=vue.js&logoColor=4FC08D)
![Next.js](https://img.shields.io/badge/Next.js-000000?style=for-the-badge&logo=next.js&logoColor=white)
![Vite](https://img.shields.io/badge/Vite-1e2030?style=for-the-badge&logo=vite&logoColor=646CFF)

### 🧩 Browser Extension Ecosystem
![Chrome Extensions](https://img.shields.io/badge/Chrome_API-1e2030?style=for-the-badge&logo=googlechrome&logoColor=4285F4)
![Manifest V3](https://img.shields.io/badge/Manifest_V3-1e2030?style=for-the-badge&logo=googlechrome&logoColor=EA4335)
![Web APIs](https://img.shields.io/badge/Web_APIs-1e2030?style=for-the-badge&logo=javascript&logoColor=F7DF1E)

### ⚙️ Backend, Data & Cloud
![Node.js](https://img.shields.io/badge/Node.js-1e2030?style=for-the-badge&logo=node.js&logoColor=339933)
![Python](https://img.shields.io/badge/Python-1e2030?style=for-the-badge&logo=python&logoColor=3776AB)
![Firebase](https://img.shields.io/badge/Firebase-1e2030?style=for-the-badge&logo=firebase&logoColor=FFCA28)
![MongoDB](https://img.shields.io/badge/MongoDB-1e2030?style=for-the-badge&logo=mongodb&logoColor=47A248)
![AWS](https://img.shields.io/badge/AWS-1e2030?style=for-the-badge&logo=amazonaws&logoColor=FF9900)
![Docker](https://img.shields.io/badge/Docker-1e2030?style=for-the-badge&logo=docker&logoColor=2496ED)
![Puppeteer](https://img.shields.io/badge/Puppeteer-1e2030?style=for-the-badge&logo=puppeteer&logoColor=40B5A4)

</div>

<br/>

---

## 📈 GitHub Activity

<div align="center">
  <img src="https://github-readme-stats.vercel.app/api?username=fineanmol&show_icons=true&theme=tokyonight&count_private=true&hide_border=true&bg_color=0d0d16&title_color=7c3aed&icon_color=06b6d4&text_color=c4b5fd" height="170" alt="Anmol's GitHub Stats" />
  &nbsp;&nbsp;
  <img src="https://github-readme-stats.vercel.app/api/top-langs/?username=fineanmol&layout=compact&theme=tokyonight&langs_count=8&hide_border=true&bg_color=0d0d16&title_color=7c3aed&text_color=c4b5fd" height="170" alt="Top Languages" />
</div>

<br/>

<div align="center">
  <img src="https://github-readme-streak-stats.herokuapp.com?user=fineanmol&theme=tokyonight&hide_border=true&background=0d0d16&ring=7c3aed&fire=a855f7&currStreakLabel=06b6d4" alt="GitHub Streak" />
</div>

<br/>

<div align="center">
  <img src="https://github-readme-activity-graph.vercel.app/graph?username=fineanmol&theme=tokyo-night&hide_border=true&bg_color=0d0d16&color=c4b5fd&line=7c3aed&point=06b6d4" alt="Contribution Graph" />
</div>

<br/>

---

## 🏅 Holopin Board

<div align="center">
  <a href="https://holopin.io/@fineanmolwork">
    <img src="https://holopin.me/fineanmolwork" alt="Holopin Board" />
  </a>
</div>

<br/>

---

<div align="center">
  <img src="https://visitor-badge.glitch.me/badge?page_id=fineanmol" alt="Visitors" />
  <br/><br/>
  <i>"I don't just build interfaces — I craft experiences." ✨</i>
</div>
