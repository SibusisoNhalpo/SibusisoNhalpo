// Mobile nav toggle
const navToggle = document.querySelector('.nav-toggle');
const nav = document.getElementById('siteNav');
if (navToggle) {
  navToggle.addEventListener('click', () => {
    const expanded = navToggle.getAttribute('aria-expanded') === 'true';
    navToggle.setAttribute('aria-expanded', String(!expanded));
    nav.classList.toggle('show');
  });
}
// Dynamic year
const yearEl = document.getElementById('year');
if (yearEl) yearEl.textContent = new Date().getFullYear();

// Role rotator on Home
const rotator = document.getElementById('roleRotator');
if (rotator) {
  const roles = ["Front-end Developer", "Back-end Developer"];
  let i = 0;
  function updateRole(){
    rotator.textContent = ` — ${roles[i]}`;
    i = (i + 1) % roles.length;
  }
  updateRole();
  setInterval(updateRole, 2200);
}

// Initialize radial meters (About -> Skills)
document.querySelectorAll('.radial[data-value]').forEach(el => {
  const v = parseFloat(el.getAttribute('data-value')) || 0.75;
  el.style.setProperty('--val', v);
});
