# Developer Portfolio Website

A modern, responsive portfolio site with animations and clear structure.

## Pages
- `index.html`: Home with rotating role text — _Developer → Front-end / Back-end_.
- `about.html`: Background, **Skills** (technical + soft with visuals), and **Education**.
- `portfolio.html`: Projects (Java File I/O Management System, Java Login UI, etc.).
- `contact.html`: Contact info + contact form with client-side validation.
- `resume.html`: Downloadable CV link.

## Scripts
- `js/main.js`: Mobile nav, rotating roles, radial meters.
- `js/portfolio.js`: Project filter logic.
- `js/contact.js`: Contact form validation + `mailto:` fallback.

## Assets
- Place your profile photo at `images/profile.jpg` (a placeholder is included).
- Replace project screenshots in `images/`.
- Icons live in `images/icons/`.

## Add your CV
1. Create a folder named `cv/` in the project root.
2. Put your file there as `Sibusiso_Nhlapo_CV.pdf`.
3. The **Resume/CV** page links to `cv/Sibusiso_Nhlapo_CV.pdf`.

## Customize
- Update links (GitHub, email, phone) in `contact.html` and the footer.
- Edit skills levels in `about.html` (progress bars and radial `data-value`).
- Add or edit projects in `portfolio.html` (and tag with `java` or `web`).

## Run
Open `index.html` in your browser. For best results use a local server (e.g. VS Code Live Server).
