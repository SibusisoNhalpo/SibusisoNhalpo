const grid = document.getElementById('projectGrid');
const filterBtns = document.querySelectorAll('.filter-btn');
if (grid && filterBtns.length) {
  filterBtns.forEach(btn => btn.addEventListener('click', () => {
    document.querySelector('.filter-btn.active')?.classList.remove('active');
    btn.classList.add('active');
    const f = btn.getAttribute('data-filter');
    [...grid.children].forEach(card => {
      if (f === 'all' || card.classList.contains(f)) {
        card.style.display = '';
        card.style.animation = 'grow .6s ease';
      } else {
        card.style.display = 'none';
      }
    });
  }));
}
